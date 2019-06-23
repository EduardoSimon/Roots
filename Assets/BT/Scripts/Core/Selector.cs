using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BT
{
    [SearchTaskPath("Composites/Selector")]
    [TaskTooltip("A return Succeeded as soon as one children succeeds. It will keep going unless one if its children succeeds")]
    public class Selector : ATask, IComposite
    {
        public List<ATask> Children { get; set; }

        /// <summary>
        /// This function is called when the object becomes enabled and active.
        /// </summary>
        void OnEnable()
        {
            if (Children == null)
                Children = new List<ATask>();

            Status = TaskStatus.NonInitialized;
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

        protected override void OnFirstTick() { }

        protected override TaskStatus Update()
        {
            if (Children.Count == 0)
                return TaskStatus.Failed;

            for (var i = 0; i < Children.Count; i++)
            {
                var status = Children[i].Tick();

                if (status != TaskStatus.Failed)
                    return status;

                //if we are at the end and the sequence did not fail its considered a success
                if (i == Children.Count - 1)
                    return TaskStatus.Failed;
            }

            //if it exits the previous loop something went wrong.
            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status) { }

        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("Selector with ").Append(Children.Count).Append(" children.");
            return sb.ToString();
        }
    }
}