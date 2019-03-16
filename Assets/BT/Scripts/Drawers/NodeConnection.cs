using UnityEditor;
using UnityEditor.Experimental.UIElements.GraphView;
using UnityEngine;
using Debug = System.Diagnostics.Debug;

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

        public ConnectionData Save()
        {
            return new ConnectionData()
            {
                StartSocket = _startSocket,
                EndSocket =  _endSocket,
                ConnectionColor =  _connectionColor
            };
        }
        
        public class ConnectionData
        {
            public NodeSocket StartSocket;
            public NodeSocket EndSocket;
            public Color ConnectionColor;
            
            public override bool Equals(object obj)
            {
                ConnectionData socket = (ConnectionData) obj;

                Debug.Assert(socket != null, nameof(socket) + " != null");
                return socket.StartSocket == StartSocket && socket.EndSocket == EndSocket;
            }

            public override int GetHashCode()
            {
                return base.GetHashCode();
            }
        }
    }
}