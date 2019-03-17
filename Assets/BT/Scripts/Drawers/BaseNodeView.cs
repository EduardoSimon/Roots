
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using BT.Scripts.Drawers;
using Object = UnityEngine.Object;

namespace BT
{
    public abstract class BaseNodeView : ScriptableObject
    {
        public const int SOCKET_WIDTH = 100;
        public const int SOCKET_HEIGHT = 20;
        
        public ATask task;
        public Rect windowRect;
        public string windowTitle;
        public NodeSocket EntrySocket;
        public NodeSocket ExitSocket;
        public bool tooltipShown = false;
        public bool isSelected { get; private set; }
        
        public static event Action<BaseNodeView> OnNodeRightClicked;
        public event Action<BaseNodeView> OnClickedNode;

        private GUISkin _skin;
            
        public virtual void Init()
        {
            _skin = Resources.Load<GUISkin>("BTSkin");
            windowTitle = task.GetType().Name;
            EntrySocket = new NodeSocket(new Rect(0,0,SOCKET_WIDTH,SOCKET_HEIGHT),NodeSocket.NodeSocketType.In,this);
            ExitSocket = new NodeSocket(new Rect(0,0,SOCKET_WIDTH,SOCKET_HEIGHT),NodeSocket.NodeSocketType.Out,this);
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
            EntrySocket?.Draw();
            ExitSocket?.Draw();
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
    }
}