namespace BT.Scripts.Nodes
{
    public interface ISavableNode
    {
        ATask Task { get; set; }
        void SaveNodeData();
    }
}