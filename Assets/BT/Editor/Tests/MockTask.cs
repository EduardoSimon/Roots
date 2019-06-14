namespace BT
{
    public class MockTask : ATask
    {
        public MockTask(TaskStatus testStatus)
        {
            Status = testStatus;
        }

        protected override void OnFirstTick()
        {
        }

        protected override TaskStatus Update()
        {
            //hacer el update del nodo
            return Status;
        }

        protected override void OnTerminate(TaskStatus taskStatus)
        {
        }
    }
}