using UnityEditor;
using UnityEngine;

namespace BT
{
    public abstract partial class BaseNodeView
    {
        public class NodeSocket
        {
            public enum NodeSocketType
            {
                In,
                Out,
            }

            public bool isSocketHooked;
            public bool isSocketClicked;
            private Rect _socketRect;
            private readonly NodeSocketType _socketType;
            private readonly BaseNodeView _node;
            private readonly System.Action<NodeSocket> _onSocketClicked;

            public NodeSocket(Rect socketRect, NodeSocketType type, BaseNodeView node,
                System.Action<NodeSocket> onSocketClicked)
            {
                _socketRect = socketRect;
                _socketType = type;
                _node = node;
                _onSocketClicked = onSocketClicked;
                isSocketHooked = false;
                isSocketClicked = false;
            }
            
            public void Draw()
            {
                _socketRect.x = _node.windowRect.xMin + _node.windowRect.width / 4;

                _socketRect.y = _socketType == NodeSocketType.In ? _node.windowRect.yMin - SOCKET_HEIGHT + 10 : _node.windowRect.yMax - 10;

                //TODO create custom style
                if (!isSocketClicked)
                {
                    if (GUI.Button(_socketRect, ""))
                        _onSocketClicked?.Invoke(this);
                }
                else
                {
                    Handles.DrawLine(new Vector3(_socketRect.x,_socketRect.y),Event.current.mousePosition );
                    GUI.changed = true;

                    if (GUI.Button(_socketRect, "",EditorStyles.radioButton))
                        _onSocketClicked?.Invoke(this);
                }

                
            }
        }
    }
}