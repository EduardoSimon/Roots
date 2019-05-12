using System;
using UnityEngine;
using Object = UnityEngine.Object;

namespace BT
{
    [Serializable]
    public class ATask : ScriptableObject
    {
        public TaskStatus Status;

        private void OnEnable()
        {
            hideFlags = HideFlags.HideInHierarchy;
        }

        protected virtual void OnInitialize() { }

        protected virtual TaskStatus Update()
        {
            return TaskStatus.Invalid;
        }

        protected virtual void OnTerminate(TaskStatus status) { }

        public TaskStatus Tick()
        {
            if (Status == TaskStatus.Aborted)
            {
                OnTerminate(Status);
                return Status;
            }

            if (Status == TaskStatus.NonInitialized)
                OnInitialize();

            Status = Update();

            if (Status != TaskStatus.Running)
                OnTerminate(Status);

            return Status;
        }

        public void Abort()
        {
            Status = TaskStatus.Aborted;
        } 
        
        public virtual void ConstructTask(TaskConstructionData data) {}
    }

    public class TaskConstructionData
    {
        public TaskConstructionData()
        {
        }
    }
}