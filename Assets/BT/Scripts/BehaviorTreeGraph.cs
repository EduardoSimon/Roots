using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEngine;

namespace BT.Editor
{
    [CreateAssetMenu(menuName = "BT/Behavior Tree Graph")]
    public class BehaviorTreeGraph : ScriptableObject
    {
        public string Name;
        public EntryNodeView EntryNodeView;
        public List<NodeConnection> SavedConnections = new List<NodeConnection>();
        public List<BaseNodeView> SavedNodes = new List<BaseNodeView>();

        private ATask[] tasks;

        public void OnSave()
        {
            
        }
    }
}