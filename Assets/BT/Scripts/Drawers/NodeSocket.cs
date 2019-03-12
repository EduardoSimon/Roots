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
        
        private readonly NodeSocketType _socketType;
        public BaseNodeView Node { get; }


        public NodeSocket(Rect socketRect, NodeSocketType type, BaseNodeView node,
            System.Action<NodeSocket> onSocketClicked)
        {
            _socketRect = socketRect;
            _socketType = type;
            Node = node;
            _onSocketClicked = onSocketClicked;

        }
        
        public void Draw()
        {
            _socketRect.x = Node.windowRect.xMin + Node.windowRect.width / 4;
            _socketRect.y = _socketType == NodeSocketType.In ? Node.windowRect.yMin - BaseNodeView.SOCKET_HEIGHT + 10 : Node.windowRect.yMax - 10;

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
            
        }
    }
}