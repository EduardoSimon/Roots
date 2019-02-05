using System.Collections.Generic;

namespace BT_Core
{
    public interface IComposite
    {
        List<ATask> Children { get;}
        void AddChild(Task task);
        void RemoveChildren(Task task);
        void ClearChildren();
    }
}