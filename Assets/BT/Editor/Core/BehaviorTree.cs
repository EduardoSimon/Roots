using System.Collections.Generic;
using System.Data;
using UnityEngine;

namespace BT
{
    public enum TaskStatus
    {
        Succeeded,
        Failed,
        Running,
        NonInitialized,
        Invalid,
        Aborted
    }
    
    [CreateAssetMenu(menuName = "BT/Behavior Tree")]
    public class BehaviorTree : ScriptableObject
    {
        #if UNITY_EDITOR
        public static List<BaseNodeView> NodeViews = new List<BaseNodeView>();
        #endif
        
        public ATask RootNode { get; private set; }

        public TaskStatus Tick()
        {
            return RootNode.Tick();
        }

        public void AddRoot(ATask action)
        {
            RootNode = action ? action : throw new NoNullAllowedException("Cant add a null root node.");
        }
    }
}