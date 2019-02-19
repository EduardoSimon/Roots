using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using BT_Core;
using BT_Editor;
using UnityEditor;
using UnityEngine;

namespace Editor
{
    public class SearchTasksWindow : EditorWindow
    {
        private string searchString = "";
        private GUISkin _skin;
        private string[] _avaliableTasks;
        private Type[] _types;

        public BTEditor parentWindow;
        
        public event Action<Type> OnSearchedTaskClicked; 
        
        private void OnEnable()
        {
            Debug.Log("Search window enabled");
            _skin = Resources.Load<GUISkin>("BTSkin");
            this.wantsMouseEnterLeaveWindow = true;
            
            List<string> avaliableTasks = new List<string>();
            List<Type> types = new List<Type>();

            foreach (Type type in Assembly.GetAssembly(typeof(ATask))
                .GetTypes()
                .Where(myType => myType.IsClass && !myType.IsAbstract && myType.IsSubclassOf(typeof(ATask))))
            {
                avaliableTasks.Add(type.Name);
                types.Add(type);
            }

            _avaliableTasks = avaliableTasks.ToArray();
            _types = types.ToArray();

        }

        void OnGUI()
        {
            if (Event.current.type == EventType.KeyUp && Event.current.keyCode == KeyCode.Escape && EditorWindow.focusedWindow == this)
            {
                parentWindow.Focus();
                this.Close();
                parentWindow.SearchableTaskWindow = null;
            }
            else if (Event.current.type == EventType.MouseLeaveWindow)
            {
                parentWindow.Focus();
                this.Close();
                parentWindow.SearchableTaskWindow = null;
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
                    if (GUILayout.Button(_avaliableTasks[i], EditorStyles.toolbarButton))
                    {
                        OnSearchedTaskClicked?.Invoke(_types[i]);
                        Debug.Log("Creating a " + _avaliableTasks[i] + " task node.");
                    }
                }
            }
            GUILayout.EndVertical();
                
            
            
            
            
            
        }

    }
}