using System;
using System.Collections.Generic;
using System.Linq;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;
using UnityEngine.Serialization;

namespace BT.Editor
{
    [CreateAssetMenu(menuName = "BT/Behavior Tree Graph")]
    public class BehaviorTreeGraph : ScriptableObject, ICloneable
    {
        public BlackBoard BlackBoard;
        public List<NodeConnection> SavedConnections = new List<NodeConnection>();
        public List<BaseNode> SavedNodes = new List<BaseNode>();

        public NodeConnection entryConnection;

        [SerializeField] public BaseNode root;
        [SerializeField] public BehaviorTree _tree;
        public BaseNode EntryNode;


        public void Compile()
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

        private void ConstructTree(BaseNode node)
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
                else if (node.Task is Decorator decorator)
                {
                    if (node.children != null)
                    {
                        decorator.child = null;

                        if (node.children.Count > 0)
                        {
                            decorator.child = node.children[0].Task;
                            ConstructTree(node.children[0]);
                        }
                    }
                }
            }
        }

        public void PrintTree(ATask task)
        {
            if (task is IComposite composite)
            {
                for (int i = 0; i < composite.Children.Count; i++)
                {
                    ATask taskNode = (ATask) composite;
                    PrintTree(composite.Children[i]);
                }
            }
            else if (task is Decorator decorator)
            {
                if (decorator.child != null)
                    PrintTree(decorator.child);
            }

            Debug.Log(task);
        }


        public object Clone()
        {
            var container = CreateInstance<BehaviorTreeGraph>();

            List<BaseNode> clonedNodes = null;

            if (SavedNodes != null)
            {
                clonedNodes = new List<BaseNode>();
            }

            List<NodeConnection> clonedConnections = null;
            if (SavedConnections != null)
            {
                clonedConnections = new List<NodeConnection>();
            }
            
            foreach (var nodeConnection in SavedConnections)
            {
                if(nodeConnection.IsEntryConnection)
                    continue;
                
                BaseNode copiedStartNode = null, copiedEndNode = null;

                if (nodeConnection.StartSocket.IsHooked)
                    copiedStartNode = nodeConnection.StartSocket.Node.Clone(container);

                if (nodeConnection.EndSocket.IsHooked)
                    copiedEndNode = nodeConnection.EndSocket.Node.Clone(container);
                
                if(!clonedNodes.Contains(copiedStartNode))
                    clonedNodes.Add(copiedStartNode);

                if (!clonedNodes.Contains(copiedEndNode))
                {
                    copiedStartNode.children.Add(copiedEndNode);
                    clonedNodes.Add(copiedEndNode);
                }

                var cloned = nodeConnection.Clone() as NodeConnection;
                cloned.StartSocket = copiedStartNode.exitSocket;
                cloned.EndSocket = copiedEndNode.entrySocket;
                
                clonedConnections.Add(cloned);
            }

            NodeConnection clonedEntryConnection = null;
            if (entryConnection != null)
            {
                clonedEntryConnection = this.entryConnection.Clone() as NodeConnection;
            }
            
            if (clonedNodes != null)
                container.SavedNodes = clonedNodes;
            
            if (clonedConnections != null)
                container.SavedConnections = clonedConnections;
            
            if (clonedEntryConnection != null)
                container.entryConnection = clonedEntryConnection;

            return container;
        }
    }
}