using TMPro;

namespace BT_Core
{
    public abstract class ACondition : ATask
    {   
        public enum ConditionCheckMode { Instant, Monitoring}

        protected readonly ConditionCheckMode _checkMode = ConditionCheckMode.Instant;

        protected override void OnInitialize()
        {
            Status = TaskStatus.Running;
        }

        protected override TaskStatus Update()
        {
            if (_checkMode == ConditionCheckMode.Instant)
                return isConditionSatisfied() ? TaskStatus.Succeeded : TaskStatus.Failed;

            if (_checkMode == ConditionCheckMode.Monitoring)
            {
                //do nothing until we fail
                while(isConditionSatisfied()){ }

                return TaskStatus.Failed;
            }

            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status)
        {
            return;
        }
        protected abstract bool isConditionSatisfied();


    }
}