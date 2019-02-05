using System.Collections.Generic;
using System.Linq;

namespace BT_Core
{
    public class Selector : Task, IComposite
    {
        public List<ATask> Children { get; private set; }

        public Selector(ATask[] children = null)
        {
            Children = children != null ? children.ToList() : new List<ATask>();

            Status = TaskStatus.NonInitialized;
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

        public void AddChild(Task task)
        {
            Children.Add(task);
        }

        public void RemoveChildren(Task task)
        {
            Children.Remove(task);
        }

        public void ClearChildren()
        {
            Children.Clear();
        }
    }
}