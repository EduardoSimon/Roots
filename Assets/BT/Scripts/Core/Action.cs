namespace BT
{
    [CustomNodeDrawer(typeof(ActionView))]
    public class Action : ATask
    {
        public BlackBoard board;

        public Action()
        {
            Status = TaskStatus.NonInitialized;
        }

        protected override void OnFirstTick()
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