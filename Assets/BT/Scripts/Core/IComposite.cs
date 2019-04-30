using System.Collections.Generic;

namespace BT
{
    public interface IComposite
    {
        List<ATask> Children { get; set; }

        void AddChild(ATask task);
        void RemoveChildren(ATask action);
        void ClearChildren();
    }
}