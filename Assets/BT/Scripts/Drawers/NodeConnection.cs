using System;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    [Serializable]
    public class NodeConnection : ScriptableObject
    {
        public void Init(NodeSocket startSocket, NodeSocket endSocket, Color connectionColor, bool isEntryConnection)
        {
            StartSocket = startSocket;
            EndSocket = endSocket;
            ConnectionColor = connectionColor;
            IsEntryConnection = isEntryConnection;
        }

        public bool IsEntryConnection;
        public NodeSocket StartSocket;
        public NodeSocket EndSocket;
        public Color ConnectionColor;

        public void Draw()
        {
            
            Handles.color = ConnectionColor;
            Handles.DrawLine(StartSocket.Position, EndSocket.Position);

        }
    }
}