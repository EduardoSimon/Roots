using System;
using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;
using UnityEngine.Serialization;

namespace BT.Editor
{
    [CreateAssetMenu(menuName = "BT/Behavior Tree Graph")]
    public class  BehaviorTreeGraph : ScriptableObject
    {
        public string GraphName;
        public List<NodeConnection> SavedConnections = new List<NodeConnection>();
        public List<BaseNode> SavedNodes = new List<BaseNode>();

        public NodeConnection entryConnection;

        [SerializeField] public BaseNode root;
        [SerializeField] public BehaviorTree _tree;
        public BaseNode EntryNode;
        

        public void OnSave()
        {
            root = null;
            
            foreach (var savedNode in SavedNodes)
            {
                if (savedNode.IsRootView)
                {
                    root = savedNode;
                    break;
                }
                
            }
            
            if (root == null)
            {
                Debug.Log("The Tree is empty, there's nothing to build");
                return;
            }

            _tree = new BehaviorTree();
            _tree.AddRoot(root.Task);

            ConstructTree(root);
            
            PrintTree(_tree.RootTask);
        }

        public void ConstructTree(BaseNode node)
        {
            if (node.IsParentNode)
            {
                if (node.Task is IComposite compositeTask)
                {
                    if (node.children == null)
                    {
                        Debug.LogError("There is an empty composite, please remove it or add a children");
                    }
                    else
                    {
                        compositeTask.Children.Clear();
                        if (node.children.Count > 0)
                        {
                            List<BaseNode> unorderedNodes = new List<BaseNode>(node.children);

                            for (int i = 0; i < node.children.Count; i++)
                            {
                                int index = 0;
                                float xmin = int.MaxValue;
                                for (int j = 0; j < unorderedNodes.Count; j++)
                                {
                                    if (unorderedNodes[j].windowRect.xMin < xmin)
                                    {
                                        index = j;
                                        xmin = unorderedNodes[j].windowRect.xMin;
                                    }
                                }
                                
                                compositeTask.AddChild(unorderedNodes[index].Task);
                                unorderedNodes.RemoveAt(index);
                                ConstructTree(node.children[i]);
                            }
                          
                        }
                    }
                }
            }
           
        }

        public void PrintTree(ATask task)
        {
            if (task is IComposite compositeNode)
            {
                for (int i = 0; i < compositeNode.Children.Count; i++)
                {
                    ATask taskNode = (ATask) compositeNode;
                    PrintTree(compositeNode.Children[i]);
                }
            }

            Debug.Log(task);
        }


        
        
    }
}