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

    [System.Serializable]
    public class BehaviorTree
    {
        [SerializeField]private ATask rootNode;

        public ATask RootNode => rootNode;

        public TaskStatus Tick()
        {
            return RootNode.Tick();
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