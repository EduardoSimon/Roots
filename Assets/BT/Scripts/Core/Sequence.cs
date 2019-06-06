using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace BT
{
    [CustomNodeDrawer(typeof(SequenceNode))]
    [SearchTaskPath("Composites/Sequence")]
    [TaskTooltip("BALABABAB sequence")]
    public class Sequence : ATask, IComposite
    {
        [SerializeField]private List<ATask> _children;
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

        protected override void OnInitialize()
        {
            //todo implement
        }

        protected override TaskStatus Update()
        {
            //if the sequence is empty we return a failed result
            if (Children.Count == 0)
                return TaskStatus.Failed;

            for (var i = 0; i < Children.Count; i++)
            {
                var status = Children[i].Tick(controller);

                if (status != TaskStatus.Succeeded)
                {
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
                foreach (var task in Children)
                    task.Status = status;
            }


            //throw new NotImplementedException();
        }

        public override string ToString()
        {
            return "Sequence task with " + Children.Count + " children.";
        }
    }
}