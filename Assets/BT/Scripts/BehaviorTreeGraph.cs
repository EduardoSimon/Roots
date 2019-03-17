using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT.Editor
{
    [CreateAssetMenu(menuName = "BT/Behavior Tree Graph")]
    public class BehaviorTreeGraph : ScriptableObject
    {
        public List<BaseNodeView> SavedNodes = new List<BaseNodeView>();
        public List<NodeConnection> SavedConnections = new List<NodeConnection>();

    }
}