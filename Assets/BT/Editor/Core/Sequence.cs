using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace BT
{
    [CustomNodeDrawer(typeof(SequenceView))]
    [SearchMenu("Composites")]
    public class Sequence : AAction, IComposite
    {
        public List<ATask> Children { get; private set; }

        public Sequence(ATask[] children = null) : base()
        {
            Children = children != null ? children.ToList() : new List<ATask>();

            Status = TaskStatus.NonInitialized;
        }

        protected override TaskStatus Update()
        {
            //if the sequence is empty we return a failed result
            if (Children.Count == 0)
                return TaskStatus.Failed;
            
            for (int i = 0; i < Children.Count; i++)
            {
                TaskStatus status = Children[i].Tick();

                if (status != TaskStatus.Succeeded)
                    return status;

                //if we are at the end and the sequence did not fail its considered a success
                if (i == Children.Count - 1)
                    return TaskStatus.Succeeded;
            }

            //if it exits the previous loop something went wrong.
            return TaskStatus.Invalid;
        }

        public override string ToString()
        {
            return "Updating the sequence with" +  Children.Count + " children.";
        }

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
    }
}