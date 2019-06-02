using System;
using BT.Runtime;
using UnityEngine;
using Object = UnityEngine.Object;

namespace BT
{
    [Serializable]
    public class ATask : ScriptableObject
    {
        public TaskStatus Status;
        public BehaviorTreeController controller;

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

        public TaskStatus Tick(BehaviorTreeController treeContext)
        {
            if (Status == TaskStatus.Aborted)
            {
                OnTerminate(Status);
                return Status;
            }

            if (Status == TaskStatus.NonInitialized)
            {
                controller = treeContext;
                OnInitialize();
            }

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