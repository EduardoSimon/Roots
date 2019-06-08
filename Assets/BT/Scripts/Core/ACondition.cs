namespace BT
{
    public class ACondition : ATask
    {
        public enum ConditionCheckMode
        {
            Instant,
            Monitoring
        }

        protected readonly ConditionCheckMode _checkMode = ConditionCheckMode.Instant;

        protected readonly bool negateCondition = false;

        protected override void OnFirstTick()
        {
            base.OnFirstTick();
            Status = TaskStatus.Running;
        }

        protected override TaskStatus Update()
        {
            if (_checkMode == ConditionCheckMode.Instant)
            {
                if (negateCondition)
                    return isConditionSatisfied() ? TaskStatus.Failed : TaskStatus.Succeeded;

                return isConditionSatisfied() ? TaskStatus.Succeeded : TaskStatus.Failed;
            }

            if (_checkMode == ConditionCheckMode.Monitoring)
            {
                if (negateCondition)
                {
                    //do nothing until we fail
                    while (!isConditionSatisfied()) return TaskStatus.Running;

                    return TaskStatus.Failed;
                }

                //do nothing until we fail
                while (isConditionSatisfied()) return TaskStatus.Running;

                return TaskStatus.Failed;
            }

            return TaskStatus.Invalid;
        }

        protected override void OnTerminate(TaskStatus status)
        {
        }

        protected virtual bool isConditionSatisfied()
        {
            return false;
        }
    }
}