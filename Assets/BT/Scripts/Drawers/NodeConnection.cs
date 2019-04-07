using System;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    [Serializable]
    public class NodeConnection
    {
        public NodeConnection(NodeSocket startSocket, NodeSocket endSocket, Color connectionColor)
        {
            StartSocket = startSocket;
            EndSocket = endSocket;
            ConnectionColor = connectionColor;
        }

        public NodeSocket StartSocket { get; }
        public NodeSocket EndSocket { get; }
        public Color ConnectionColor { get; }

        public void Draw()
        {
            Handles.color = ConnectionColor;
            Handles.DrawLine(StartSocket.Position, EndSocket.Position);
        }
    }
}