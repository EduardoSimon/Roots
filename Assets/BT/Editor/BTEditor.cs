using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Versioning;
using BT.Editor;
using BT.Scripts.Drawers;
using Editor;
using UnityEditor;
using UnityEngine;
using Debug = System.Diagnostics.Debug;
using UDebug = UnityEngine.Debug;

namespace BT
{
    public class BtEditor : EditorWindow
    {
        private const float MaxZoomDistance = 10f;
        private const float MinZoomDistance = 0.5f;
        private const float ZoomStep = 0.01f;
        private static List<BaseNodeView> _nodeViews = new List<BaseNodeView>();
        private static List<NodeConnection> _connections = new List<NodeConnection>();
        private static BtEditor _editor;
        private static Rect _zoomArea;

        private static BehaviorTreeGraph _currentGraph;
        private bool _autoSave;
        private float _currentZoom = 1;
        private Vector2 _drag;
        private Vector2 _mousePosition;
        private Vector2 _offset;
        private BaseNodeView _rightClickedNode;
        private bool _saveOnClose = true;
        private BaseNodeView _selectedNode;
        private GUISkin _skin;

        private TooltipWindow _tooltipWindow;
        public SearchTasksWindow searchableTaskWindow;
        private BaseNodeView _entryView;

        public bool DebugMode = true;
        
        //Called only when created the window.
        [MenuItem("BT/Editor")]
        private static void Init()
        {
            _editor = GetWindow<BtEditor>("OG", true,new Type[1]
            {
                typeof(SceneView)
            });
            _editor.titleContent = new GUIContent("BT Editor", Resources.Load<Texture>("star"),"A behavior tree visual editor for everyone");
            _editor.minSize = new Vector2(600, 500);
            _editor.wantsMouseMove = true;
            _editor.Show();

            EditorPrefs.SetBool("ActiveEditor", true);
            UDebug.Log("Init Called");
        }

        //Called every time the editor is enabled.
        private void Awake()
        {
            _skin = Resources.Load<GUISkin>("BTSkin");

            if (NodeSocket.OnSocketClicked == null)
                NodeSocket.OnSocketClicked += OnNodeSocketClicked;

            BaseNodeView.OnNodeRightClicked += view => _rightClickedNode = view;

            _nodeViews = new List<BaseNodeView>();
            _connections = new List<NodeConnection>();

            if (_currentGraph != null)
                LoadTreeGraph();

            _tooltipWindow = null;
            UDebug.Log("Awake Called");

            if (_nodeViews.Count == 0)
                CreateEntryView();
                
        }

        private void OnDisable()
        {
            Application.quitting -= OnApplicationQuit;
            UDebug.Log("Unsubscribed from Application.quitting");
        }

        private void OnEnable()
        {
            Application.quitting += OnApplicationQuit;
            UDebug.Log("Subscribed from Application.quitting");
        }

        [UnityEditor.Callbacks.DidReloadScripts]
        private static void OnScriptsReloaded()
        {
            if (EditorPrefs.GetBool("ActiveEditor"))
            {
                var window = GetWindow<BtEditor>();
 
                window.Close();
                Init();
                UDebug.Log("Scripts recompiled! Regenerating window!");
            }
        }
        
        private void OnApplicationQuit()
        {
            EditorUtility.SetDirty(_currentGraph);
        }

        private void OnDestroy()
        {
            if (_tooltipWindow != null)
                _tooltipWindow.Close();

            if (_saveOnClose)
                SaveGraphData();

            _currentGraph = null;
            EditorPrefs.SetBool("ActiveEditor", false);
        }

        private void OnGUI()
        {
            if (_currentGraph == null)
            {
                ShowNotification(new GUIContent("Please Select a Graph before you start using the tool",
                    Resources.Load<Texture>("tree_icon")));
            }

            _mousePosition = Event.current.mousePosition;

            //DrawBackgroundGrid(20, 0.2f, Color.grey);
            //DrawBackgroundGrid(100, 0.4f, Color.grey);

            ProcessEvents(Event.current);

            var controlsArea = DrawGlobalGuiControls();

            if (_currentGraph == null)
            {
                if(GUI.changed) Repaint();
                return;
            }

            EditorZoomArea.Begin(_currentZoom,
                new Rect(controlsArea.x, controlsArea.y + controlsArea.height, position.width,
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
            if(_entryView != null)
                DestroyImmediate(_entryView);
            
            _entryView = CreateInstance<EntryNodeView>();
            _entryView.windowRect = new Rect(position.x + position.width / 2, position.y + position.height / 2,
                BaseNodeView.kNodeWidht, BaseNodeView.kNodeHeight);
            _entryView.windowTitle = "Entry View";
            _entryView.Init(null, true, true);
        }
        
        private void CreateNodeView(SearchTasksWindow.NodeType nodeType, Rect windowRect, string windowTitle)
        {
            var instance = CreateInstance(nodeType.DrawerType.FullName) as BaseNodeView;
            Debug.Assert(instance != null, nameof(instance) + " != null");

            instance.Task = Activator.CreateInstance(nodeType.taskType) as ATask;
            instance.windowRect = windowRect;
            instance.windowTitle = windowTitle;
            _nodeViews.Add(instance);

            IComposite cast = (IComposite) instance.Task;
            
            if(cast != null)
                instance.Init(null, false, true); // if we pass null to the guid a new one will be created
            else
                instance.Init(null, false, false);

            instance.OnClickedNode += OnClickedNode;

            //todo serialize this
            if (_currentGraph.SavedNodes.Count == 0)
                _currentGraph.RootView = instance;
            
            //todo fix this
            if (_autoSave)
                SaveGraphData();
        }

        private BaseNodeView CopyNodeView(BaseNodeView baseNode)
        {
            var instance = CreateInstance(baseNode.GetType().FullName) as BaseNodeView;
            Debug.Assert(instance != null, nameof(instance) + " != null");

            //instance.Task = CreateInstance(baseNode.Task.GetType().FullName) as ATask;            
            instance.Task = Activator.CreateInstance(baseNode.Task.GetType()) as ATask;

            instance.windowRect = baseNode.windowRect;
            instance.windowTitle = baseNode.windowTitle;
            
            IComposite cast = (IComposite) instance.Task;
            
            if(cast != null)
                instance.Init(baseNode.GUID, false, true); // if we pass null to the guid a new one will be created
            else
                instance.Init(baseNode.GUID, false, false);

            instance.OnClickedNode += OnClickedNode;

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
            var controlsArea = new Rect(0, 0, position.width, position.height/8);
            GUILayout.BeginArea(controlsArea);

            GUILayout.BeginVertical();
            if (_currentGraph != null)
                 GUILayout.Label(_currentGraph.Name, _skin.GetStyle("GraphTitle"));
            GUILayout.EndVertical();

            GUILayout.BeginVertical();
            GUILayout.BeginHorizontal();

            EditorGUI.BeginChangeCheck();
            _currentGraph =
                EditorGUILayout.ObjectField(_currentGraph, typeof(BehaviorTreeGraph), false) as BehaviorTreeGraph;
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl(null);
                if (_currentGraph != null)
                {
                    RemoveNotification();
                    LoadTreeGraph();
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

            if (GUILayout.Button("Save Graph Data"))
                SaveGraphData();

            /*
            if (GUILayout.Button("Show window"))
                _showWindows = !_showWindows;*/

            if (GUILayout.Button("Reset zoom"))
                _currentZoom = 1;

            if(DebugMode)
                if (_entryView != null)
                {
                    GUILayout.Label("entry X:" + _entryView.windowRect.xMin + " Y:" + _entryView.windowRect.yMin);
                    //GUILayout.Label("editor X:" + position.xMax + " Y:" + position.yMax);
                    if(_entryView.children != null && _entryView.children.Count > 0)
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

                    if (e.keyCode == KeyCode.Space && position.Contains(GUIUtility.GUIToScreenPoint(e.mousePosition)))
                        ShowSearchTaskWindow(e);
                    else if (e.keyCode == KeyCode.Escape && NodeSocket.CurrentClickedSocket != null)
                        NodeSocket.CurrentClickedSocket = null;
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
            if (_entryView.isSelected)
            {
                _drag = Vector2.zero;
                _entryView.Drag(e.delta * (1 / _currentZoom));
                GUI.changed = true;
                
                return true;
            }
            
            foreach (var nodeView in _nodeViews)
                if (nodeView.isSelected)
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
                    _rightClickedNode = null;

                    SaveGraphData();
                });
                
                genericMenu.AddItem(new GUIContent("Make Root Node", "Make the selected node the entry point of the tree."), false,
                    () =>
                    {
                        var connectionsToRemove = new List<NodeConnection>();
                        
                        foreach (var connection in _connections)
                        {
                            if (connection.IsEntryConnection)
                                connectionsToRemove.Add(connection);
                            else if(connection.EndSocket == _rightClickedNode.entrySocket)
                                connectionsToRemove.Add(connection);
                        }

                        foreach (var toRemove in connectionsToRemove)
                        {
                            _connections.Remove(toRemove);
                        }

                        _entryView.exitSocket.IsHooked = true;
                        _rightClickedNode.entrySocket.IsHooked = true;
                        
                        _connections.Add(new NodeConnection(_entryView.exitSocket,_rightClickedNode.entrySocket, Color.white, true));
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
                case NodeSocket.NodeSocketType.In when NodeSocket.CurrentClickedSocket == null || socket.IsHooked:
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
                
                case NodeSocket.NodeSocketType.Out when !socket.IsHooked:
                    NodeSocket.CurrentClickedSocket = socket;
                    break;
            }
        }

        private void OnClickedNode(BaseNodeView node)
        {
            var attributes =
                (TaskTooltipAttribute[]) node.Task.GetType().GetCustomAttributes(typeof(TaskTooltipAttribute), true);

            if (attributes.Length > 0)
            {
                var attribute = attributes.First();

                if (attribute != null)
                {
                    _tooltipWindow = GetWindow<TooltipWindow>(true,"Tooltip", false);

                    _tooltipWindow.position =
                        new Rect(_editor.position.xMin + 20 + _currentZoom * 10f, _editor.position.yMax - 100, 200, 80);
                    _tooltipWindow.Tooltip = attribute.Tooltip;
                    _tooltipWindow.ShowPopup();
                }
            }
        }

        #endregion

        #region Saving System

        private void SaveGraphData()
        {
            if (_currentGraph != null)
            {
                if (_currentGraph.SavedNodes.Count != 0 || _currentGraph.SavedConnections.Count != 0)
                {
                    _currentGraph.SavedNodes.Clear();
                    _currentGraph.SavedConnections.Clear();
                    UDebug.Log("Overriding the data");
                }

                _currentGraph.EntryView = _entryView;
                
                foreach (var nodeView in _nodeViews)
                {
                    _currentGraph.SavedNodes.Add(nodeView);
                    
                     //TODO redo task serialization with this method
                    _currentGraph.data.Add(new BaseNodeView.NodeData(nodeView.Task,nodeView.windowRect,nodeView.windowTitle,nodeView.GUID,nodeView.IsParentView,nodeView.IsEntryView));

                    /*
                    foreach (var child in nodeView.children)
                    {
                        UDebug.Log(child.Task);
                    }*/
                }


                foreach (var connection in _connections)
                {
                    if (!connection.IsEntryConnection)
                        _currentGraph.SavedConnections.Add(connection);
                    else
                    {
                        _currentGraph.entryConnection = connection;
                        _currentGraph.RootNode = connection.EndSocket.Node;
                    }
                }

               
                UDebug.Log("Saved " + _currentGraph.SavedNodes.Count + " nodes.");

                //_currentGraph.RootView = _entryView.children[0];

                
                foreach (var node in _currentGraph.SavedNodes)
                {
                    EditorUtility.SetDirty(node);
                }
                
                _currentGraph.OnSave();


                EditorUtility.SetDirty(_currentGraph);
            }
        }

        private void LoadTreeGraph()
        {
            if (_currentGraph == null)
            {
                UDebug.LogError("Select a graph to Load Data From");
            }
            else
            {
                _nodeViews.Clear();
                _connections.Clear();

                BaseNodeView RootNode = null;
                
                if(_currentGraph.EntryView != null && _currentGraph.EntryView.exitSocket.IsHooked)
                    CreateEntryView();

                if (_currentGraph.RootNode != null && _currentGraph.RootNode.entrySocket.IsHooked)
                    RootNode = CopyNodeView(_currentGraph.RootNode);

                if (_entryView != null && RootNode != null)
                {
                    _nodeViews.Add(RootNode);
                    _connections.Add(new NodeConnection(_entryView.exitSocket, RootNode.entrySocket,_currentGraph.entryConnection.ConnectionColor,true));
                }
                
                foreach (var nodeConnection in _currentGraph.SavedConnections)
                {
                    BaseNodeView startNode = null, endNode = null;

                    if (nodeConnection.StartSocket.IsHooked)
                        startNode = CopyNodeView(nodeConnection.StartSocket.Node);

                    if (nodeConnection.EndSocket.IsHooked) endNode = CopyNodeView(nodeConnection.EndSocket.Node);

                    if (startNode != null && endNode != null  && startNode != _entryView)
                    {
                        _connections.Add(new NodeConnection(startNode.exitSocket, endNode.entrySocket,
                            nodeConnection.ConnectionColor,false));
                        _nodeViews.Add(startNode);
                        _nodeViews.Add(endNode);
                    }
                    else
                    {
                        UDebug.LogError(
                            "Trying to load an invalid connection. One of the connection socket was null");
                    }
                        
                }

              
                foreach (var savedNode in _currentGraph.SavedNodes)
                    if (!_nodeViews.Contains(savedNode))
                        _nodeViews.Add(CopyNodeView(savedNode));

                GUI.changed = true;
            }
        }

        #endregion
    }
}