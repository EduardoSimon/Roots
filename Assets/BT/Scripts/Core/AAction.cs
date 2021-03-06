namespace BT
{
    [CustomNodeDrawer(typeof(ActionView))]
    public abstract class AAction : ATask
    {
        public BlackBoard board;

        public AAction()
        {
            Status = TaskStatus.NonInitialized;
        }

        protected override void OnInitialize()
        {
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
            //close the data needed
        }
    }
}