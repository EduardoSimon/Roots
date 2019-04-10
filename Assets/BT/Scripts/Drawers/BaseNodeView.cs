using System;
using UnityEngine;

namespace BT
{
    public abstract class BaseNodeView : ScriptableObject
    {
        private const int SocketWidth = 100;
        public const int SocketHeight = 40;

        private GUISkin _skin;
        private int _id;
        public NodeSocket entrySocket;
        public NodeSocket exitSocket;

        public ATask task;
        public bool tooltipShown;
        public Rect windowRect;
        public string windowTitle;
        public bool isSelected { get; private set; }

        public Guid? GUID { get; private set; }

        public static event Action<BaseNodeView> OnNodeRightClicked;
        public event Action<BaseNodeView> OnClickedNode;

        public virtual void Init(Guid? guid)
        {
            _skin = Resources.Load<GUISkin>("BTSkin");
            windowTitle = task.GetType().Name;
            entrySocket = new NodeSocket(new Rect(0, 0, SocketWidth, SocketHeight), NodeSocket.NodeSocketType.In, this);
            exitSocket = new NodeSocket(new Rect(0, 0, SocketWidth, SocketHeight), NodeSocket.NodeSocketType.Out, this);

            if (guid == null)
                GUID = Guid.NewGuid();
            else
                GUID = guid;
        }

        public virtual void DrawWindow(int id)
        {
            _id = id;
            GUILayout.BeginVertical();
            GUILayout.Label("Hi I am a " + task.GetType().Name);
            GUILayout.EndVertical();
        }

        public virtual void DrawConnections()
        {
            //the draw method takes into account the drag of the Node
            entrySocket?.Draw();
            entrySocket?.ProcessEvent(Event.current);

            exitSocket?.Draw();
            exitSocket?.ProcessEvent(Event.current);
        }

        public void Drag(Vector2 delta)
        {
            windowRect.position += delta;
        }

        public bool ProcessEvents(Event e)
        {
            switch (e.type)
            {
                case EventType.MouseDown:
                    switch (e.button)
                    {
                        case 0 when windowRect.Contains(e.mousePosition):
                            isSelected = true;
                            OnClickedNode?.Invoke(this);
                            GUI.FocusWindow(_id);


                            return true;
                        case 0:
                            return true;
                        case 1:
                        {
                            if (windowRect.Contains(e.mousePosition))
                                OnNodeRightClicked?.Invoke(this);
                            return true;
                        }
                    }

                    break;

                case EventType.MouseUp:
                    isSelected = false;
                    GUI.UnfocusWindow();
                    return true;
            }

            return false;
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(object other)
        {
            var node = other as BaseNodeView;

            return node != null && node.GUID == GUID;
        }
    }
}