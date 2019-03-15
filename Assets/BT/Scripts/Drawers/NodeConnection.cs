using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class NodeConnection
    {
        private NodeSocket _startSocket;
        private NodeSocket _endSocket;
        private Color _connectionColor;

        public NodeConnection(NodeSocket startSocket, NodeSocket endSocket, Color connectionColor)
        {
            _startSocket = startSocket;
            _endSocket = endSocket;
            _connectionColor = connectionColor;
        }

        public void Draw()
        {
            Handles.color = _connectionColor;
            Handles.DrawLine(_startSocket.Position,_endSocket.Position);
        }
    }
}