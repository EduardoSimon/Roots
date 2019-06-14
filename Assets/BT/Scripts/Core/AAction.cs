namespace BT
{
    public class AAction : ATask
    {
        public BlackBoard board;

        protected override void OnFirstTick()
        {
            base.OnFirstTick();
            Status = TaskStatus.Running;
            //initialize the data needed
        }

        protected override TaskStatus Update()
        {
            //hacer el update del nodo accion
            return Status;
        }

        protected override void OnTerminate(TaskStatus taskStatus)
        {
            base.OnTerminate(taskStatus);
            //close the data needed
        }
    }
}