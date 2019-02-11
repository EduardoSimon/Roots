using System.Collections.Generic;

namespace BT_Core
{
    public interface IComposite
    {
        List<ATask> Children { get;}
        void AddChild(Action action);
        void RemoveChildren(Action action);
        void ClearChildren();
    }
}