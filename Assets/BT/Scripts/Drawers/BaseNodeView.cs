
using System;
using System.Collections.Generic;
using UnityEngine;
using BT.Scripts.Drawers;
using Object = UnityEngine.Object;

namespace BT
{
    public abstract partial class BaseNodeView : ScriptableObject
    {
        public const int SOCKET_WIDTH = 100;
        public const int SOCKET_HEIGHT = 20;
        
        public ATask task;
        public Rect windowRect;
        public string windowTitle;
        public NodeSocket EntrySocket;
        public NodeSocket ExitSocket;
        public bool isSelected { get; private set; }

        public virtual void Init()
        {
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

        public virtual NodeData SaveData()
        {
            return new NodeData()
            {
                task = task,
                windowRect = windowRect,
                windowTitle = windowTitle
            };
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
                    if (e.button == 0)
                    {
                        if (windowRect.Contains(e.mousePosition))
                        {
                            Debug.Log("Contained");
                            GUI.changed = true;
                            isSelected = true;
                        }
                        else
                        {
                            GUI.changed = true;
                        }
                    }

                    break;

                case EventType.MouseUp:
                    isSelected = false;
                    break;

            }

            return false;

        }

        public struct NodeData
        {
            public ATask task;
            public Rect windowRect;
            public string windowTitle;
            public Object[] optionalParams;
        }
    }
    
    
}