using System;
using System.Collections.Generic;
using Editor;
using UnityEditor;
using UnityEngine;
using Object = System.Object;

namespace BT
{
    public class BTEditor : EditorWindow
    {
        private static List<BaseNodeView> _nodeViews = new List<BaseNodeView>();
        private Vector2 _offset;
        private Vector2 _drag;
        private Vector2 _mousePosition;
        private static BTEditor _editor;
        private static float _zoom;
        private static Rect _zoomArea;
        private bool showWindows = true;
        public static BaseNodeView SelectedNode;
        public static BehaviorTree CurrentTree;

        public SearchTasksWindow SearchableTaskWindow;

        [MenuItem("BT/Editor")]
        private static void Init()
        {
            _editor = (BTEditor) EditorWindow.CreateInstance<BTEditor>();
            _editor.titleContent = new GUIContent("BT Editor",Resources.Load<Texture>("star"),"A behavior tree visual editor for everyone");
            _editor.minSize = new Vector2(800,600);
            _editor.Show();
 
            _editor.wantsMouseMove = true;
            _nodeViews = new List<BaseNodeView>();
            //zoom = 1f;
            //zoomArea = _editor.position;
        }

        public void OnSearchedTaskClicked(SearchTasksWindow.NodeType nodeType)
        {
                CreateNodeView(nodeType,
                new Rect(SearchableTaskWindow.position.x + position.width/1000, _mousePosition.y, 200, 50),
                nodeType.taskType.ToString());
            //without the type.fullname it does not work

        }

        private void CreateNodeView(SearchTasksWindow.NodeType nodeType, Rect windowRect, string windowTitle)
        {
            BaseNodeView instance = ScriptableObject.CreateInstance(nodeType.DrawerType.FullName) as BaseNodeView;
            instance.task = CreateInstance(nodeType.taskType.FullName) as ATask;
            instance.windowRect = windowRect;    
            instance.windowTitle = windowTitle;
            _nodeViews.Add(instance);
        }

        private void OnGUI()
        {
            _mousePosition = Event.current.mousePosition;
            DrawBackgroundGrid(20,0.2f,Color.grey);
            DrawBackgroundGrid(100,0.4f,Color.grey);
            ProccessEvents(Event.current);
            ProcessNodeEvents(Event.current);
            Vector2 mousePos = GUIUtility.GUIToScreenPoint(Event.current.mousePosition);
            
            //EditorZoomArea.Begin(zoom, zoomArea);

            //EditorZoomArea.End();

            DrawGlobalGUIControls();


            if (showWindows)
            {
                DrawWindows();
            }


            if(GUI.changed) Repaint();
        }

        private void DrawGlobalGUIControls()
        {
            GUILayout.BeginHorizontal();
            
            EditorGUI.BeginChangeCheck();
            CurrentTree = EditorGUILayout.ObjectField(CurrentTree,typeof(BehaviorTree),false) as BehaviorTree;
            if(EditorGUI.EndChangeCheck())
                GUI.FocusControl(null);

            if (GUILayout.Button("Load Graph Data"))
                LoadTreeGraph();

            if (GUILayout.Button("Save Graph Data"))
                SaveGraphData();
            
            if (GUILayout.Button("Show window"))
                showWindows = !showWindows;

            if (GUILayout.Button("Clear Windows"))
            {
                foreach (var view in _nodeViews)
                {
                    DestroyImmediate(view);
                }

                _nodeViews.Clear();
            }
            
            
            GUILayout.EndHorizontal();
        }

        private void SaveGraphData()
        {
            if (CurrentTree.savedData.Count != 0)
            {
                CurrentTree.savedData.Clear();
                Debug.Log("Overriding the data");
            }
            
            foreach (var nodeView in _nodeViews)
            {
                CurrentTree.savedData[nodeView] = nodeView.SaveData();
            }
            
            Debug.Log("Saved " + CurrentTree.savedData.Count + " nodes.");
            
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
                
                foreach (var savedDataKey in CurrentTree.savedData.Keys)
                {
                    BaseNodeView.NodeData data = CurrentTree.savedData[savedDataKey];
                    SearchTasksWindow.NodeType type = new SearchTasksWindow.NodeType(data.task.GetType(), typeof(DefaultNodeView));
                    CreateNodeView(type,data.windowRect,data.windowTitle);
                }
                
                Debug.Log("Loaded " + _nodeViews.Count + "nodes");

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
                        if (SelectedNode != null)
                        {
                            _drag = Vector2.zero;
                            SelectedNode.Drag(e.delta);
                            GUI.changed = true;
                            break;
                        }
                        
                        _drag = e.delta;

                        foreach (var nodeView in _nodeViews)
                        {
                            nodeView.Drag(_drag);
                        }
                        GUI.changed = true;
                    }
                    
                    break;

                case EventType.ContextClick:
                    ProcessRightClickEvent();
                    break;
                
                case EventType.KeyUp:
                    
                    if (e.keyCode == KeyCode.Space && position.Contains(GUIUtility.GUIToScreenPoint(e.mousePosition)))
                    {
                        if (SearchableTaskWindow == null)
                        {
                            SearchableTaskWindow = CreateInstance<SearchTasksWindow>();
                            Vector2 mouseScreenPos = GUIUtility.GUIToScreenPoint(e.mousePosition);
                            SearchableTaskWindow.parentWindow = this;
                            SearchableTaskWindow.position = new Rect(mouseScreenPos.x - position.width/10, mouseScreenPos.y - position.height/10, 300, 300);
                            SearchableTaskWindow.ShowPopup();
                            SearchableTaskWindow.Focus();
                        }

                    }
                    break;
                        
                
                case EventType.ScrollWheel:
                    _zoom = e.delta.y;
                    GUI.changed = true;
                    break;
                
            }
        }
        private void ProcessRightClickEvent()
        {
            Debug.Log("Right Clicked the window");
            GenericMenu genericMenu = new GenericMenu();
            genericMenu.AddItem(new GUIContent("Add Task", "Add a built-in task or a custom made one."), false, () =>
            {


               
            });
            
            genericMenu.AddSeparator("");
            genericMenu.AddItem(new GUIContent("About", "about the library"), false, () =>
            {
                
                Debug.Log("Author's name is Eduardo Simon Picon.");
            });

            genericMenu.ShowAsContext();
        }

        private void DrawBackgroundGrid(float gridSpacing, float gridOpacity, Color gridColor)
        {
            int widthDivs = Mathf.CeilToInt(position.width / gridSpacing);
            int heightDivs = Mathf.CeilToInt(position.height / gridSpacing);
 
            Handles.BeginGUI();
            Handles.color = new Color(gridColor.r, gridColor.g, gridColor.b, gridOpacity);
 
            _offset += _drag * 0.5f;
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
    }
    
}