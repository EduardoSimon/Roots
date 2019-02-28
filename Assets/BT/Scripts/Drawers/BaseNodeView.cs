using UnityEditor;
using UnityEngine;
using BT;

namespace BT
{
    public abstract class BaseNodeView : ScriptableObject
    {
        public ATask task;
        public Rect windowRect;
        public string windowTitle;

        public bool isSelected { get; private set; }

        public virtual void DrawWindow()
        {
            GUILayout.Label( "Hi I am a " + task.GetType().Name);
        }

        public virtual void DrawConnections()
        {
            
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