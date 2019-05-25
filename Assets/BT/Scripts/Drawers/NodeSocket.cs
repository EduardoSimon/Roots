using System;
using System.Net.Sockets;
using UnityEditor;
using UnityEngine;

namespace BT
{
    [Serializable]
    public class NodeSocket : ScriptableObject
    {
        [Serializable]
        public enum NodeSocketType
        {
            In,
            Out
        }

        public static NodeSocket CurrentClickedSocket = null;
        public static Action<NodeSocket> OnSocketClicked;

        public Rect _socketRect;
        
        public Vector2 Position => new Vector2(_socketRect.x + _socketRect.width / 2, _socketRect.y);
        public NodeSocketType SocketType;
        public BaseNode Node;
        public string NodeGuid;
        public bool IsHooked;


        private void OnEnable()
        {
            hideFlags = HideFlags.DontUnloadUnusedAsset & HideFlags.DontSaveInEditor;
        }

        public void Init(Rect socketRect, NodeSocketType type, BaseNode node)
        {
            this._socketRect = socketRect;
            this.SocketType = type;
            this.Node = node;
        }

        public void Draw()
        {
#if UNITY_EDITOR
            _socketRect.x = Node.windowRect.xMin + BaseNode.kNodeWidht / 8;
            _socketRect.y = SocketType == NodeSocketType.In ?
                Node.windowRect.yMin - BaseNode.SocketHeight + 5 :
                Node.windowRect.yMax - 5;

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
                        //Debug.Log("Clicked socket");
                        GUI.changed = true;
                    }

                    break;
            }
        }
    }
}