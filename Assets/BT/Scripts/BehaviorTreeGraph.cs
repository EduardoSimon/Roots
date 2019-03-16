using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEngine;

namespace BT.Editor
{
    [CreateAssetMenu(menuName = "BT/Behavior Tree Graph")]
    public class BehaviorTreeGraph : ScriptableObject
    {
        public Dictionary<BaseNodeView,BaseNodeView.NodeData> SavedNodes = new Dictionary<BaseNodeView, BaseNodeView.NodeData>();
        public Dictionary<NodeConnection,NodeConnection.ConnectionData> SavedConnections = new Dictionary<NodeConnection, NodeConnection.ConnectionData>();
    }
}