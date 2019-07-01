using System;
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
        [SerializeField] private ATask rootTask;

        public ATask RootTask => rootTask;

        public TaskStatus Tick()
        {
            return RootTask.Tick();
        }

        public void AddRoot(ATask task)
        {
            if (task != null)
                rootTask = task;
            else
                throw new NoNullAllowedException();
        }
    }
}