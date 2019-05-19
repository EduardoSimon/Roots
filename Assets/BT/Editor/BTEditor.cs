using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Runtime.Versioning;
using BT.Editor;
using BT.Scripts;
using BT.Scripts.Drawers;
using Editor;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;
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
        
        private static List<BaseNodeView> _nodeViews = new List<BaseNodeView>();
        private static List<NodeConnection> _connections = new List<NodeConnection>();
        private static List<BaseNodeView> _nodesToDestroy = new List<BaseNodeView>();
        private static List<BlackBoardVariable> _variablesToDestroy = new List<BlackBoardVariable>();

        private static Rect _zoomArea;

        public BehaviorTreeGraph currentGraph;
        private bool _autoSave;
        private float _currentZoom = 1;
        private Vector2 _drag;
        private Vector2 _mousePosition;
        private Vector2 _offset;
        private BaseNodeView _rightClickedNode;
        [SerializeField]private bool _saveOnClose;
        [SerializeField]private bool _saveOnPlay;
        private BaseNodeView _selectedNode;
        private GUISkin _skin;

        private TooltipWindow _tooltipWindow;
        public SearchTasksWindow searchableTaskWindow;
        public BaseNodeView _entryView;
        public BaseNodeView _rootView;

        public bool DebugMode = true;
        public int GraphInstanceID;

        private List<int> nodeIds;

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
            UDebug.Log("Init Called");
        }

        //Called every time the editor is enabled.
        private void StartEditor(bool destroyPreviousData)
        {
            UDebug.Log("On Enable Called");
            Application.quitting += OnApplicationQuit;
            EditorApplication.playModeStateChanged += EditorApplicationOnPlayModeStateChanged;
            
            _saveOnPlay = EditorPrefs.GetBool(saveOnPlayKey,false);
            _saveOnClose = EditorPrefs.GetBool(saveOnCloseKey, false);
            
            _skin = Resources.Load<GUISkin>("BTSkin");

            if (NodeSocket.OnSocketClicked == null)
                NodeSocket.OnSocketClicked += OnNodeSocketClicked;

            if (nodeIds == null)
                nodeIds = new List<int>();

            BaseNodeView.OnNodeRightClicked += view => _rightClickedNode = view;

            _nodeViews = new List<BaseNodeView>();
            _connections = new List<NodeConnection>();
            _nodesToDestroy = new List<BaseNodeView>();
            _variablesToDestroy = new List<BlackBoardVariable>();

           
            CreateEntryView();
            
            if (currentGraph != null)
                LoadTreeGraph(destroyPreviousData);

            _tooltipWindow = null;
            UDebug.Log("Awake Called");

        }

        private void OnDisable()
        {
            UDebug.Log("On Disable Called");
            Application.quitting -= OnApplicationQuit;
            EditorApplication.playModeStateChanged -= EditorApplicationOnPlayModeStateChanged;
            
            EditorPrefs.SetBool(saveOnPlayKey,_saveOnPlay);
            EditorPrefs.SetBool(saveOnCloseKey, _saveOnClose);
        }

        private void OnEnable()
        {
            StartEditor(false);
        }

        private void EditorApplicationOnPlayModeStateChanged(PlayModeStateChange state)
        {
            
            switch (state)
            {
                case PlayModeStateChange.ExitingEditMode:
                    
                    nodeIds.Clear();
                    
                    if (currentGraph != null)
                    {
                        if(_saveOnPlay)
                            SaveGraphData();
                        GraphInstanceID = currentGraph.GetInstanceID();
                        EditorUtility.SetDirty(currentGraph);

                        foreach (var savedNode in currentGraph.SavedNodes)
                        {
                            nodeIds.Add(savedNode.GetInstanceID());
                        }
                    }

                    if (_tooltipWindow != null)
                        _tooltipWindow.Close();

                    break;
                case PlayModeStateChange.EnteredPlayMode:
                    currentGraph = EditorUtility.InstanceIDToObject(GraphInstanceID) as BehaviorTreeGraph;

                    for (var index = 0; index < currentGraph.SavedNodes.Count; index++)
                    {
                        currentGraph.SavedNodes[index] = EditorUtility.InstanceIDToObject(nodeIds[index]) as BaseNodeView;
                    }
                    EditorUtility.SetDirty(currentGraph);


                    break;
                case PlayModeStateChange.EnteredEditMode:
                    StartEditor(true);
                    break;
                default:
                    UDebug.Log("Entering :" + state);
                    break;
            }
        }

        [DidReloadScripts]
        private static void OnScriptsReloaded()
        {
            if (EditorPrefs.GetBool("ActiveEditor") && !EditorApplication.isPlayingOrWillChangePlaymode)
            {
                var window = GetWindow<BtEditor>();

                window.Close();
                Init();
                UDebug.Log("Scripts recompiled! Regenerating window!");
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
                SaveGraphData();

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

            //DrawBackgroundGrid(20, 0.2f, Color.grey);
            //DrawBackgroundGrid(100, 0.4f, Color.grey);

            ProcessEvents(Event.current);

            var controlsArea = DrawGlobalGuiControls();

            if (currentGraph == null)
            {
                if (GUI.changed) Repaint();
                return;
            }

            //todo inspect the current selected node and inspect its properties. Draw them after.
            Rect inspectorRect = new Rect(0, controlsArea.yMax, position.width / 4,
                position.height);
            EditorGUI.DrawRect(inspectorRect, new Color(0.33f, 0.27f, 0.33f, 0.27f));
            
            GUILayout.BeginArea(inspectorRect);
            GUILayout.BeginVertical();
            GUILayout.Label("Inspector",_skin.GetStyle("H1"));
            
            if(_selectedNode == null)
                GUILayout.Label("Selected Node: None" ,_skin.GetStyle("H2"));
            else
            {
                GUILayout.Label("Selected Node: " + _selectedNode.windowTitle ,_skin.GetStyle("H2"));
                _selectedNode.DrawInspector();
            }
            
            GUILayout.EndVertical();           
            GUILayout.EndArea();
            
            EditorZoomArea.Begin(_currentZoom,
                new Rect(inspectorRect.xMax, controlsArea.yMax, position.width - inspectorRect.width,
                    position.height - controlsArea.height));

            foreach (var connection in _connections) connection.Draw();

            //if (_currentGraph != null)
            DrawWindows();

            ProcessNodeEvents(Event.current);

            EditorZoomArea.End();

            if (GUI.changed) Repaint();
        }

        #region Creation Methods

        private void CreateEntryView()
        {
            Rect entryViewWindowRect = new Rect(position.x + position.width / 2, position.y + position.height / 2,
                BaseNodeView.kNodeWidht, BaseNodeView.kNodeHeight);

            /*
            if (_entryView != null && currentGraph != null)
            {
                entryViewWindowRect = currentGraph.EntryView.windowRect;
                AssetDatabase.RemoveObjectFromAsset(currentGraph.EntryView);
                AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
            }*/

            _entryView = CreateInstance<EntryNodeView>();
            _entryView.windowRect = entryViewWindowRect;
            _entryView.windowTitle = "Entry View";
            _entryView.Init(null, true, false,  false);
/*
            if (currentGraph != null)
            {
                AssetDatabase.AddObjectToAsset(_entryView, currentGraph);
                AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
            
                currentGraph.EntryView = _entryView;
            }
 */
           
        }

        private void CreateNodeView(SearchTasksWindow.NodeType nodeType, Rect windowRect, string windowTitle)
        {
            var instance = CreateInstance(nodeType.DrawerType.FullName) as BaseNodeView;
            AssetDatabase.AddObjectToAsset(instance, currentGraph);
            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
            Debug.Assert(instance != null, nameof(instance) + " != null");
            
            instance.Task = CreateInstance(nodeType.taskType) as ATask;
            instance.Task.name = instance.windowTitle + " with ID:" + instance.GUID;
            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
            AssetDatabase.AddObjectToAsset(instance.Task, currentGraph);
            //sAssetDatabase.SetMainObject(_currentGraph, AssetDatabase.GetAssetPath(_currentGraph));
            instance.windowRect = windowRect;
            instance.windowTitle = windowTitle;
            

            if (instance.Task is IComposite cast)
                instance.Init(null, false, _nodeViews.Count == 0 ? true : false, true); // if we pass null to the guid a new one will be created
            else
                instance.Init(null, false, _nodeViews.Count == 0 ? true : false,false);

            _nodeViews.Add(instance);

            instance.OnClickedNode += OnClickedNode;

            instance.CopyVariables(null);
            /*
            if (instance.variables.Count > 0)
            {
                for (int i = 0; i < instance.variables.Count; i++)
                {
                    AssetDatabase.AddObjectToAsset(instance.variables[i],currentGraph);
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
                }
            }*/
            
            //todo serialize this


            //todo fix this
            if (_autoSave)
                SaveGraphData();
        }

        private BaseNodeView CopyNodeView(BaseNodeView baseNode, bool destroyPreviousData)
        {
            var instance = CreateInstance(baseNode.GetType().FullName) as BaseNodeView;
            
            AssetDatabase.AddObjectToAsset(instance, currentGraph);
            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
            Debug.Assert(instance != null, nameof(instance) + " != null");
            
            //instance.Task = CreateInstance(baseNode.Task.GetType().FullName) as ATask;            
            instance.Task = CreateInstance(baseNode.Task.GetType()) as ATask;
            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph.GetInstanceID()));
            AssetDatabase.AddObjectToAsset(instance.Task, currentGraph);

            instance.windowRect = baseNode.windowRect;
            instance.windowTitle = baseNode.windowTitle;

            instance.Init(baseNode.GUID, false, baseNode.IsRootView ? true : false, instance.Task is IComposite);

            instance.OnClickedNode += OnClickedNode;
            
            instance.CopyVariables(baseNode.variables);

            //todo fix this, basenode cannot be null when coming back to edit mode
            if (destroyPreviousData)
            {
                AssetDatabase.RemoveObjectFromAsset(baseNode.Task);
                AssetDatabase.RemoveObjectFromAsset(baseNode);
            
                AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
                DestroyImmediate(baseNode);
            }

            
            return instance;
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
            var controlsArea = new Rect(0, 0, position.width, position.height / 8);
            GUILayout.BeginArea(controlsArea);

            GUILayout.BeginVertical();
            if (currentGraph != null)
                GUILayout.Label(currentGraph.Name, _skin.GetStyle("H1"));
            GUILayout.EndVertical();

            GUILayout.BeginVertical();
            GUILayout.BeginHorizontal();

            EditorGUI.BeginChangeCheck();
            currentGraph =
                EditorGUILayout.ObjectField(currentGraph, typeof(BehaviorTreeGraph), false) as BehaviorTreeGraph;
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl(null);
                if (currentGraph != null)
                {
                    RemoveNotification();
                    LoadTreeGraph(true);
                    GraphInstanceID = currentGraph.GetInstanceID();
                }
            }

            EditorGUILayout.Separator();
            EditorGUI.BeginChangeCheck();
            _autoSave = EditorGUILayout.Toggle("Autosave Enabled", _autoSave);
            if (EditorGUI.EndChangeCheck())
                GUI.FocusControl(null);

            EditorGUI.BeginChangeCheck();
            _saveOnClose = EditorGUILayout.Toggle("Save on window close", _saveOnClose);
            if (EditorGUI.EndChangeCheck())
                GUI.FocusControl(null);

            EditorGUI.BeginChangeCheck();
            _saveOnPlay = EditorGUILayout.Toggle("Save on Play Pressed", _saveOnPlay);
            if (EditorGUI.EndChangeCheck())
                GUI.FocusControl(null);

            
            if (GUILayout.Button("Save Graph Data"))
                SaveGraphData();

            /*
            if (GUILayout.Button("Show window"))
                _showWindows = !_showWindows;*/

            if (GUILayout.Button("Reset zoom"))
                _currentZoom = 1;

            if (DebugMode)
                if (_entryView != null)
                {
                    GUILayout.Label("entry X:" + _entryView.windowRect.xMin + " Y:" + _entryView.windowRect.yMin);
                    //GUILayout.Label("editor X:" + position.xMax + " Y:" + position.yMax);
                    if (_entryView.children != null && _entryView.children.Count > 0)
                        GUILayout.Label(_entryView.children[0].windowTitle);
                }

            GUILayout.EndHorizontal();
            GUILayout.EndVertical();

            //GUILayout.BeginVertical();
            //_zoom = GUILayout.HorizontalSlider(_zoom, 0, 6);
            //GUILayout.EndVertical();

            GUILayout.EndArea();
            return controlsArea;
        }

        private void DrawWindows()
        {
            BeginWindows();

            if (_entryView != null)
            {
                _entryView.windowRect = GUI.Window(-1, _entryView.windowRect, (id) => _entryView.DrawWindow(id),
                    _entryView.windowTitle);

                _entryView.DrawSockets();
            }

            for (var index = 0; index < _nodeViews.Count; index++)
            {
                _nodeViews[index].DrawSockets();

                _nodeViews[index].windowRect = GUI.Window(index, _nodeViews[index].windowRect, DrawNodeWindowCallback,
                    _nodeViews[index].windowTitle);
            }

            EndWindows();
        }

        private void DrawNodeWindowCallback(int id)
        {
            _nodeViews[id].DrawWindow(id);
        }

        private void DrawBackgroundGrid(float gridSpacing, float gridOpacity, Color gridColor)
        {
            var widthDivs = Mathf.CeilToInt(position.width / gridSpacing);
            var heightDivs = Mathf.CeilToInt(position.height / gridSpacing);

            Handles.BeginGUI();
            Handles.color = new Color(gridColor.r, gridColor.g, gridColor.b, gridOpacity);

            _offset += _drag;
            var newOffset = new Vector3(_offset.x % gridSpacing, _offset.y % gridSpacing, 0);

            for (var i = 0; i < widthDivs; i++)
                Handles.DrawLine(new Vector3(gridSpacing * i, -gridSpacing, 0) + newOffset,
                    new Vector3(gridSpacing * i, position.height, 0f) + newOffset);

            for (var j = 0; j < heightDivs; j++)
                Handles.DrawLine(new Vector3(-gridSpacing, gridSpacing * j, 0) + newOffset,
                    new Vector3(position.width, gridSpacing * j, 0f) + newOffset);

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
                case EventType.MouseDown:
                    //Focus();

                    break;

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

                    if (e.keyCode == KeyCode.Space && position.Contains(GUIUtility.GUIToScreenPoint(e.mousePosition)) && GUI.GetNameOfFocusedControl() == "")
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
            if (_nodeViews != null)
                for (var i = _nodeViews.Count - 1; i >= 0; i--)
                {
                    var guiChanged = _nodeViews[i].ProcessEvents(current);

                    if (guiChanged) GUI.changed = true;
                }
        }

        public void OnSearchedTaskClicked(SearchTasksWindow.NodeType nodeType)
        {
            CreateNodeView(nodeType,
                new Rect(_mousePosition.x, _mousePosition.y, BaseNodeView.kNodeWidht, BaseNodeView.kNodeHeight),
                nodeType.taskType.ToString());
            //without the type.fullname it does not work
        }

        private void DragEverything(Event e)
        {
            _drag = e.delta * (1 / _currentZoom);

            foreach (var nodeView in _nodeViews) nodeView.Drag(_drag);

            _entryView.Drag(_drag);

            _drag = e.delta * (0.27f / _currentZoom);
            GUI.changed = true;
        }

        private bool DragWindowIfSelected(Event e)
        {
            if (_entryView.IsSelected)
            {
                _drag = Vector2.zero;
                _entryView.Drag(e.delta * (1 / _currentZoom));
                GUI.changed = true;

                return true;
            }

            foreach (var nodeView in _nodeViews)
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
            UDebug.Log("Right Clicked the window");
            var genericMenu = new GenericMenu();

            if (_rightClickedNode)
            {
                genericMenu.AddItem(new GUIContent("Delete Node", "Delete the following node."), false, () =>
                {
                    var connectionsToRemove = new List<int>();

                    foreach (var connection in _connections)
                        if (connection.EndSocket == _rightClickedNode.entrySocket ||
                            connection.StartSocket == _rightClickedNode.exitSocket)
                            connectionsToRemove.Add(_connections.IndexOf(connection));

                    foreach (var conn in connectionsToRemove)
                        _connections.RemoveAt(conn);

                    _nodeViews.Remove(_rightClickedNode);
                    AssetDatabase.RemoveObjectFromAsset(_rightClickedNode.Task);
                    AssetDatabase.RemoveObjectFromAsset(_rightClickedNode);
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
                    _rightClickedNode = null;

                    SaveGraphData();
                });

                genericMenu.AddItem(
                    new GUIContent("Make Root Node", "Make the selected node the entry point of the tree."), false,
                    () =>
                    {
                        var connectionsToRemove = new List<NodeConnection>();

                        foreach (var connection in _connections)
                        {
                            if (connection.IsEntryConnection)
                                connectionsToRemove.Add(connection);
                            else if (connection.EndSocket == _rightClickedNode.entrySocket)
                                connectionsToRemove.Add(connection);
                        }

                        foreach (var toRemove in connectionsToRemove)
                        {
                            _connections.Remove(toRemove);
                        }

                        _entryView.exitSocket.IsHooked = true;
                        _rightClickedNode.entrySocket.IsHooked = true;

                        _connections.Add(new NodeConnection(_entryView.exitSocket, _rightClickedNode.entrySocket,
                            Color.white, true));
                    });
            }
            else
            {
                genericMenu.AddItem(new GUIContent("Add Task", "Add a built-in task or a custom made one."), false,
                    () => { ShowSearchTaskWindow(e); });
                genericMenu.AddSeparator("");
                genericMenu.AddItem(new GUIContent("About", "about the library"), false, () =>
                {
                    UDebug.Log("Author's name is Eduardo Simon Picon.");
                    Application.OpenURL("https://www.eduardosimonpicon.com");
                });
            }

            genericMenu.ShowAsContext();
        }

        private void OnNodeSocketClicked(NodeSocket socket)
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
                    var clickedSocket = NodeSocket.CurrentClickedSocket;

                    _connections.Add(NodeSocket.CurrentClickedSocket.Node is EntryNodeView
                        ? new NodeConnection(clickedSocket, socket, Color.white, true)
                        : new NodeConnection(clickedSocket, socket, Color.white, false));
                    clickedSocket.IsHooked = true;
                    socket.IsHooked = true;
                    NodeSocket.CurrentClickedSocket.Node.children.Add(socket.Node);

                    NodeSocket.CurrentClickedSocket = null;
                    break;
                }

                case NodeSocket.NodeSocketType.Out when socket.Node.IsParentView || !socket.IsHooked:
                    NodeSocket.CurrentClickedSocket = socket;
                    break;
            }
        }

        private void OnClickedNode(BaseNodeView node)
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

        #region Saving System

        private void SaveGraphData()
        {
            if (currentGraph != null)
            {
                if (currentGraph.SavedNodes.Count != 0 || currentGraph.SavedConnections.Count != 0)
                {
                    currentGraph.SavedNodes.Clear();
                    currentGraph.SavedConnections.Clear();
                    UDebug.Log("Overriding the data");
                }

                foreach (var nodeView in _nodeViews)
                {
                    nodeView.SaveNodeInfo();
                    currentGraph.SavedNodes.Add(nodeView);
                    EditorFix.SetObjectDirty(nodeView);
                }

                foreach (var connection in _connections)
                {
                    if (!connection.IsEntryConnection)
                        currentGraph.SavedConnections.Add(connection);
                    else
                    {
                        currentGraph.entryConnection = connection;
                    }
                }

                UDebug.Log("Saved " + currentGraph.SavedNodes.Count + " nodes.");

                currentGraph.OnSave();

                EditorUtility.SetDirty(currentGraph);
            }
        }

        private void LoadTreeGraph(bool destroyPreviousData)
        {
            if (currentGraph == null)
            {
                UDebug.LogError("Select a graph to Load Data From");
            }
            else
            {
                _nodeViews.Clear();
                
                _connections.Clear();

                AssetDatabase.LoadMainAssetAtPath(AssetDatabase.GetAssetPath(currentGraph));

                foreach (var savedNode in currentGraph.SavedNodes)
                {
                    if (savedNode.IsRootView)
                        _rootView = CopyNodeView(savedNode, destroyPreviousData);
                }
                
                if (_entryView != null && _rootView != null)
                {
                    _nodeViews.Add(_rootView);
                    _connections.Add(new NodeConnection(_entryView.exitSocket, _rootView.entrySocket,
                        currentGraph.entryConnection.ConnectionColor, true));
                }

                foreach (var nodeConnection in currentGraph.SavedConnections)
                {
                    BaseNodeView copiedStartNode = null, copiedEndNode = null;

                    if (nodeConnection.StartSocket.IsHooked)
                        copiedStartNode = CopyNodeView(nodeConnection.StartSocket.Node, destroyPreviousData);

                    if (nodeConnection.EndSocket.IsHooked) 
                        copiedEndNode = CopyNodeView(nodeConnection.EndSocket.Node, destroyPreviousData);

                    if (copiedStartNode != null && copiedEndNode != null && copiedStartNode != _entryView)
                    {
                        BaseNodeView startNode = null;
                        if (!_nodeViews.Contains(copiedStartNode))
                        {
                            _nodeViews.Add(copiedStartNode);
                            startNode = copiedStartNode;
                        }
                        else
                        {
                            startNode = _nodeViews[_nodeViews.IndexOf(copiedStartNode)];
                        }

                        BaseNodeView endNode = null;
                        if (!_nodeViews.Contains(copiedEndNode))
                        {
                            _nodeViews.Add(copiedEndNode);
                            endNode = copiedEndNode;
                        }
                        else
                        {
                            endNode = _nodeViews[_nodeViews.IndexOf(copiedEndNode)];
                        }

                        _connections.Add(new NodeConnection(startNode.exitSocket, endNode.entrySocket,
                            nodeConnection.ConnectionColor, false));
                    }
                    else
                    {
                        UDebug.LogError(
                            "Trying to load an invalid connection. One of the connection socket was null");
                    }
                }

                //copy the unconnected nodes 
                foreach (var savedNode in currentGraph.SavedNodes)
                    if (!_nodeViews.Contains(savedNode))
                        _nodeViews.Add(CopyNodeView(savedNode, destroyPreviousData));

                /*

                if (_nodesToDestroy.Count > 0)
                {
                    foreach (var nodeView in _nodesToDestroy)
                    {
                        AssetDatabase.RemoveObjectFromAsset(nodeView);
                        AssetDatabase.DeleteAsset(AssetDatabase.GetAssetPath(nodeView));
                        DestroyImmediate(nodeView);
                    }
                    
                }
                
                _nodesToDestroy.Clear();
                */
                
                GUI.changed = true;
            }
        }

        #endregion
    }
}