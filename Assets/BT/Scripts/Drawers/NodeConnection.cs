using UnityEditor;
using UnityEditor.Experimental.UIElements.GraphView;
using UnityEditor.MemoryProfiler;
using UnityEngine;
using Debug = System.Diagnostics.Debug;

namespace BT.Scripts.Drawers
{
    [System.Serializable]
    public class NodeConnection
    {
        public NodeSocket StartSocket { get; }
        public NodeSocket EndSocket { get; }
        public Color ConnectionColor { get; }

        public NodeConnection(NodeSocket startSocket, NodeSocket endSocket, Color connectionColor)
        {
            StartSocket = startSocket;
            EndSocket = endSocket;
            ConnectionColor = connectionColor;
        }

        public void Draw()
        {
            Handles.color = ConnectionColor;
            Handles.DrawLine(StartSocket.Position,EndSocket.Position);
        }
       
    }
}