using System;
using System.Collections.Generic;
using System.Linq;
using BT.Editor;
using BT.Scripts.Drawers;
using Editor;
using UnityEditor;
using UnityEditor.Graphs;
using UnityEditor.MemoryProfiler;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Serialization;
using Object = System.Object;

namespace BT
{
    public class BtEditor : EditorWindow
    {
        private static List<BaseNodeView> _nodeViews = new List<BaseNodeView>();
        private static List<NodeConnection> _connections = new List<NodeConnection>();
        private Vector2 _offset;
        private Vector2 _drag;
        private Vector2 _mousePosition;
        private static BtEditor _editor;
        private static Rect _zoomArea;
        private bool _showWindows = true;
        private float _currentZoom = 1;
        private BaseNodeView _selectedNode;
        private bool _autoSave = false;
        private BaseNodeView _rightClickedNode = null;
        private GUISkin _skin;
        private TooltipWindow _tooltipWindow;
        
        public SearchTasksWindow searchableTaskWindow;

        private const float MAX_ZOOM_DISTANCE = 10f;
        private const float MIN_ZOOM_DISTANCE = 0.5f;
        private const float ZOOM_STEP = 0.01f;

        public static BehaviorTreeGraph CurrentTree;

        [MenuItem("BT/Editor")]
        private static void Init()
        {
            _editor = (BtEditor) EditorWindow.CreateInstance<BtEditor>();
            _editor.titleContent = new GUIContent("BT Editor",Resources.Load<Texture>("star"),"A behavior tree visual editor for everyone");
            _editor.minSize = new Vector2(200,200);
            _editor.Show();
 
            _editor.wantsMouseMove = true;
            _nodeViews = new List<BaseNodeView>();
            _connections = new List<NodeConnection>();
        }

        private void OnEnable()
        {
            _skin = Resources.Load<GUISkin>("BTSkin");
            
            if(NodeSocket.OnSocketClicked == null)
                NodeSocket.OnSocketClicked += OnNodeSocketClicked;
            
            BaseNodeView.OnNodeRightClicked += view =>  _rightClickedNode = view ;
            
            _nodeViews = new List<BaseNodeView>();
            _connections = new List<NodeConnection>();
            
            if(CurrentTree != null)
                LoadTreeGraph();

            _tooltipWindow = null;
        }

        private void OnGUI()
        {
            if(CurrentTree == null)
                this.ShowNotification(new GUIContent("Please Select a Graph before you start using the tool",Resources.Load<Texture>("tree_icon")));

            _mousePosition = Event.current.mousePosition;
         
            DrawBackgroundGrid(20,0.2f,Color.grey);
            DrawBackgroundGrid(100,0.4f,Color.grey);
            
            ProccessEvents(Event.current);
            
            Vector2 mouseScreenPos = GUIUtility.GUIToScreenPoint(Event.current.mousePosition);

            Rect controlsArea = DrawGlobalGuiControls();
            
            EditorZoomArea.Begin(_currentZoom, new Rect(controlsArea.x,controlsArea.y + controlsArea.height,position.width,position.height - controlsArea.height));

            foreach (var connection in _connections)
            {
                connection.Draw();
            }
            
            if (_showWindows)
                DrawWindows();
            
            ProcessNodeEvents(Event.current);

            EditorZoomArea.End();

            if(GUI.changed) Repaint();
        }

        #region Creation Methods
        private void CreateNodeView(SearchTasksWindow.NodeType nodeType, Rect windowRect, string windowTitle)
        {
            BaseNodeView instance = ScriptableObject.CreateInstance(nodeType.DrawerType.FullName) as BaseNodeView;
            System.Diagnostics.Debug.Assert(instance != null, nameof(instance) + " != null");

            instance.task = CreateInstance(nodeType.taskType.FullName) as ATask;
            instance.windowRect = windowRect;    
            instance.windowTitle = windowTitle;
            _nodeViews.Add(instance);
            instance.Init();
            
            instance.OnClickedNode += OnClickedNode;

            if(_autoSave)
                SaveGraphData();
        }

        private void ShowSearchTaskWindow(Event e)
        {
            //TODO refactor this method to show the window with correct measurements.
            if (searchableTaskWindow == null)
            {
                searchableTaskWindow = CreateInstance<SearchTasksWindow>();
                Vector2 mouseScreenPos = GUIUtility.GUIToScreenPoint(e.mousePosition);
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
            Rect controlsArea = new Rect(0, 0, position.width, 30);
            GUILayout.BeginArea(controlsArea);
            GUILayout.BeginHorizontal();

            EditorGUI.BeginChangeCheck();
            CurrentTree = EditorGUILayout.ObjectField(CurrentTree,typeof(BehaviorTreeGraph),false) as BehaviorTreeGraph;
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl(null);
                if (CurrentTree != null)
                {
                    this.RemoveNotification();
                    LoadTreeGraph();
                }
            }

            UnityEditor.EditorGUILayout.Separator();
            EditorGUI.BeginChangeCheck();
            _autoSave = EditorGUILayout.Toggle("Autosave Enabled", _autoSave);
            if(EditorGUI.EndChangeCheck())
                GUI.FocusControl(null);
            
            if (GUILayout.Button("Save Graph Data"))
                SaveGraphData();
            
            if (GUILayout.Button("Show window"))
                _showWindows = !_showWindows;

            if (GUILayout.Button("Reset zoom"))
                _currentZoom = 1;
            
            
            GUILayout.EndHorizontal();
            
            //GUILayout.BeginVertical();
            //_zoom = GUILayout.HorizontalSlider(_zoom, 0, 6);
            //GUILayout.EndVertical();

            GUILayout.EndArea();
            return controlsArea;
        }
        


        private void DrawWindows()
        {
            BeginWindows();

            for (var index = 0; index < _nodeViews.Count; index++)
            {
                _nodeViews[index].DrawConnections();

                _nodeViews[index].windowRect = GUI.Window(index, _nodeViews[index].windowRect, DrawNodeWindowCallback,_nodeViews[index].windowTitle);
            }
            
            EndWindows(); 
        }

        void DrawNodeWindowCallback(int id)
        {
            _nodeViews[id].DrawWindow();
        }
        
        private void DrawBackgroundGrid(float gridSpacing, float gridOpacity, Color gridColor)
        {
            int widthDivs = Mathf.CeilToInt(position.width / gridSpacing);
            int heightDivs = Mathf.CeilToInt(position.height / gridSpacing);
 
            Handles.BeginGUI();
            Handles.color = new Color(gridColor.r, gridColor.g, gridColor.b, gridOpacity);
 
            _offset += _drag;
            Vector3 newOffset = new Vector3(_offset.x % gridSpacing, _offset.y % gridSpacing, 0);
 
            for (int i = 0; i < widthDivs; i++)
            {
                Handles.DrawLine(new Vector3(gridSpacing * i, -gridSpacing, 0) + newOffset, new Vector3(gridSpacing * i, position.height, 0f) + newOffset);
            }
 
            for (int j = 0; j < heightDivs; j++)
            {
                Handles.DrawLine(new Vector3(-gridSpacing, gridSpacing * j, 0) + newOffset, new Vector3(position.width, gridSpacing * j, 0f) + newOffset);
            }
 
            Handles.color = Color.white;
            Handles.EndGUI();
        }

        #endregion

        #region Event Processing
        
        private void ProccessEvents(Event e)
        {

            _drag = Vector2.zero;
            switch (e.type)
            {
                case EventType.MouseDown:
                        this.Focus();
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
                    {
                        ShowSearchTaskWindow(e);
                    }
                    else if (e.keyCode == KeyCode.Escape && NodeSocket.CurrentClickedSocket != null)
                        NodeSocket.CurrentClickedSocket = null;
                    break;
                        
                
                case EventType.ScrollWheel:
                    if (e.delta.y > 0 && _currentZoom < MAX_ZOOM_DISTANCE)
                    {
                        _currentZoom += e.delta.y * ZOOM_STEP;
                    }
                    else if (e.delta.y < 0 && _currentZoom > MIN_ZOOM_DISTANCE)
                    {
                        //when zooming out delta is negative, thats why we add it.
                        _currentZoom += e.delta.y * ZOOM_STEP;
                    }
                    
                    GUI.changed = true;
                    break;
                
            }
        }

        private void ProcessNodeEvents(Event current)
        {
            if(_nodeViews != null)
            {
                for (int i = _nodeViews.Count - 1; i >= 0; i--)
                {
                    bool guiChanged = _nodeViews[i].ProcessEvents(current);

                    if (guiChanged)
                    {
                        GUI.changed = true;
                    }
                }    
            }
        }
        
        public void OnSearchedTaskClicked(SearchTasksWindow.NodeType nodeType)
        {
            CreateNodeView(nodeType,
                new Rect(_mousePosition.x, _mousePosition.y, 200, 150),
                nodeType.taskType.ToString());
            //without the type.fullname it does not work

        }

        
        private void DragEverything(Event e)
        {
            _drag = e.delta * (1/_currentZoom);

            foreach (var nodeView in _nodeViews)
            {
                nodeView.Drag(_drag);
            }

            _drag = e.delta * (0.27f/_currentZoom);
            GUI.changed = true;
        }

        private bool DragWindowIfSelected(Event e)
        {
            foreach (var nodeView in _nodeViews)
            {
                if (nodeView.isSelected)
                {
                    _drag = Vector2.zero;
                    nodeView.Drag(e.delta * (1/_currentZoom));
                    GUI.changed = true;

                    return true;
                }
            }

            return false;
        }

        private void ProcessRightClickEvent(Event e)
        {
            Debug.Log("Right Clicked the window");
            GenericMenu genericMenu = new GenericMenu();

            if (_rightClickedNode)
            {
                genericMenu.AddItem(new GUIContent("Delete Node", "Delete the following node."),false, () =>
                {
                    List<int> connectionsToRemove = new List<int>();
                    
                    foreach (var connection in _connections)
                    {
                        if (connection.EndSocket == _rightClickedNode.EntrySocket ||
                            connection.StartSocket == _rightClickedNode.ExitSocket)
                        {
                            connectionsToRemove.Add(_connections.IndexOf(connection));
                        }
                    }

                    for (int i = 0; i < connectionsToRemove.Count; i++)
                    {
                        _connections.RemoveAt(connectionsToRemove[i]);
                    }
                    
                    _nodeViews.Remove(_rightClickedNode);
                    _rightClickedNode = null;
                    
                    SaveGraphData();
                    });
            }
            else
            {
                genericMenu.AddItem(new GUIContent("Add Task", "Add a built-in task or a custom made one."), false, () =>
                {
                    ShowSearchTaskWindow(e);
                });
                genericMenu.AddSeparator("");
                genericMenu.AddItem(new GUIContent("About", "about the library"), false, () =>
                {
                    Debug.Log("Author's name is Eduardo Simon Picon.");
                    Application.OpenURL("https://www.eduardosimonpicon.com");
                });
            }
            
            genericMenu.ShowAsContext();
        }
        
        
        private void OnNodeSocketClicked(NodeSocket socket)
        {
            Debug.Log("Invoked on clicked socket event");
            if (socket.SocketType == NodeSocket.NodeSocketType.In)
            {
                if (NodeSocket.CurrentClickedSocket != null && !socket.IsHooked)
                {
                    var clickedSocket = NodeSocket.CurrentClickedSocket;
                    _connections.Add(new NodeConnection(clickedSocket,socket,Color.white));
                    clickedSocket.IsHooked = true;
                    socket.IsHooked = true;
                    
                    NodeSocket.CurrentClickedSocket = null;
                        
                }
            }
            else if(socket.SocketType == NodeSocket.NodeSocketType.Out && !socket.IsHooked)
            {
                NodeSocket.CurrentClickedSocket = socket;
            }
        }
        
        private void OnClickedNode(BaseNodeView node)
        {
            TaskTooltipAttribute[] attributes = (TaskTooltipAttribute[]) node.task.GetType().GetCustomAttributes(typeof(TaskTooltipAttribute), true);

            if (attributes.Length > 0)
            {
                TaskTooltipAttribute attribute = (TaskTooltipAttribute) attributes.First();

                if (attribute != null)
                {
                    _tooltipWindow = _tooltipWindow == null ? CreateInstance<TooltipWindow>() : GetWindow<TooltipWindow>();
                            
                    _tooltipWindow.position = new Rect(_editor.position.xMin + 20,_editor.position.yMax - 100,200,80);
                    _tooltipWindow.Tooltip = attribute.Tooltip;
                    _tooltipWindow.ShowPopup();
                }
                    
            }
        }
        #endregion
        
        #region Saving System
        private void SaveGraphData()
        {
            if (CurrentTree != null)
            {
                if (CurrentTree.SavedNodes.Count != 0 || CurrentTree.SavedConnections.Count != 0)
                {
                    CurrentTree.SavedNodes.Clear();
                    CurrentTree.SavedConnections.Clear();
                    Debug.Log("Overriding the data");
                }
            
                foreach (var nodeView in _nodeViews)
                {
                    CurrentTree.SavedNodes.Add(nodeView);
                }

                foreach (var connection in _connections)
                {
                    CurrentTree.SavedConnections.Add(connection);
                }
            
                Debug.Log("Saved " + CurrentTree.SavedNodes.Count + " nodes.");
            }
        }

        private void LoadTreeGraph()
        {
            if (CurrentTree == null)
            {
                Debug.LogError("Select a graph to Load Data From");
            }
            else
            {
                _nodeViews.Clear();
                _connections.Clear();

                for (int i = 0; i < CurrentTree.SavedNodes.Count; i++)
                {
                    _nodeViews.Add(CurrentTree.SavedNodes[i]);
                }
                
                foreach (var savedConnection in CurrentTree.SavedConnections)
                {
                    _connections.Add(savedConnection);
                }

                GUI.changed = true;
            }
        }
        
        #endregion

    }
    
}