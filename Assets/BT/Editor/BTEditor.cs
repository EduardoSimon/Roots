using System;
using System.Reflection.Emit;
using System.Runtime.CompilerServices;
using Editor;
using UnityEditor;
using UnityEngine;
using UnityEngine.Assertions.Must;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Serialization;
using UnityEngine.UI;
using Object = System.Object;

namespace BT
{
    public class BTEditor : EditorWindow
    {
        private Vector2 _offset;
        private Vector2 _drag;
        private static BTEditor _editor;
        private static float _zoom;
        private static Rect _zoomArea;

        public SearchTasksWindow SearchableTaskWindow;

        [MenuItem("BT/Editor")]
        static void Init()
        {
            _editor = (BTEditor) EditorWindow.CreateInstance<BTEditor>();
            _editor.titleContent = new GUIContent("BT Editor",Resources.Load<Texture>("star"),"A behavior tree visual editor for everyone");
            _editor.Show();
            _editor.Focus();
            _editor.wantsMouseMove = true;
            //zoom = 1f;
            //zoomArea = _editor.position;
        }

        public void OnSearchedTaskClicked(Type type)
        {
            //without the type.fullname it does not work
            EditorWindow instance = EditorWindow.CreateInstance(type.FullName.ToString()) as EditorWindow;
            instance.Show();
            Debug.Log(instance.GetType().Name);
        }

        private void OnGUI()
        {
            DrawBackgroundGrid(20,0.2f,Color.grey);
            DrawBackgroundGrid(100,0.4f,Color.grey);
            ProccessEvents(Event.current);
            Vector2 mousePos = GUIUtility.GUIToScreenPoint(Event.current.mousePosition);
            
            //EditorZoomArea.Begin(zoom, zoomArea);

            //EditorZoomArea.End();
            
            if(GUI.changed) Repaint();
        }

        private void ProccessEvents(Event e)
        {
            _drag = Vector2.zero;
            switch (e.type)
            {
                /*
                case EventType.MouseDown:
                    Debug.Log("Mouse was pressed");
                    break;
                case EventType.MouseUp:
                    Debug.Log("Mouse was released");
                    break;
                    */
                case EventType.MouseDrag:
                    if (e.button == 0)
                    {
                        //todo will need movement of window nodes
                        _drag = e.delta;
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

        void DoMyWindow(int windowID)
        {
            if (GUI.Button(new Rect(10, 20, 100, 20), "Hello World"))
            {
                Debug.Log("Got a click");
            }
        }
        
        private static void ProcessRightClickEvent()
        {
            Debug.Log("Right Clicked the window");
            GenericMenu genericMenu = new GenericMenu();
            genericMenu.AddItem(new GUIContent("Add Task", "Add a built-in task or a custom made one."), false, () =>
            {
                Debug.Log("Adding a task");
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