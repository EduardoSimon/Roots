using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT
{
    [System.Serializable]
    public class NodeSocket
    {
        public enum NodeSocketType
        {
            In,
            Out,
        }

        public static NodeSocket CurrentClickedSocket = null;

        public Vector2 Position => new Vector2(_socketRect.x + _socketRect.width/2,_socketRect.y);
        
        private Rect _socketRect;
        public static System.Action<NodeSocket> OnSocketClicked;

        public NodeSocketType SocketType { get; }


        private BaseNodeView _node;
        public BaseNodeView Node
        {
            get { return _node; }
        }
        public bool IsHooked { get; set; }


        public NodeSocket(Rect socketRect, NodeSocketType type, BaseNodeView node)
        {
            _socketRect = socketRect;
            SocketType = type;
            _node = node;
            IsHooked = false;
        }
        
        public void Draw()
        {
            _socketRect.x = Node.windowRect.xMin + Node.windowRect.width / 4;
            _socketRect.y = SocketType == NodeSocketType.In ? Node.windowRect.yMin - BaseNodeView.SOCKET_HEIGHT + 10 : Node.windowRect.yMax - 10;

            //TODO create custom style
            if (CurrentClickedSocket == null || CurrentClickedSocket != this)
            {
                if (GUI.Button(_socketRect, ""))
                {
                    OnSocketClicked?.Invoke(this);
                }
            }
            else if(CurrentClickedSocket == this)
            {
                if (GUI.Button(_socketRect, "", EditorStyles.radioButton))
                {
                    OnSocketClicked?.Invoke(this);
                }
            }

            if (CurrentClickedSocket != null)
            {
                Handles.DrawLine(CurrentClickedSocket.Position,Event.current.mousePosition);
                GUI.changed = true;
            }
            
        }
    }
}