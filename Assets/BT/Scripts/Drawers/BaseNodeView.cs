using System;
using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT
{
    public class BaseNodeView : ScriptableObject
    {
        public const float kNodeWidht = 100;
        public const float kNodeHeight = 100;

        private const int SocketWidth = (int) kNodeWidht - 20;
        public const int SocketHeight = (int) kNodeHeight / 6;

        private GUISkin _skin;
        private int _id;
        public NodeSocket entrySocket;
        public NodeSocket exitSocket;

        public ATask task;
        public Rect windowRect;
        public string windowTitle;
        public string nodeComment;
        
        
        public bool IsParentView { get; private set; }
        public bool IsEntryView { get; private set; }

        public bool isSelected { get; private set; }

        [SerializeField] private string guid;
        public string GUID => guid;

        //serialize this
        public List<BaseNodeView> children;

        public virtual ATask Task
        {
            get { return task; }
            set { task = value; }
        }

        public static event Action<BaseNodeView> OnNodeRightClicked;
        public event Action<BaseNodeView> OnClickedNode;

        private void OnEnable()
        {
            //hideFlags = HideFlags.HideInHierarchy;
        }

        /// <summary>
        /// Emulates the constructor of the class. Override this method calling the base one for your custom initialization
        /// </summary>
        /// <param name="id"> If the node has been created before and only a copy is need, the GUID parameter MUST BE NULL</param>
        /// <param name="isEntryView"> Is the entry view of the graph</param>
        /// <param name="isParentView"> Is allowed to have children</param>
        public virtual void Init(string id, bool isEntryView, bool isParentView)
        {
            if (isEntryView)
            {
                _skin = Resources.Load<GUISkin>("BTSkin");
                exitSocket = new NodeSocket(new Rect(windowRect.xMin, windowRect.yMax, SocketWidth, SocketHeight), NodeSocket.NodeSocketType.Out, this);

                if (id == null)
                {
                    this.guid = Guid.NewGuid().ToString();
                    children = new List<BaseNodeView>();
                }
                else
                    this.guid = id;

                IsEntryView = isEntryView;
                IsParentView = isParentView;

                return;

            }
            
            windowTitle = task.GetType().Name;
            entrySocket = new NodeSocket(new Rect(windowRect.xMin, windowRect.yMax, SocketWidth, SocketHeight), NodeSocket.NodeSocketType.In, this);
            exitSocket = new NodeSocket(new Rect(windowRect.xMin, windowRect.yMax, SocketWidth, SocketHeight), NodeSocket.NodeSocketType.Out, this);

            if (id == null)
            {
                this.guid = Guid.NewGuid().ToString();
                children = new List<BaseNodeView>();
            }
            else
                this.guid = id;

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

        /// <summary>
        /// Callback for drawing this node's inspector. Use EditorGUILayout or GUILayout functions for easier positioning.
        /// </summary>
        public virtual void DrawInspector()
        {
            GUILayout.Label(windowTitle);
            nodeComment = EditorGUILayout.TextArea("Write your comments here.");
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

            return node != null && node.guid == guid;
        }
        
        public virtual void SaveNodeInfo(){}

    }
}