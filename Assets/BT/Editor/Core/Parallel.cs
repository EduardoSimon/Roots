using System.Collections.Generic;
using UnityEngine;

namespace BT
{
    [SearchMenu("Parallel")]
    public class Parallel : ATask, IComposite
    {
        public enum Policy
        {
            RequireOne,
            RequireAll,
        }

        protected Policy _successPolicy;
        protected Policy _failurePolicy;
        
        public List<ATask> Children { get; private set; }


        public Parallel(Policy successPolicy, Policy failurePolicy)
        {
            _successPolicy = successPolicy;
            _failurePolicy = failurePolicy;
            Children = new List<ATask>();
            Status = TaskStatus.NonInitialized;

        }

        protected override void OnInitialize()
        {
            Status = TaskStatus.Running;
        }

        protected override TaskStatus Update()
        {
            int successCounter = 0, failureCounter = 0;

            for (int i = 0; i < Children.Count; i++)
            {
                TaskStatus childrenStatus = Children[i].Tick();

                if (childrenStatus == TaskStatus.Succeeded)
                {
                    successCounter++;
                    
                    //The children succeeded and the policy only required one to success.
                    if (_successPolicy == Policy.RequireOne) return TaskStatus.Succeeded;   
                }
                else if (childrenStatus == TaskStatus.Failed)
                {
                    failureCounter++;

                    if (_failurePolicy == Policy.RequireOne) return TaskStatus.Failed;
                }
            }
            
            //if the policy was require all we have to check if the counters equal the size of the list of tasks.
            if (_failurePolicy == Policy.RequireAll && failureCounter == Children.Count)
                return TaskStatus.Failed;

            if (_successPolicy == Policy.RequireAll && successCounter == Children.Count)
                return TaskStatus.Succeeded;

            return TaskStatus.Running;
        }

        protected override void OnTerminate(TaskStatus status)
        {
            for (int i = 0; i < Children.Count; i++)
            {
                TaskStatus childrenStatus = Children[i].Tick();
                
                if(childrenStatus == TaskStatus.Running)
                    Children[i].Abort();
            }
        }

        #region HelperMethods

            public void AddChild(ATask task)
            {
                if (!Children.Contains(task))
                    Children.Add(task);
                else
                    Debug.LogError("Trying to the same task twice in a Parallel task.");
    
            }
    
            public void RemoveChildren(ATask task)
            {
                if (!Children.Contains(task))
                    Children.Remove(task);
                else
                    Debug.LogError(
                        "The Parallel task does not contain the specified child task, thus it could not be removed");
            }
    
            public void ClearChildren()
            {
                Children.Clear();
            }

        #endregion
  
    }
}