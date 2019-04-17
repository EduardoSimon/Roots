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
        
        private BehaviorTree _tree;

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

            //BUG not detecting is parent view
            if (RootView.IsParentView)
            {
                IComposite parentRoot = _tree.RootNode as IComposite;
                                
                for (int i = 0; i < RootView.children.Count; i++)
                {
                    parentRoot.AddChild(RootView.children[i].Task);
                }
            }
                
                

        }
    }
}