using BT.Scripts.Nodes;

namespace BT
{
    [CustomNodeDrawer(typeof(ActionNode))]
    public class Action : ATask
    {
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