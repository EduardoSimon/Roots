using System;
using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEngine;

namespace BT
{
    public abstract class BaseNodeView : ScriptableObject
    {
        
        public const float kNodeWidht = 100;
        public const float kNodeHeight = 100;
        
        private const int SocketWidth = (int)kNodeWidht - 20;
        public const int SocketHeight = (int)kNodeHeight / 6;

        private GUISkin _skin;
        private int _id;
        public NodeSocket entrySocket;
        public NodeSocket exitSocket;

        private ATask task;
        public Rect windowRect;
        public string windowTitle;
        public bool IsParentView { get; private set; }
        public bool IsEntryView { get; private set; }

        public bool isSelected { get; private set; }

        public Guid? GUID { get; private set; }

        //serialize this
        public List<BaseNodeView> children; 

        public virtual ATask Task
        {
            get { return task; }
            set { task = value; }
        }

        public static event Action<BaseNodeView> OnNodeRightClicked;
        public event Action<BaseNodeView> OnClickedNode;


        public virtual void Init(Guid? guid, bool isEntryView, bool isParentView)
        {
            if (isEntryView)
            {
                _skin = Resources.Load<GUISkin>("BTSkin");
                exitSocket = new NodeSocket(new Rect(windowRect.xMin, windowRect.yMax, SocketWidth, SocketHeight), NodeSocket.NodeSocketType.Out, this);
                
                if (guid == null)
                {
                    GUID = Guid.NewGuid();
                    children = new List<BaseNodeView>();
                }
                else
                    GUID = guid;

                IsEntryView = isEntryView;
                IsParentView = isParentView;

                return;

            }
                
            windowTitle = task.GetType().Name;
            entrySocket = new NodeSocket(new Rect(windowRect.xMin, windowRect.yMax, SocketWidth, SocketHeight), NodeSocket.NodeSocketType.In, this);
            exitSocket = new NodeSocket(new Rect(windowRect.xMin, windowRect.yMax, SocketWidth, SocketHeight), NodeSocket.NodeSocketType.Out, this);

            if (guid == null)
            {
                GUID = Guid.NewGuid();
                children = new List<BaseNodeView>();
            }
            else
                GUID = guid;

            IsEntryView = isEntryView;
            IsParentView = isParentView;
        }

        public virtual void DrawWindow(int id)
        {
            _id = id;
        }

        public virtual void DrawSockets()
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
        
        [System.Serializable]
        public class NodeData
        {
            public NodeData(ATask task, Rect windowRect, string windowTitle, Guid? id, bool isParentNode, bool isEntryNode)
            {
                this.task = task;
                this.windowRect = windowRect;
                this.windowTitle = windowTitle;
                this.id = id;
                this.isParentNode = isParentNode;
                this.isEntryNode = isEntryNode;
            }

            public ATask task;
            public Rect windowRect;
            public string windowTitle;
            public Guid? id;
            public bool isParentNode;
            public bool isEntryNode;
        }
    }
}