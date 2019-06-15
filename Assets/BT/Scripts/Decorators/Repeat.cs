using System;
using BT.Scripts.Nodes;

namespace BT.Decorators
{
    [TaskTooltip("Ticks a specified number of types, hence repeating whats below.")]
    [SearchTaskPath("Decorator/Repeat")]
    [CustomNodeDrawer(typeof(RepeatDecoratorNode))]
    public class Repeat : Decorator
    {
        private int _counter;
        public int repetitionsLimit;

        protected override void OnFirstTick()
        {
            Status = TaskStatus.Running;
        }

        protected override TaskStatus Update()
        {
            var childStatus = child.Tick();

            _counter++;

            if (_counter < repetitionsLimit) return TaskStatus.Running;
            
            if (_counter >= repetitionsLimit) return childStatus;
            

            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status)
        {
        }
    }
}