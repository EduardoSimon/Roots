using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using System.Xml.Serialization.Configuration;
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

        private string searchString;
        private GUISkin _skin;
        private Type[] _types;
        private SearchTreeNode _tree;
        [FormerlySerializedAs("_avaliableTasks")] public  Dictionary<string[],NodeType> _avaliableTasksDictionary = new Dictionary<string[], NodeType>();

        public BtEditor parentWindow;
                
        private void OnEnable()
        {
            _skin = Resources.Load<GUISkin>("BTSkin");
            this.wantsMouseEnterLeaveWindow = true;
            
            GetTypes();
            _tree = CreateSearchTree();
            
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
            //this crashes on mac mojave version 2018.3.6f when using the MouseLeaveWindow evet
           
            #if UNITY_EDITOR_WIN
            if (Event.current.type == EventType.MouseLeaveWindow)
            {
                parentWindow.Focus();
                Close();
                parentWindow.searchableTaskWindow = null;
            }
            #endif
            
            if (Event.current.type == EventType.KeyUp && Event.current.keyCode == KeyCode.Escape && focusedWindow == this  || Event.current.type == EventType.MouseLeaveWindow)
            {
                parentWindow.Focus();
                Close();
                parentWindow.searchableTaskWindow = null;
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
                if(!string.IsNullOrEmpty(searchString))
                    SearchTasks();
                else
                    TraverseDrawing(_tree);
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
                        if (GUILayout.Button(s, EditorStyles.miniButton))
                        {
                            Debug.Log("Creating a " + s + " task node.");

                            parentWindow.OnSearchedTaskClicked(_avaliableTasksDictionary[key]);
                        }
                    }
                }
            }
        }
        
        public void TraverseDrawing(SearchTreeNode node)
        {
            if (node.Parent != null)
            {
                if (node.Parent.Activated)
                {
                    if (!node.HasChildren())
                    {
                        EditorGUI.indentLevel++;
                        if (GUILayout.Button(node.Title, EditorStyles.miniButton))
                        {
                            parentWindow.OnSearchedTaskClicked(node.NodeType);
                        }
                        EditorGUI.indentLevel--;
                    }
                    else
                    {
                        EditorGUI.indentLevel++;
                        
                        node.Activated = EditorGUILayout.Foldout(node.Activated, node.Title,true);
                        if (node.Activated)
                        {
                            for (int i = 0; i < node.Children.Count; i++)
                            {
                                TraverseDrawing(node.Children[i]);
                            }
                        }

                        EditorGUI.indentLevel--;
                    }
                }
            }
            else
            {
                node.Activated = EditorGUILayout.Foldout(node.Activated, node.Title,true);
                
                for (int i = 0; i < node.Children.Count; i++)
                {
                    TraverseDrawing(node.Children[i]);
                }
            }

        }

        public SearchTreeNode CreateSearchTree()
        {
            SearchTreeNode root = new SearchTreeNode("Root", new NodeType(), null);
            
            foreach (var key in _avaliableTasksDictionary.Keys)
            {
                var currentRoot = root;
                
                for (int i = 0; i < key.Length; i++)
                {
                    var children = currentRoot.GetChildrenByTitle(key[i]);

                    if (children == null)
                    {
                        SearchTreeNode newNode = new SearchTreeNode(key[i],_avaliableTasksDictionary[key], root);
                        currentRoot.AddChildren(newNode);
                        currentRoot = newNode;
                    }
                    else
                    {
                        currentRoot = children;
                    }
                }

            }

            return root;
        }
        public class SearchTreeNode
        {
            public string Title { get; private set; }
            public NodeType NodeType { get; }
            public List<SearchTreeNode> Children { get; private set; } = new List<SearchTreeNode>();
            public SearchTreeNode Parent { get; private set; }
            public bool Activated;


            public SearchTreeNode(string title, NodeType nodeType, SearchTreeNode parent)
            {
                Title = title;
                NodeType = nodeType;
                Parent = parent;
                Activated = false;
            }

            public void AddChildren(SearchTreeNode children)
            {
                if (!Children.Contains(children))
                {
                    Children.Add(children);
                    children.Parent = this;
                }
                else
                    Debug.LogError("Cant the same node twice as a children.");
            }
            
            public SearchTreeNode GetChildrenByTitle(string s)
            {
                for (int i = 0; i < Children.Count; i++)
                {
                    if (Children[i].Title == s)
                        return Children[i];
                }

                return null;
            }

            public bool HasChildren()
            {
                return Children.Count != 0;
            }
        }
    }
}