using UnityEditor;
using UnityEngine;
using BT;
using TMPro;

namespace BT
{
    public abstract class BaseNodeView : ScriptableObject
    {
        public ATask task;
        public Rect windowRect;
        public string windowTitle;
        public NodeSocket EntrySocket;
        public NodeSocket ExitSocket;

        public bool isSelected { get; private set; }

        public virtual void DrawWindow()
        {
            this.windowTitle = task.GetType().Name;

            GUILayout.BeginVertical();
            GUILayout.Label("Hi I am a " + task.GetType().Name);
            GUILayout.EndVertical();

            EntrySocket = new NodeSocket(new Rect(0,0,20,20),NodeSocket.NodeSocketType.In,this,OnClickEntrySocket());
            //ExitSocket = new Vector2(windowRect.xMin + windowRect.width/2, windowRect.yMax);

        }

        public virtual void DrawConnections()
        {
            EntrySocket.Draw();
            //Handles.DrawLine(Vector3.zero, new Vector3(EntrySocket.x,EntrySocket.y,0));
            //Handles.DrawLine(new Vector3(Screen.width,Screen.height,0), new Vector3(ExitSocket.x,ExitSocket.y,0));
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

        public void OnClickEntrySocket()
        {
            Debug.Log("Clicked the entry socket.");
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

        public class NodeSocket
        {
            public enum NodeSocketType
            {
                In,
                Out,
            }
            
            public Rect SocketRect;
            public NodeSocketType SocketType;
            public BaseNodeView Node;
            public GUIStyle style;
            public System.Action OnSocketClicked;

            public NodeSocket(Rect socketRect, NodeSocketType type, BaseNodeView node,
                System.Action onSocketClicked)
            {
                SocketRect = socketRect;
                SocketType = type;
                Node = node;
                OnSocketClicked = onSocketClicked;
            }
            
            public void Draw()
            {
                SocketRect.x = Node.windowRect.xMin + Node.windowRect.width / 2;

                SocketRect.y = SocketType == NodeSocketType.In ? Node.windowRect.yMin : Node.windowRect.yMax;
        
                if (GUI.Button(SocketRect, "", style))
                {
                    if (OnSocketClicked != null)
                    {
                        OnSocketClicked();
                    }
                }
            }
        }

    }
    
    
}