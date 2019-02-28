using System.Collections.Generic;
using System.Linq;

namespace BT
{
    [SearchMenu("Composites/Selector")]
    public class Selector : ATask, IComposite
    {
        public List<ATask> Children { get; private set; }

        public Selector(ATask[] children = null)
        {
            Children = children != null ? children.ToList() : new List<ATask>();

            Status = TaskStatus.NonInitialized;
        }

        protected override void OnInitialize()
        {
            return;
        }

        protected override TaskStatus Update()
        {
            if (Children.Count == 0)
                return TaskStatus.Failed;
            
            for (int i = 0; i < Children.Count; i++)
            {
                TaskStatus status = Children[i].Tick();

                if (status != TaskStatus.Failed)
                    return status;

                //if we are at the end and the sequence did not fail its considered a success
                if (i == Children.Count - 1)
                    return TaskStatus.Failed;
            }

            //if it exits the previous loop something went wrong.
            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status)
        {
            return;
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