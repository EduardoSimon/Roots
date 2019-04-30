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

        [HideInInspector] public BaseNodeView EntryView;
        [HideInInspector] public BaseNodeView RootView;
        public List<BaseNodeView.NodeData> data;
        public NodeConnection entryConnection;
        public BaseNodeView RootNode;
        private BehaviorTree _tree;

        private void OnEnable()
        {
            if (data == null)
                data = new List<BaseNodeView.NodeData>();
        }

        public void OnSave()
        {
            if (RootNode == null)
            {
                Debug.Log("The Tree is empty, there's nothing to build");
                return;
            }

            //todo USE A POOL
            _tree = new BehaviorTree();
            _tree.AddRoot(RootNode.Task);

            ConstructTree(RootNode);
            //BUG not detecting is parent view

            PrintTree(_tree.RootNode);
        }

        public void ConstructTree(BaseNodeView node)
        {
            if (node.IsParentView)
            {
                IComposite compositeTask = node.Task as IComposite;

                if (compositeTask != null)
                {
                    for (int i = 0; i < node.children.Count; i++)
                    {
                        compositeTask.AddChild(node.children[i].Task);
                        ConstructTree(node.children[i]);
                    }
                }
            }

        }

        public void PrintTree(ATask task)
        {
            IComposite compositeNode = task as IComposite;

            if (compositeNode != null)
            {
                for (int i = 0; i < compositeNode.Children.Count; i++)
                {
                    ATask taskNode = (ATask) compositeNode;
                    //Debug.Log(taskNode.name);
                    PrintTree(compositeNode.Children[i]);
                }
            }

            Debug.Log(task.name);
        }
    }
}