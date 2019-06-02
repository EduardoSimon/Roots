using System;

namespace BT.Decorators
{
    public class Repeat : ADecorator
    {
        private int _counter;
        private readonly int _repetitionsLimit;

        public Repeat(ATask child, int repetitionsLimit) : base(child)
        {
            _counter = 0;
            _repetitionsLimit = repetitionsLimit;
            Status = TaskStatus.NonInitialized;
        }

        protected override void OnInitialize()
        {
            Status = TaskStatus.Running;
        }

        protected override TaskStatus Update()
        {
            var childStatus = _child.Tick(controller);

            if (childStatus == TaskStatus.Running) return TaskStatus.Running;

            if (childStatus == TaskStatus.Failed) return TaskStatus.Failed;

            if (++_counter == _repetitionsLimit) return TaskStatus.Succeeded;

            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status)
        {
            //throw new NotImplementedException();
        }
    }
}