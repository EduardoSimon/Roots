
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using BT.Scripts.Drawers;
using UnityEngine.Serialization;
using Object = UnityEngine.Object;

namespace BT
{
    public abstract class BaseNodeView : ScriptableObject
    {
        private const int SocketWidth = 100;
        public const int SocketHeight = 40;
        
        public ATask task;
        public Rect windowRect;
        public string windowTitle;
        public NodeSocket entrySocket;
        public NodeSocket exitSocket;
        public bool tooltipShown = false;
        public bool isSelected { get; private set; }
        
        public static event Action<BaseNodeView> OnNodeRightClicked;
        public event Action<BaseNodeView> OnClickedNode;

        private GUISkin _skin;
        private Guid? _guid;

        public Guid? GUID
        {
            get { return _guid; }
        }

        public virtual void Init(Guid? guid)
        {
            _skin = Resources.Load<GUISkin>("BTSkin");
            windowTitle = task.GetType().Name;
            entrySocket = new NodeSocket(new Rect(0,0,SocketWidth,SocketHeight),NodeSocket.NodeSocketType.In,this);
            exitSocket = new NodeSocket(new Rect(0,0,SocketWidth,SocketHeight),NodeSocket.NodeSocketType.Out,this);

            if (guid == null)
                _guid = Guid.NewGuid();
            else
                _guid = guid;
        }
        
        public virtual void DrawWindow()
        {
            GUILayout.BeginVertical();
            GUILayout.Label("Hi I am a " + task.GetType().Name);
            GUILayout.EndVertical();
        }

        public virtual void DrawConnections()
        {   
            //the draw method takes into account the drag of the Node
            entrySocket?.ProcessEvent(Event.current);
            entrySocket?.Draw();
            exitSocket?.ProcessEvent(Event.current);
            exitSocket?.Draw();
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

                            GUI.changed = true;
                            break;
                        
                        case 0:
                            GUI.changed = true;
                            break;
                        case 1:
                        {
                            if(windowRect.Contains(e.mousePosition))
                                OnNodeRightClicked?.Invoke(this);
                            break;
                        }
                    }

                    break;

                case EventType.MouseUp:
                    isSelected = false;
                    break;
               
            }

            return false;

        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(object other)
        {
            BaseNodeView node = other as BaseNodeView;

            return node != null && node._guid == this._guid;
        }
    }
}