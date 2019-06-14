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
        protected BTManager _manager;
        public Transform transform;
        
        /// <summary>
        /// This is called when the tree is initialized. Use it to gather your references
        /// </summary>
        public virtual void OnTreeInitialize()
        {
            _manager = BTManager.Instance;
        }
        
        /// <summary>
        /// This method is called the first time is tick.
        /// </summary>
        protected virtual void OnFirstTick() {}

        /// <summary>
        /// This method is called every tick of the tree when it hasnt succeded or failed.
        /// </summary>
        /// <returns></returns>
        protected virtual TaskStatus Update()
        {
            return TaskStatus.Invalid;
        }

        protected virtual void OnTerminate(TaskStatus status)
        {
            status = TaskStatus.NonInitialized;
        }

        public TaskStatus Tick()
        {
            if (Status == TaskStatus.Aborted)
            {
                OnTerminate(Status);
                return Status;
            }

            if (Status == TaskStatus.NonInitialized)
            {
                OnFirstTick();
            }

            if (_manager != null && _manager.isDebugMode)
                _manager.CurrentTickingController.currentTickingTask = this;

            Status = Update();

            if (Status != TaskStatus.Running)
                OnTerminate(Status);

            return Status;
        }

        public void Abort()
        {
            Status = TaskStatus.Aborted;
        }

        public void Reset()
        {
            Status = TaskStatus.NonInitialized;
        }
    }
}