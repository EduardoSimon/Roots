using System;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    [Serializable]
    public class NodeConnection
    {
        public NodeConnection(NodeSocket startSocket, NodeSocket endSocket, Color connectionColor, bool isEntryConnection)
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
            #if UNITY_EDITOR
            Handles.color = ConnectionColor;
            Handles.DrawLine(StartSocket.Position, EndSocket.Position);
            #endif
        }
    }
}