using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using BT;
using UnityEditor;
using UnityEditor.AnimatedValues;
using UnityEngine;
using UnityEngine.Serialization;

namespace Editor
{
    public class SearchTasksWindow : EditorWindow
    {
        public struct NodeType
        {
            public Type taskType;
            public Type DrawerType;

            public NodeType(Type taskType, Type drawerType)
            {
                this.taskType = taskType;
                DrawerType = drawerType;
            }
        }
        
        AnimBool m_ShowExtraFields;
        private string searchString = "";
        private GUISkin _skin;
        private Type[] _types;
        [FormerlySerializedAs("_avaliableTasks")] public  Dictionary<string[],NodeType> _avaliableTasksDictionary = new Dictionary<string[], NodeType>();

        public BTEditor parentWindow;
                
        private void OnEnable()
        {
            _skin = Resources.Load<GUISkin>("BTSkin");
            this.wantsMouseEnterLeaveWindow = true;
            
            GetTypes();

            m_ShowExtraFields = new AnimBool(true);
            m_ShowExtraFields.speed = 10f;
            m_ShowExtraFields.valueChanged.AddListener(Repaint);
        }

        private void GetTypes()
        {
            List<Type> drawerTypes = new List<Type>();

            foreach (Type type in Assembly.GetAssembly(typeof(ATask)).GetTypes().Where(myType =>
                myType.IsClass && !myType.IsAbstract && myType.IsSubclassOf(typeof(ATask))))
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
                        _avaliableTasksDictionary[searchMenuAttributes[0].GetMenuPathSplit()] =
                            new NodeType(type, customNodeDrawerAttributes[0].DrawWindowType);
                    }
                    else if (customNodeDrawerAttributes.Length == 0)
                    {
                        _avaliableTasksDictionary[searchMenuAttributes[0].GetMenuPathSplit()] =
                            new NodeType(type, typeof(DefaultNodeView));
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

            List<string> foldouts = new List<string>();
            
            foreach (var avaliableTask in _avaliableTasksDictionary.Keys)
            {
                if (!foldouts.Contains(avaliableTask[0]))
                {
                    m_ShowExtraFields.target = EditorGUILayout.Foldout(m_ShowExtraFields.target,avaliableTask[0],EditorStyles.foldout);

                    //Extra block that can be toggled on and off.
                    if (EditorGUILayout.BeginFadeGroup(m_ShowExtraFields.faded))
                    {
                        EditorGUI.indentLevel++;
                        //draw all inside 

                        foreach (var key in _avaliableTasksDictionary.Keys)
                        {
                            if (key[0] == avaliableTask[0])
                            {
                                if (key.Length > 1)
                                    GUILayout.Button(key[1],EditorStyles.miniButton);
                                else
                                {
                                    GUILayout.Button(key[0],EditorStyles.miniButton);
                                }
                            }
                        }
                        
                        EditorGUI.indentLevel--;
                    }

                    EditorGUILayout.EndFadeGroup();
                }
                    
            }
            
           
            
            GUILayout.EndVertical();
        }



        private void SearchTasks()
        {
            foreach (var key in _avaliableTasksDictionary.Keys)
            {
                foreach (var s in key)
                {
                    if (s.ToLower().Contains(searchString.ToLower()))
                    {
                        if (GUILayout.Button(s, EditorStyles.toolbarButton))
                        {
                            Debug.Log("Creating a " + s + " task node.");

                            parentWindow.OnSearchedTaskClicked(_avaliableTasksDictionary[key]);
                        }
                    }
                }
            }

        }

        public SearchTreeNode CreateSearchTree()
        {
            SearchTreeNode root = new SearchTreeNode("Tasks", null,null);
            
            foreach (var key in _avaliableTasksDictionary.Keys)
            {
                if(root.IsStringContainedInChildren(key[0]))
                    root.AddChildren(new SearchTreeNode(_avaliableTasksDictionary[key].taskType.Name,_avaliableTasksDictionary[key],root));
                
                for (int i = 0; i < key.Length; i++)
                {
                    
                }

            }

            for (int i = 0; i < _avaliableTasksDictionary.Keys.Count; i++)
            {
                if(root.IsStringContainedInChildren(key[i],i))
            }
        }
        public class SearchTreeNode
        {
            private string _title;
            private NodeType? _nodeType;
            private List<SearchTreeNode> _children = new List<SearchTreeNode>();
            public SearchTreeNode Parent { get; private set; }

            public SearchTreeNode(string title, NodeType? nodeType, SearchTreeNode parent)
            {
                _title = title;
                _nodeType = nodeType;
                Parent = parent;
            }

            public void AddChildren(SearchTreeNode children)
            {
                if (!_children.Contains(children))
                {
                    _children.Add(children);
                    children.Parent = this;
                }
                else
                    Debug.LogError("Cant the same node twice as a children.");
            }
            
            public bool IsStringContainedInChildren(string s, int maxDepth)
            {
                for (int i = 0; i < _children.Count; i++)
                {
                    if (_children[i]._title == s)
                        return true;
                }

                return false;
            }
            
            public bool IsStringContainedInChildren(string s)
            {
                for (int i = 0; i < _children.Count; i++)
                {
                    if (_children[i]._title == s)
                        return true;
                }

                return false;
            }

            public void Traverse(int maxDepth, ref int depth)
            {
                depth++;

                if (depth >= maxDepth)
                    return;
                
                for (int i = 0; i < _children.Count; i++)
                {
                    _children[i].Traverse(maxDepth,ref depth);
                }
            }
        }
    }
}