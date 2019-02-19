namespace BT_Core
{
    public class MockTask : ATask
    {
        public MockTask(TaskStatus testStatus)
        {
            Status = testStatus;
        }

        protected override void OnInitialize()
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