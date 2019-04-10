using System;
using UnityEditor;
using UnityEngine;

namespace BT
{
    [Serializable]
    public class NodeSocket
    {
        public enum NodeSocketType
        {
            In,
            Out
        }

        public static NodeSocket CurrentClickedSocket = null;
        public static Action<NodeSocket> OnSocketClicked;


        private Rect _socketRect;


        public NodeSocket(Rect socketRect, NodeSocketType type, BaseNodeView node)
        {
            _socketRect = socketRect;
            SocketType = type;
            Node = node;
            IsHooked = false;
        }

        public Vector2 Position => new Vector2(_socketRect.x + _socketRect.width / 2, _socketRect.y);

        public NodeSocketType SocketType { get; }

        public BaseNodeView Node { get; }

        public bool IsHooked { get; set; }

        public void Draw()
        {
            #if UNITY_EDITOR
            _socketRect.x = Node.windowRect.xMin + Node.windowRect.width / 4;
            _socketRect.y = SocketType == NodeSocketType.In
                ? Node.windowRect.yMin - BaseNodeView.SocketHeight + 10
                : Node.windowRect.yMax - 10;

            //TODO create custom style
            if (CurrentClickedSocket == null || CurrentClickedSocket != this)
            {
                if (GUI.Button(_socketRect, "")) OnSocketClicked?.Invoke(this);
            }
            else if (CurrentClickedSocket == this)
            {
                if (GUI.Button(_socketRect, "", EditorStyles.miniButtonMid)) OnSocketClicked?.Invoke(this);
            }

            if (CurrentClickedSocket != null)
            {
                Handles.DrawLine(CurrentClickedSocket.Position, Event.current.mousePosition);
                GUI.changed = true;
            }
            #endif

        }

        public void ProcessEvent(Event e)
        {
            switch (e.type)
            {
                case EventType.MouseDown:
                    if (!_socketRect.Contains(e.mousePosition))
                    {
                        //TODO not working
                        //CurrentClickedSocket = null;
                        Debug.Log("Clicked socket");
                        GUI.changed = true;
                    }

                    break;
            }
        }
    }
}