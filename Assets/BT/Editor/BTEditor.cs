using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Runtime.Versioning;
using System.Threading.Tasks;
using BT.Editor;
using BT.Editor.ContextualCommands;
using BT.Scripts;
using BT.Scripts.Drawers;
using Editor;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;
using UnityEngine.XR;
using Debug = System.Diagnostics.Debug;
using UDebug = UnityEngine.Debug;

namespace BT
{
    [Serializable]
    public class BtEditor : EditorWindow
    {
        private const float MaxZoomDistance = 10f;
        private const float MinZoomDistance = 0.5f;
        private const float ZoomStep = 0.01f;
        private const string saveOnCloseKey = "SAVE_ON_CLOSE";
        private const string saveOnPlayKey = "SAVE_ON_PLAY_KEY";

        private static List<BaseNode> nodes = new List<BaseNode>();
        private static List<NodeConnection> _connections = new List<NodeConnection>();
        private static List<BaseNode> _nodesToDestroy = new List<BaseNode>();
        private static List<BlackBoardVariable> _variablesToDestroy = new List<BlackBoardVariable>();

        private static Rect _zoomArea;

        public BehaviorTreeGraph currentGraph;
        private bool _autoSave;
        private float _currentZoom = 0.6f;
        private Vector2 _drag;
        private Vector2 _mousePosition;
        private Vector2 _offset;
        private BaseNode _rightClickedNode;
        [SerializeField] private bool _saveOnClose;
        [SerializeField] private bool _saveOnPlay;
        private BaseNode _selectedNode;
        private GUISkin _skin;

        private TooltipWindow _tooltipWindow;
        public SearchTasksWindow searchableTaskWindow;
        public BaseNode entry;
        public BaseNode root;

        public bool DebugMode = true;
        public int GraphInstanceID = 0;

        //Objects ID data for loading the object when hitting the play button.
        private List<int> nodeIDs;
        private List<IDsListWrapper> _blackBoardVariablesID;
        private List<ConnectionData> _connectionsIDs;
        private ConnectionData _entryConnectionID;
        private int entryID;
        private List<Command> _commands;

        public List<BaseNode> Nodes => nodes;
        public List<NodeConnection> Connections => _connections;

        [Serializable]
        private class IDsListWrapper
        {
            public int[] ids;

            public IDsListWrapper(int[] ids)
            {
                this.ids = ids;
            }
        }

        [Serializable]
        private class ConnectionData
        {
            public int StartSocketID;
            public int EndSocketID;
            public int ConnectionID;

            public ConnectionData(int startSocketId, int endSocketId, int connectionId)
            {
                this.StartSocketID = startSocketId;
                this.EndSocketID = endSocketId;
                this.ConnectionID = connectionId;
            }
        }

        //Called only when created the window.
        [MenuItem("BT/Editor")]
        private static void Init()
        {
            var _editor = GetWindow<BtEditor>("OG", true, new Type[1]
            {
                typeof(SceneView)
            });
            _editor.titleContent = new GUIContent("BT Editor", Resources.Load<Texture>("star"),
                "A behavior tree visual editor for everyone");
            _editor.minSize = new Vector2(600, 500);
            _editor.wantsMouseMove = true;
            _editor.Show();

            EditorPrefs.SetBool("ActiveEditor", true);
            BTLog.Log("Init Called");
        }

        //Called every time the editor is enabled.
        private void StartEditor()
        {
            BTLog.Log("On Enable Called");
            Application.quitting += OnApplicationQuit;
            EditorApplication.playModeStateChanged += EditorApplicationOnPlayModeStateChanged;

            _saveOnPlay = EditorPrefs.GetBool(saveOnPlayKey, false);
            _saveOnClose = EditorPrefs.GetBool(saveOnCloseKey, false);

            _skin = Resources.Load<GUISkin>("BTSkin");

            if (nodeIDs == null)
                nodeIDs = new List<int>();

            if (_blackBoardVariablesID == null)
                _blackBoardVariablesID = new List<IDsListWrapper>();

            if (_connectionsIDs == null)
                _connectionsIDs = new List<ConnectionData>();

            if (_commands == null)
                _commands = new List<Command>();

            BaseNode.OnNodeRightClicked += view => _rightClickedNode = view;

            nodes = new List<BaseNode>();
            _connections = new List<NodeConnection>();
            _nodesToDestroy = new List<BaseNode>();
            _variablesToDestroy = new List<BlackBoardVariable>();

            RestoreSerializedData();

            _tooltipWindow = null;

            BTLog.Log("Started Editor");
        }

        private void RestoreSerializedData()
        {
            if (currentGraph == null)
                return;

            AssetDatabase.LoadMainAssetAtPath(AssetDatabase.GetAssetPath(currentGraph));

            BTLog.Log("Getting node's ids");
            nodes.Clear();
            _connections.Clear();

            BaseNode rootNode = null;

            entry = currentGraph.EntryNode;

            if (entry == null)
                CreateEntryNode();
            else
                NodeUtils.InitializeNode(entry, OnNodeSocketClicked);


            for (int i = 0; i < currentGraph.SavedNodes.Count; i++)
            {
                nodes.Add(currentGraph.SavedNodes[i]);

                NodeUtils.InitializeNode(nodes[i], OnNodeSocketClicked);

                nodes[i].OnClickedNode += OnClickedNode;


                for (int j = 0; j < currentGraph.SavedNodes[i].variables.Count; j++)
                {
                    nodes[i].variables[j] = currentGraph.SavedNodes[i].variables[j];
                }
                

                if (nodes[i].IsRootView)
                    rootNode = nodes[i];
            }

            if (rootNode != null && currentGraph.entryConnection != null)
            {
                currentGraph.entryConnection.Init(entry.exitSocket,
                    rootNode.entrySocket, currentGraph.entryConnection.ConnectionColor, true);
                _connections.Add(currentGraph.entryConnection);
            }

            foreach (var connection in currentGraph.SavedConnections)
            {
                _connections.Add(connection);
                connection.Init(connection.StartSocket, connection.EndSocket, connection.ConnectionColor, false);
            }

            EditorFix.SetObjectDirty(currentGraph);
        }


        private void OnDisable()
        {
            BTLog.Log("On Disable Called");
            Application.quitting -= OnApplicationQuit;
            EditorApplication.playModeStateChanged -= EditorApplicationOnPlayModeStateChanged;

            EditorPrefs.SetBool(saveOnPlayKey, _saveOnPlay);
            EditorPrefs.SetBool(saveOnCloseKey, _saveOnClose);
        }

        private void OnEnable()
        {
            StartEditor();
        }


        private void EditorApplicationOnPlayModeStateChanged(PlayModeStateChange state)
        {
            switch (state)
            {
                case PlayModeStateChange.ExitingEditMode:
                    CollectObjectsID();
                    break;
                case PlayModeStateChange.EnteredPlayMode:
                    //OnEnable is called when Entered Play Mode
                    ConvertIDsToObjects();
                    break;
                case PlayModeStateChange.EnteredEditMode:
                    StartEditor();
                    break;
            }
        }

        private void ConvertIDsToObjects()
        {
            if (GraphInstanceID != 0)
                currentGraph = EditorUtility.InstanceIDToObject(GraphInstanceID) as BehaviorTreeGraph;

            entry = EditorUtility.InstanceIDToObject(entryID) as BaseNode;

            for (var index = 0; index < currentGraph.SavedNodes.Count; index++)
            {
                currentGraph.SavedNodes[index] = EditorUtility.InstanceIDToObject(nodeIDs[index]) as BaseNode;

                for (int i = 0; i < _blackBoardVariablesID[index].ids.Length; i++)
                {
                    currentGraph.SavedNodes[index].variables[i] =
                        EditorUtility.InstanceIDToObject(_blackBoardVariablesID[index].ids[i]) as BlackBoardVariable;
                }
            }

            currentGraph.entryConnection.StartSocket =
                EditorUtility.InstanceIDToObject(_entryConnectionID.StartSocketID) as NodeSocket;

            currentGraph.entryConnection.EndSocket =
                EditorUtility.InstanceIDToObject(_entryConnectionID.EndSocketID) as NodeSocket;

            currentGraph.entryConnection =
                EditorUtility.InstanceIDToObject(_entryConnectionID.ConnectionID) as NodeConnection;

            for (int i = 0; i < currentGraph.SavedConnections.Count; i++)
            {
                currentGraph.SavedConnections[i].StartSocket =
                    EditorUtility.InstanceIDToObject(_connectionsIDs[i].StartSocketID) as NodeSocket;

                currentGraph.SavedConnections[i].EndSocket =
                    EditorUtility.InstanceIDToObject(_connectionsIDs[i].EndSocketID) as NodeSocket;

                currentGraph.SavedConnections[i] =
                    EditorUtility.InstanceIDToObject(_connectionsIDs[i].ConnectionID) as NodeConnection;
            }

            EditorUtility.SetDirty(currentGraph);
        }

        private void CollectObjectsID()
        {
            nodeIDs.Clear();
            _blackBoardVariablesID.Clear();
            _entryConnectionID = null;
            _connectionsIDs.Clear();
            GraphInstanceID = 0;

            if (currentGraph != null)
            {
                if (_saveOnPlay)
                    SerializingSystem.SaveGraphData(currentGraph, nodes, _connections);

                GraphInstanceID = currentGraph.GetInstanceID();

                entryID = entry.GetInstanceID();

                foreach (var savedNode in currentGraph.SavedNodes)
                {
                    int[] variablesID = new int[savedNode.variables.Count];

                    for (int i = 0; i < savedNode.variables.Count; i++)
                    {
                        variablesID[i] = savedNode.variables[i].GetInstanceID();
                    }

                    _blackBoardVariablesID.Add(new IDsListWrapper(variablesID));


                    nodeIDs.Add(savedNode.GetInstanceID());
                }

                _entryConnectionID = new ConnectionData(currentGraph.entryConnection.StartSocket.GetInstanceID(),
                    currentGraph.entryConnection.EndSocket.GetInstanceID(),
                    currentGraph.entryConnection.GetInstanceID());

                foreach (var connection in currentGraph.SavedConnections)
                {
                    _connectionsIDs.Add(new ConnectionData(connection.StartSocket.GetInstanceID(),
                        connection.EndSocket.GetInstanceID(), connection.GetInstanceID()));
                }

                EditorUtility.SetDirty(currentGraph);
            }

            if (_tooltipWindow != null)
                _tooltipWindow.Close();
        }

        [DidReloadScripts]
        private static void OnScriptsReloaded()
        {
            if (EditorPrefs.GetBool("ActiveEditor") && !EditorApplication.isPlayingOrWillChangePlaymode)
            {
                var window = GetWindow<BtEditor>();

                window.Close();
                Init();
                BTLog.Log("Scripts recompiled! Regenerating window!");
            }
        }

        private void OnApplicationQuit()
        {
            EditorUtility.SetDirty(currentGraph);
        }

        private void OnDestroy()
        {
            if (_tooltipWindow != null)
                _tooltipWindow.Close();

            if (_saveOnClose)
                SerializingSystem.SaveGraphData(currentGraph, nodes, _connections);

            EditorPrefs.SetBool("ActiveEditor", false);
            EditorUtility.SetDirty(this);
        }


        private void OnGUI()
        {
            if (currentGraph == null)
            {
                ShowNotification(new GUIContent("Please Select a Graph before you start using the tool",
                    Resources.Load<Texture>("tree_icon")));
            }

            _mousePosition = Event.current.mousePosition;


            ProcessEvents(Event.current);

            var controlsArea = DrawGlobalGuiControls();

            if (currentGraph == null)
            {
                if (GUI.changed) Repaint();
                return;
            }

            Rect inspectorRect = new Rect(0, controlsArea.yMax, position.width / 4,
                position.height);

            GUILayout.BeginArea(inspectorRect, EditorStyles.helpBox);
            GUILayout.BeginVertical();
            GUILayout.Label("Inspector", _skin.GetStyle("H1"));

            if (_selectedNode == null)
                GUILayout.Label("Selected Node: None", _skin.GetStyle("H2"));
            else
            {
                GUILayout.Label("Selected Node: " + _selectedNode.windowTitle, _skin.GetStyle("H2"));
                _selectedNode.DrawInspector(Event.current);
            }

            GUILayout.EndVertical();
            GUILayout.EndArea();

            Rect workspaceArea = new Rect(inspectorRect.xMax, controlsArea.yMax, position.width - inspectorRect.width,
                position.height - controlsArea.height);

            GUI.BeginClip(workspaceArea);
            DrawBackgroundGrid(10, 0.2f, Color.grey, workspaceArea);
            DrawBackgroundGrid(50, 0.4f, Color.grey, workspaceArea);
            GUI.EndClip();

            _zoomArea = workspaceArea;
            _zoomArea = EditorZoomArea.Begin(_currentZoom, _zoomArea);

            foreach (var connection in _connections) connection.Draw();

            DrawWindows();

            ProcessNodeEvents(Event.current);

            EditorZoomArea.End();

            if (GUI.changed) Repaint();
        }


        #region Creation Methods

        public void CreateEntryNode()
        {
            Rect entryViewWindowRect = new Rect(400, 20,
                BTConstants.kNodeWidht, BTConstants.kNodeHeight);

            entry = CreateInstance<EntryNode>();
            entry.windowRect = entryViewWindowRect;
            entry.windowTitle = "Entry View";
            currentGraph.EntryNode = entry;

            entry.exitSocket = CreateInstance<NodeSocket>();
            entry.exitSocket.Init(
                new Rect(entry.windowRect.xMin, entry.windowRect.yMax, BTConstants.SocketWidth,
                    BTConstants.SocketHeight), NodeSocket.NodeSocketType.Out, entry, OnNodeSocketClicked);
            entry.exitSocket.name = entry.name + " exitSocket";

            entry.Init(null, true, false, false, OnNodeSocketClicked);

            AssetDatabase.AddObjectToAsset(entry.exitSocket, currentGraph);
            AssetDatabase.AddObjectToAsset(entry, currentGraph);

            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
        }

        public void CreateNodeView(SearchTasksWindow.NodeType nodeType, Rect windowRect)
        {
            var instance = NodeFactory.Create<BaseNode>(nodeType, windowRect);

            nodes.Add(instance);

            instance.OnClickedNode += OnClickedNode;

            if (_autoSave)
                SerializingSystem.SaveGraphData(currentGraph, nodes, _connections);
        }


        private void ShowSearchTaskWindow(Event e)
        {
            //TODO refactor this method to show the window with correct measurements.
            if (searchableTaskWindow == null)
            {
                searchableTaskWindow = CreateInstance<SearchTasksWindow>();
                var mouseScreenPos = GUIUtility.GUIToScreenPoint(e.mousePosition);
                searchableTaskWindow.parentWindow = this;
                searchableTaskWindow.position = new Rect(mouseScreenPos.x - position.width / 10,
                    mouseScreenPos.y - position.height / 10, 300, 300);
                searchableTaskWindow.ShowPopup();
                searchableTaskWindow.Focus();
            }
        }

        #endregion

        #region Drawing Methods

        private Rect DrawGlobalGuiControls()
        {
            var controlsArea = new Rect(0, 0, position.width, position.height / 12);

            GUILayout.BeginArea(controlsArea);
            GUILayout.BeginVertical(EditorStyles.toolbar);
            GUILayout.BeginHorizontal();

            EditorGUI.BeginChangeCheck();

            currentGraph =
                EditorGUILayout.ObjectField(currentGraph, typeof(BehaviorTreeGraph), false) as BehaviorTreeGraph;
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl(null);

                if (currentGraph != null)
                {
                    nodes.Clear();
                    _connections.Clear();
                    RestoreSerializedData();
                    GraphInstanceID = currentGraph.GetInstanceID();
                }
            }

            EditorGUILayout.Separator();
            EditorGUI.BeginChangeCheck();
            _autoSave = GUILayout.Toggle(_autoSave, "Autosave Enabled", EditorStyles.toolbarButton);
            if (EditorGUI.EndChangeCheck())
                GUI.FocusControl(null);

            EditorGUI.BeginChangeCheck();
            _saveOnClose = GUILayout.Toggle(_saveOnClose, "Save on window close", EditorStyles.toolbarButton);
            if (EditorGUI.EndChangeCheck())
                GUI.FocusControl(null);

            EditorGUI.BeginChangeCheck();

            _saveOnPlay = GUILayout.Toggle(_saveOnPlay, "Save on Play Pressed", EditorStyles.toolbarButton);
            if (EditorGUI.EndChangeCheck())
                GUI.FocusControl(null);

            GUILayout.Label("Current Graph ID: " + GraphInstanceID + " and graph value: " + currentGraph,
                EditorStyles.whiteLabel);
            /*
            if (GUILayout.Button("Show window"))
                _showWindows = !_showWindows;*/

            if (GUILayout.Button("Save Graph Data", EditorStyles.toolbarButton))
                SerializingSystem.SaveGraphData(currentGraph, nodes, _connections);

            if (GUILayout.Button("Reset zoom", EditorStyles.toolbarButton))
                _currentZoom = 1;
            

            GUILayout.EndHorizontal();
            GUILayout.EndVertical();

            //GUILayout.BeginVertical();
            //_zoom = GUILayout.HorizontalSlider(_zoom, 0, 6);
            //GUILayout.EndVertical();

            GUILayout.BeginVertical();
            if (currentGraph != null)
                GUILayout.Label(currentGraph.Name, _skin.GetStyle("H1"));
            GUILayout.EndVertical();

            GUILayout.EndArea();
            return controlsArea;
        }

        private void DrawWindows()
        {
            BeginWindows();

            if (entry != null)
            {
                entry.windowRect = GUI.Window(-1, entry.windowRect, (id) => entry.DrawWindow(id),
                    entry.windowTitle);

                entry.DrawSockets();
            }

            for (var index = 0; index < nodes.Count; index++)
            {
                nodes[index].DrawSockets();

                nodes[index].windowRect = GUI.Window(index, nodes[index].windowRect, DrawNodeWindowCallback,
                    nodes[index].windowTitle);
            }

            EndWindows();
        }

        private void DrawNodeWindowCallback(int id)
        {
            nodes[id].DrawWindow(id);
        }

        private void DrawBackgroundGrid(float gridSpacing, float gridOpacity, Color gridColor, Rect workspaceArea)
        {
            var widthDivs = Mathf.CeilToInt(workspaceArea.width / gridSpacing);
            var heightDivs = Mathf.CeilToInt(workspaceArea.height / gridSpacing);

            Handles.BeginGUI();

            Handles.color = new Color(gridColor.r, gridColor.g, gridColor.b, gridOpacity);

            _offset += _drag;
            var newOffset = new Vector3(_offset.x % gridSpacing, _offset.y % gridSpacing, 0);

            for (var i = 0; i < widthDivs; i++)
                Handles.DrawLine(new Vector3(gridSpacing * i, -gridSpacing, 0) + newOffset,
                    new Vector3(gridSpacing * i, workspaceArea.height, 0f) + newOffset);

            for (var j = 0; j < heightDivs; j++)
                Handles.DrawLine(new Vector3(-gridSpacing, gridSpacing * j, 0) + newOffset,
                    new Vector3(workspaceArea.width, gridSpacing * j, 0f) + newOffset);

            Handles.color = Color.white;
            Handles.EndGUI();
        }

        #endregion

        #region Event Processing

        private void ProcessEvents(Event e)
        {
            _drag = Vector2.zero;
            switch (e.type)
            {
                case EventType.MouseDrag:
                    if (e.button == 0)
                    {
                        if (DragWindowIfSelected(e)) return;

                        DragEverything(e);
                    }

                    break;

                case EventType.ContextClick:
                    ProcessRightClickEvent(e);
                    break;

                case EventType.KeyUp:

                    if (e.keyCode == KeyCode.Space && position.Contains(GUIUtility.GUIToScreenPoint(e.mousePosition)) &&
                        GUI.GetNameOfFocusedControl() == "")
                        ShowSearchTaskWindow(e);
                    else if (e.keyCode == KeyCode.Escape && NodeSocket.CurrentClickedSocket != null)
                        NodeSocket.CurrentClickedSocket = null;
                    else if (e.keyCode == KeyCode.Escape)
                    {
                        GUI.FocusControl(null);
                        _selectedNode = null;
                        Focus();
                    }

                    break;

                case EventType.ScrollWheel:
                    if (e.delta.y > 0 && _currentZoom < MaxZoomDistance)
                        _currentZoom += e.delta.y * ZoomStep;
                    else if (e.delta.y < 0 && _currentZoom > MinZoomDistance) _currentZoom += e.delta.y * ZoomStep;

                    GUI.changed = true;
                    break;
            }
        }

        private void ProcessNodeEvents(Event current)
        {
            if (nodes != null)
                for (var i = nodes.Count - 1; i >= 0; i--)
                {
                    var guiChanged = nodes[i].ProcessEvents(current);

                    if (guiChanged) GUI.changed = true;
                }
        }

        public void OnSearchedTaskClicked(SearchTasksWindow.NodeType nodeType)
        {
            CreateNodeView(nodeType,
                new Rect(_mousePosition.x, _mousePosition.y, BTConstants.kNodeWidht, BTConstants.kNodeHeight));
            //without the type.fullname it does not work
        }

        private void DragEverything(Event e)
        {
            _drag = e.delta * (1 / _currentZoom);

            foreach (var nodeView in nodes) nodeView.Drag(_drag);

            if (entry != null)
                entry.Drag(_drag);

            _drag = e.delta * (0.27f / _currentZoom);
            GUI.changed = true;
        }

        private bool DragWindowIfSelected(Event e)
        {
            if (entry != null && entry.IsSelected)
            {
                _drag = Vector2.zero;
                entry.Drag(e.delta * (1 / _currentZoom));
                GUI.changed = true;

                return true;
            }

            foreach (var nodeView in nodes)
                if (nodeView.IsSelected)
                {
                    _drag = Vector2.zero;
                    nodeView.Drag(e.delta * (1 / _currentZoom));
                    GUI.changed = true;

                    return true;
                }

            return false;
        }

        private void ProcessRightClickEvent(Event e)
        {
            BTLog.Log("Right Clicked the window");
            var genericMenu = new GenericMenu();

            if (_rightClickedNode)
            {
                genericMenu.AddItem(new GUIContent("Delete Node", "Delete the following node."), false, () =>
                {
                    var command = new DeleteNodeCommand();
                    _commands.Add(command);
                    command.PerformCommand(this, _rightClickedNode);
                });

                genericMenu.AddItem(
                    new GUIContent("Make Root Node", "Make the selected node the entry point of the tree."), false,
                    () =>
                    {
                        var command = new MakeRootNodeCommand();
                        _commands.Add(command);
                        command.PerformCommand(this, _rightClickedNode);
                    });
            }
            else
            {
                genericMenu.AddItem(new GUIContent("Add Task", "Add a built-in task or a custom made one."), false,
                    () => { ShowSearchTaskWindow(e); });
                genericMenu.AddSeparator("");
                genericMenu.AddItem(new GUIContent("About", "about the library"), false, () =>
                {
                    if (EditorUtility.DisplayDialog("Visit author's Webpage",
                        "Do you want to open the webpage in your default browser?", "Open", "Cancel"))
                    {
                        Application.OpenURL("https://www.eduardosimonpicon.com");
                    }

                    BTLog.Log("Author's name is Eduardo Simon Picon.");
                });
            }

            genericMenu.ShowAsContext();
        }

        public void OnNodeSocketClicked(NodeSocket socket)
        {
            switch (socket.SocketType)
            {
                //return when there wasnt any socket clicked
                case NodeSocket.NodeSocketType.In when NodeSocket.CurrentClickedSocket == null:
                    return;

                //return if the socket is hooked and the current clicked socket is not a parent
                case NodeSocket.NodeSocketType.In
                    when socket.IsHooked && !NodeSocket.CurrentClickedSocket.Node.IsParentView:
                    return;

                case NodeSocket.NodeSocketType.In:
                {
                    var startSocket = NodeSocket.CurrentClickedSocket;

                    var connection = NodeUtils.CreateConnection(currentGraph, startSocket, socket, Color.red);
                    _connections.Add(connection);

                    NodeSocket.CurrentClickedSocket.Node.children.Add(socket.Node);

                    NodeSocket.CurrentClickedSocket = null;
                    break;
                }

                case NodeSocket.NodeSocketType.Out when socket.Node.IsParentView || !socket.IsHooked:
                    NodeSocket.CurrentClickedSocket = socket;
                    break;
            }
        }

        private void OnClickedNode(BaseNode node)
        {
            _selectedNode = node;

            var attributes =
                (TaskTooltipAttribute[]) node.Task.GetType().GetCustomAttributes(typeof(TaskTooltipAttribute), true);

            if (attributes.Length > 0)
            {
                var attribute = attributes.First();

                if (attribute != null)
                {
                    _tooltipWindow = GetWindow<TooltipWindow>(true, "Tooltip", false);

                    _tooltipWindow.position =
                        new Rect(position.xMin + 20 + _currentZoom * 10f, position.yMax - 100, 200, 80);
                    _tooltipWindow.Tooltip = attribute.Tooltip;
                    _tooltipWindow.ShowPopup();
                }
            }
        }

        #endregion
    }
}