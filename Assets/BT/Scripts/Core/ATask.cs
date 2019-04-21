using System;
using UnityEngine;

namespace BT
{
    [Serializable]
    public class ATask
    {
        public TaskStatus Status;

        protected virtual void OnInitialize() {}

        protected virtual TaskStatus Update()
        {
            return TaskStatus.Invalid;
        }
        
        protected virtual void OnTerminate(TaskStatus status) {}

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
    }
}