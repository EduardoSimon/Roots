using System;
using System.Runtime.InteropServices;
using BT_Core;
using BT_Editor;
using UnityEditor;
using UnityEngine;

namespace Editor
{
    public class SearchTasksWindow : EditorWindow
    {
        string searchString = "";
        private GUISkin _skin;
        public BTEditor parentWindow;

        private string[] _avaliableTasks = new[]
        {
            "Sequence",
            "Selector",
            "Parallel",
            "Action",
        };

        private void OnEnable()
        {
            _skin = Resources.Load<GUISkin>("BTSkin");
            this.wantsMouseEnterLeaveWindow = true;

        }

        void OnGUI()
        {
            if (Event.current.type == EventType.KeyUp && Event.current.keyCode == KeyCode.Escape && EditorWindow.focusedWindow == this)
            {
                parentWindow.Focus();
                this.Close();
                parentWindow.searchTasksWindow = null;
            }
            else if (Event.current.type == EventType.MouseLeaveWindow)
            {
                parentWindow.Focus();
                this.Close();
                parentWindow.searchTasksWindow = null;
            }

            GUI.skin = _skin;
            GUILayout.BeginVertical("Task Finder", EditorStyles.toolbarButton);
                GUILayout.Space(20);
                GUILayout.BeginHorizontal();
                    GUILayout.Box(Resources.Load<Texture>("search_icon"),"texture", new []{ GUILayout.MaxHeight(15), GUILayout.MaxWidth(15)});
                    GUI.SetNextControlName("searchBar");
                    searchString = GUILayout.TextField(searchString,EditorStyles.textArea);
                    GUI.FocusControl("searchBar");
                GUILayout.EndHorizontal();
            GUILayout.EndVertical();
            
            GUILayout.Space(30);

                GUILayout.BeginVertical();
                for (int i = 0; i < _avaliableTasks.Length; i++)
                {

                    if (_avaliableTasks[i].ToLower().Contains(searchString.ToLower()))
                    {
                        Repaint();
                        GUILayout.Label(_avaliableTasks[i], EditorStyles.toolbarButton);
                        Debug.Log(_avaliableTasks[i]);

                    }
                }
                GUILayout.EndVertical();
                
            
            
            
            
            
        }
        
    }
}
