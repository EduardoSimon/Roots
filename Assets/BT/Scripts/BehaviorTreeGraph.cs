using System;
using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEngine;
using UnityEngine.Serialization;

namespace BT.Editor
{
    [CreateAssetMenu(menuName = "BT/Behavior Tree Graph")]
    public class BehaviorTreeGraph : ScriptableObject
    {
        public string Name;
        public List<NodeConnection> SavedConnections = new List<NodeConnection>();
        public List<BaseNodeView> SavedNodes = new List<BaseNodeView>();

        public BaseNodeView EntryView;
        public List<BaseNodeView.NodeData> data;
        public NodeConnection entryConnection;
        [FormerlySerializedAs("RootNode")] public BaseNodeView RootView;
        
        [SerializeField] public BehaviorTree _tree;

        private void OnEnable()
        {
            if (data == null)
                data = new List<BaseNodeView.NodeData>();
        }

        public void OnSave()
        {
            if (RootView == null)
            {
                Debug.Log("The Tree is empty, there's nothing to build");
                return;
            }

            //todo USE A POOL
            _tree = new BehaviorTree();
            _tree.AddRoot(RootView.Task);

            if(RootView != null)
                ConstructTree(RootView);
            
            //BUG not detecting is parent view
            PrintTree(_tree.RootNode);
        }

        public void ConstructTree(BaseNodeView node)
        {
            if (node.IsParentView)
            {
                if (node.Task is IComposite compositeTask)
                {
                    if (node.children == null)
                    {
                        Debug.LogError("There is an empty composite, please remove it or add a children");
                    }
                    else
                    {
                        if (compositeTask.Children.Count < node.children.Count)
                        {
                            for (int i = 0; i < node.children.Count; i++)
                            {
                                compositeTask.AddChild(node.children[i].Task);
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