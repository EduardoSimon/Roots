
namespace BT_Core
{
    public class Task : ATask
    {
        public Task()
        {
            Status = TaskStatus.NonInitialized;
        }

        protected override void OnInitialize()
        {
            Status = TaskStatus.Running;
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