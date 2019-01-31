namespace BT_Core
{
    public class Behaviour
    {
        private BehaviourStatus _status;

        public Behaviour()
        {
        }

        public virtual void OnInitialize()
        {
            _status = BehaviourStatus.Failed;
        }

        public virtual BehaviourStatus Update()
        {
            return _status;
        }

        public virtual void OnTerminate(BehaviourStatus behaviourStatus)
        {
            
        }
    }
}