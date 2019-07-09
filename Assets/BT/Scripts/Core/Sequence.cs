using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace BT
{
    [CustomNodeDrawer(typeof(SequenceNode))]
    [SearchTaskPath("Composites/Sequence")]
    [TaskTooltip("A sequence returns Failed when any of its children " +
                 "fails and Succeeded when every of its children succeed.")]
    public class Sequence : ATask, IComposite
    {
        [SerializeField]private List<ATask> _children;

        private int failedIndex;
        
        /// <summary>
        /// This function is called when the object becomes enabled and active.
        /// </summary>
        void OnEnable()
        {
            if (Children == null)
                _children = new List<ATask>();

            Status = TaskStatus.NonInitialized;
        }

        public List<ATask> Children
        {
            get => _children;
            set => _children = value;
        }

        public void AddChild(ATask task)
        {
            Children.Add(task);
        }

        public void AddChildren(List<ATask> children)
        {
            Children.AddRange(children);
        }

        public void RemoveChildren(ATask action)
        {
            Children.Remove(action);
        }

        public void ClearChildren()
        {
            Children.Clear();
        }

        protected override TaskStatus Update()
        {
            //if the sequence is empty we return a failed result
            if (Children.Count == 0)
                return TaskStatus.Failed;

            for (var i = 0; i < Children.Count; i++)
            {
                var status = Children[i].Tick();

                if (status != TaskStatus.Succeeded)
                {
                    failedIndex = i;
                    return status;
                }

                //if we are at the end and the sequence did not fail its considered a success
                if (i == Children.Count - 1)
                    return TaskStatus.Succeeded;
            }

            //if it exits the previous loop something went wrong.
            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status)
        {
            if (Children != null)
            {
                for (var index = 0; index < Children.Count; index++)
                {
                    var task = Children[index];

                    if (task.NeedsInterruption && task.Status == TaskStatus.Running)
                    {
                        task.Tick();
                    }
                    else
                    {
                        task.Status = status;
                    }
                }
            }
            
            //throw new NotImplementedException();
        }

        public override string ToString()
        {
            return "Sequence task with " + Children.Count + " children.";
        }
    }
}