using UnityEditor;

namespace BT.Editor.ContextualCommands
{
    public interface IContextualCommand
    {
        void PerformCommand(BtEditor context, BaseNode clickedNode);
    }
}