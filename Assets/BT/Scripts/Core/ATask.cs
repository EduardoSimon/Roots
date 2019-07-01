using System;
using BT.Runtime;
using UnityEngine;
using Object = UnityEngine.Object;
using BT.Runtime;

namespace BT
{
    [Serializable]
    public class ATask : ScriptableObject
    {
        public TaskStatus Status;
        protected BTManager _manager;
        protected Transform cachedTransform;

        protected virtual void OnEnable()
        {
        }

        /// <summary>
        /// This is called when the tree is initialized. Use it to gather your references
        /// </summary>
        /// <param name="behaviorTreeController"></param>
        public virtual void Initialize(BehaviorTreeController behaviorTreeController)
        {
            _manager = BTManager.Instance;
            cachedTransform = behaviorTreeController.transform;
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
            Status = TaskStatus.NonInitialized;
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

        public virtual void OnDrawGizmos()
        {
            
        }
    }
}