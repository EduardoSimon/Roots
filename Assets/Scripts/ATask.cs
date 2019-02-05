namespace BT_Core
{
    public abstract class ATask
    {
        protected TaskStatus Status;
        
        protected abstract void OnInitialize();
        protected abstract TaskStatus Update();
        protected abstract void OnTerminate(TaskStatus status);
        
        public TaskStatus Tick()
        {
            if (Status == TaskStatus.NonInitialized)
                OnInitialize();

            Status = Update();
            
            if(Status != TaskStatus.Running)
                OnTerminate(Status);

            return Status;
        }
    }
}