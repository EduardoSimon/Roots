﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using BT;
using UnityEditor;
using UnityEngine;

namespace Editor
{
    public class SearchTasksWindow : EditorWindow
    {
        private string searchString = "";
        private GUISkin _skin;
        private Type[] _types;
        Dictionary<string[],Type> _avaliableTasks = new Dictionary<string[], Type>();

        public BTEditor parentWindow;
                
        private void OnEnable()
        {
            Debug.Log("Search window enabled");
            _skin = Resources.Load<GUISkin>("BTSkin");
            this.wantsMouseEnterLeaveWindow = true;
            
            //List<string> avaliableTasks = new List<string>();
            List<Type> drawerTypes = new List<Type>();

                foreach (Type type in Assembly.GetAssembly(typeof(ATask)).GetTypes().Where(myType => myType.IsClass && !myType.IsAbstract && myType.IsSubclassOf(typeof(ATask))))
                {
                   SearchMenuAttribute[] searchMenuAttributes =
                        (SearchMenuAttribute[]) type.GetCustomAttributes(typeof(SearchMenuAttribute), false);
                   
                   CustomNodeDrawerAttribute[] customNodeDrawerAttributes =
                       (CustomNodeDrawerAttribute[]) type.GetCustomAttributes(typeof(CustomNodeDrawerAttribute), false);
                    
                    //in theory allowmultiple is not allowed, so it shouldnt find more than one instance of the attribute
                    if (searchMenuAttributes.Length > 0 && searchMenuAttributes[0] != null)
                    {
                        if (customNodeDrawerAttributes.Length > 0 && customNodeDrawerAttributes[0] != null)
                        {
                            _avaliableTasks[searchMenuAttributes[0].GetMenuPathSplit()] =
                                customNodeDrawerAttributes[0].DrawWindowType;
                        }
                        else if (customNodeDrawerAttributes.Length == 0)
                        {
                            _avaliableTasks[searchMenuAttributes[0].GetMenuPathSplit()] = typeof(DefaultNodeDrawer);
                        }
                    }  
                }
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


            foreach (var key in _avaliableTasks.Keys)
            {
                foreach (var s in key)
                {
                    if (s.ToLower().Contains(searchString.ToLower()))
                    {
                        if (GUILayout.Button(s, EditorStyles.toolbarButton))
                        {
                            Debug.Log("Creating a " + s + " task node.");

                            parentWindow.OnSearchedTaskClicked(_avaliableTasks[key]);
                        }
                    }
                }
            }
            
            GUILayout.EndVertical();
        }

    }
}