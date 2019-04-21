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

    public class BehaviorTree
    {
        public ATask RootNode { get; private set; }

        public TaskStatus Tick()
        {
            return RootNode.Tick();
        }

        public void AddRoot(ATask task)
        {
            if (task != null)
                RootNode = task;
        }
        
        
    }
}