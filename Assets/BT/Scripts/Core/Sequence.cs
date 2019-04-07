using System;
using System.Collections.Generic;
using System.Linq;

namespace BT
{
    [CustomNodeDrawer(typeof(SequenceView))]
    [SearchMenu("Composites/Sequence")]
    [TaskTooltip("BALABABAB sequence")]
    public class Sequence : ATask, IComposite
    {
        public Sequence(ATask[] children = null)
        {
            Children = children != null ? children.ToList() : new List<ATask>();

            Status = TaskStatus.NonInitialized;
        }

        public List<ATask> Children { get; }

        public void AddChild(ATask action)
        {
            Children.Add(action);
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
            throw new NotImplementedException();
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
                    return status;

                //if we are at the end and the sequence did not fail its considered a success
                if (i == Children.Count - 1)
                    return TaskStatus.Succeeded;
            }

            //if it exits the previous loop something went wrong.
            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status)
        {
            throw new NotImplementedException();
        }

        public override string ToString()
        {
            return "Updating the sequence with" + Children.Count + " children.";
        }
    }
}