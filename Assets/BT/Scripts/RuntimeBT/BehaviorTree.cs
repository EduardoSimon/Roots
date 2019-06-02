using System.Data;
using BT.Runtime;
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

    [System.Serializable]
    public class BehaviorTree
    {
        [SerializeField]private ATask rootNode;

        public ATask RootNode => rootNode;

        public TaskStatus Tick(BehaviorTreeController treeContext)
        {
            return RootNode.Tick(treeContext);
        }

        public void AddRoot(ATask task)
        {
            if (task != null)
                rootNode = task;
            else
                throw new NoNullAllowedException();
        }
        
        
    }
}