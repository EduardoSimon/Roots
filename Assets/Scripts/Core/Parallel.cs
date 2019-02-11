using System.Collections.Generic;

namespace BT_Core
{
    public class Parallel : ATask, IComposite
    {
        protected override void OnInitialize()
        {
            return;
        }

        protected override TaskStatus Update()
        {
            throw new System.NotImplementedException();
        }

        protected override void OnTerminate(TaskStatus status)
        {
            throw new System.NotImplementedException();
        }

        public List<ATask> Children { get; private set; }
        public void AddChild(Action action)
        {
            throw new System.NotImplementedException();
        }

        public void RemoveChildren(Action action)
        {
            throw new System.NotImplementedException();
        }

        public void ClearChildren()
        {
            throw new System.NotImplementedException();
        }
    }
}