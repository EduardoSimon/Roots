using System;

namespace BT.Decorators
{
    [TaskTooltip("Ticks a specified number of types, hence repeating whats below.")]
    [SearchTaskPath("Decorator/Repeat")]
    public class Repeat : Decorator
    {
        public int _counter;
        public int repetitionsLimit;

        protected override void OnFirstTick()
        {
            Status = TaskStatus.Running;
        }

        protected override TaskStatus Update()
        {
            var childStatus = child.Tick();

            if (childStatus == TaskStatus.Running) return TaskStatus.Running;

            if (childStatus == TaskStatus.Failed) return TaskStatus.Failed;

            if (++_counter == repetitionsLimit) return TaskStatus.Succeeded;

            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status)
        {
            if(_counter == repetitionsLimit)
                this.Status = TaskStatus.Succeeded;
        }
    }
}