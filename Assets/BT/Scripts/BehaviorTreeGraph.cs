using System.Collections.Generic;
using UnityEngine;

namespace BT.Editor
{
    [CreateAssetMenu(menuName = "BT/Behavior Tree Graph")]
    public class BehaviorTreeGraph : ScriptableObject
    {
        public Dictionary<BaseNodeView,BaseNodeView.NodeData> savedData = new Dictionary<BaseNodeView, BaseNodeView.NodeData>();

    }
}