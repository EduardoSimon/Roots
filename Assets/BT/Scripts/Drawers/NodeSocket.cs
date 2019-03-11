using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT
{
    public class NodeSocket
    {
        public enum NodeSocketType
        {
            In,
            Out,
        }

        public static NodeSocket ClickedSocket = null;

        public Vector2 Position => new Vector2(_socketRect.x,_socketRect.y);
        
        private Rect _socketRect;
        private System.Action<NodeSocket> _onSocketClicked;
        public List<NodeConnection> _connections = new List<NodeConnection>();
        
        private readonly NodeSocketType _socketType;
        private readonly BaseNodeView _node;
        

        public NodeSocket(Rect socketRect, NodeSocketType type, BaseNodeView node,
            System.Action<NodeSocket> onSocketClicked)
        {
            _socketRect = socketRect;
            _socketType = type;
            _node = node;
            _onSocketClicked = onSocketClicked;

        }
        
        public void Draw()
        {
            _socketRect.x = _node.windowRect.xMin + _node.windowRect.width / 4;
            _socketRect.y = _socketType == NodeSocketType.In ? _node.windowRect.yMin - BaseNodeView.SOCKET_HEIGHT + 10 : _node.windowRect.yMax - 10;

            //TODO create custom style
            if (ClickedSocket == null || ClickedSocket != this)
            {
                if (GUI.Button(_socketRect, ""))
                {
                    _onSocketClicked?.Invoke(this);
                }
            }
            else if(ClickedSocket == this)
            {
                if (GUI.Button(_socketRect, "", EditorStyles.radioButton))
                {
                    _onSocketClicked?.Invoke(this);
                }
            }

            if (ClickedSocket != null)
            {
                Handles.DrawLine(ClickedSocket.Position,Event.current.mousePosition);
                GUI.changed = true;
            }
            
            foreach (var connection in _connections)
                connection.Draw();
        }
    }
}