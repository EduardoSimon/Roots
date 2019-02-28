namespace BT
{
    public abstract class ADecorator : ATask
    {
        protected ATask _child;

        protected ADecorator(ATask child)
        {
            _child = child;
        }
    }
}