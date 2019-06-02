using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using BT;
using UnityEditor;
using UnityEngine;
using UnityEngine.Serialization;

namespace Editor
{
    public class SearchTasksWindow : EditorWindow
    {
        [FormerlySerializedAs("_avaliableTasks")]
        public Dictionary<string[], NodeType> _avaliableTasksDictionary = new Dictionary<string[], NodeType>();

        private GUISkin _skin;
        private SearchTreeNode _tree;
        private Type[] _types;

        public BtEditor parentWindow;

        private string searchString;

        private void OnEnable()
        {
            _skin = Resources.Load<GUISkin>("BTSkin");

#if UNITY_EDITOR_WIN
            wantsMouseEnterLeaveWindow = true;
#endif

            GetTypes();
            _tree = CreateSearchTree();
        }

        private void GetTypes()
        {
            var drawerTypes = new List<Type>();

            foreach (var type in Assembly.GetAssembly(typeof(ATask)).GetTypes().Where(myType =>
                myType.IsClass && !myType.IsAbstract && myType.IsSubclassOf(typeof(ATask))))
            {
                var searchMenuAttributes =
                    (SearchTaskPathAttribute[]) type.GetCustomAttributes(typeof(SearchTaskPathAttribute), false);

                var customNodeDrawerAttributes =
                    (CustomNodeDrawerAttribute[]) type.GetCustomAttributes(typeof(CustomNodeDrawerAttribute), false);

                //in theory allowmultiple is not allowed, so it shouldnt find more than one instance of the attribute
                if (searchMenuAttributes.Length > 0 && searchMenuAttributes[0] != null)
                {
                    if (customNodeDrawerAttributes.Length > 0 && customNodeDrawerAttributes[0] != null)
                        _avaliableTasksDictionary[searchMenuAttributes[0].GetMenuPathSplit()] =
                            new NodeType(type, customNodeDrawerAttributes[0].DrawWindowType);
                    else if (customNodeDrawerAttributes.Length == 0)
                        _avaliableTasksDictionary[searchMenuAttributes[0].GetMenuPathSplit()] =
                            new NodeType(type, typeof(DefaultNode));
                }
            }
        }

        private void OnGUI()
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

            if (!position.Contains(GUIUtility.GUIToScreenPoint(Event.current.mousePosition)) ||
                Event.current.keyCode == KeyCode.Escape && focusedWindow == this ||
                Event.current.keyCode == KeyCode.Escape || Event.current.type == EventType.MouseLeaveWindow)
            {
                
                parentWindow.Focus();
                Close();
                parentWindow.searchableTaskWindow = null;
            }

            GUI.skin = _skin;
            GUILayout.BeginVertical("Task Finder", EditorStyles.toolbarButton);
            GUILayout.Space(20);
            GUILayout.BeginHorizontal();
            GUILayout.Box(Resources.Load<Texture>("search_icon"), "texture", GUILayout.MaxHeight(15),
                GUILayout.MaxWidth(15));
            GUI.SetNextControlName("searchBar");
            searchString = GUILayout.TextField(searchString, EditorStyles.textArea);
            GUI.FocusControl("searchBar");
            GUILayout.EndHorizontal();
            GUILayout.EndVertical();

            GUILayout.Space(30);

            GUILayout.BeginVertical();
            if (!string.IsNullOrEmpty(searchString))
                TraverseSearching(_tree, searchString);
            else
                TraverseDrawing(_tree);
            GUILayout.EndVertical();
        }

        public void TraverseSearching(SearchTreeNode root, string searchedWord)
        {
            if (!root.HasChildren() && root.Title.ToLower().Contains(searchedWord.ToLower())) // it is a leaf
            {
                if (GUILayout.Button(root.Title, EditorStyles.miniButton))
                {
                    Debug.Log("Creating a " + root.Title + " task node.");

                    parentWindow.OnSearchedTaskClicked(root.NodeType);

                    parentWindow.Focus();
                    Close();
                    parentWindow.searchableTaskWindow = null;
                }
            }
            else
            {
                foreach (var child in root.Children) TraverseSearching(child, searchedWord);
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

                            parentWindow.Focus();
                            Close();
                            parentWindow.searchableTaskWindow = null;
                        }

                        EditorGUI.indentLevel--;
                    }
                    else
                    {
                        EditorGUI.indentLevel++;

                        node.Activated = EditorGUILayout.Foldout(node.Activated, node.Title, true);
                        if (node.Activated)
                            for (var i = 0; i < node.Children.Count; i++)
                                TraverseDrawing(node.Children[i]);

                        EditorGUI.indentLevel--;
                    }
                }
            }
            else
            {
                node.Activated = EditorGUILayout.Foldout(node.Activated, node.Title, true);

                for (var i = 0; i < node.Children.Count; i++) TraverseDrawing(node.Children[i]);
            }
        }

        public SearchTreeNode CreateSearchTree()
        {
            var root = new SearchTreeNode("Root", new NodeType(), null);

            foreach (var key in _avaliableTasksDictionary.Keys)
            {
                var currentRoot = root;

                for (var i = 0; i < key.Length; i++)
                {
                    var children = currentRoot.GetChildrenByTitle(key[i]);

                    if (children == null)
                    {
                        var newNode = new SearchTreeNode(key[i], _avaliableTasksDictionary[key], root);
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

        public class SearchTreeNode
        {
            public bool Activated;


            public SearchTreeNode(string title, NodeType nodeType, SearchTreeNode parent)
            {
                Title = title;
                NodeType = nodeType;
                Parent = parent;
                Activated = false;
            }

            public string Title { get; }
            public NodeType NodeType { get; }
            public List<SearchTreeNode> Children { get; } = new List<SearchTreeNode>();
            public SearchTreeNode Parent { get; private set; }

            public void AddChildren(SearchTreeNode children)
            {
                if (!Children.Contains(children))
                {
                    Children.Add(children);
                    children.Parent = this;
                }
                else
                {
                    Debug.LogError("Cant the same node twice as a children.");
                }
            }

            public SearchTreeNode GetChildrenByTitle(string s)
            {
                for (var i = 0; i < Children.Count; i++)
                    if (Children[i].Title == s)
                        return Children[i];

                return null;
            }

            public bool HasChildren()
            {
                return Children.Count != 0;
            }
        }
    }
}