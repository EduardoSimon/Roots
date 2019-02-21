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
        public bool isDragged;
        private bool isSelected;

        public virtual void DrawWindow()
        {
            GUI.Label(new Rect(windowRect.x,windowRect.y,50,50),"Hi" );
        }

        public virtual void DrawConnections()
        {
            
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
                            //isDragged = true;
                            GUI.changed = true;
                            //isSelected = true;
                            BTEditor.SelectedNode = this;
                        }
                        else
                        {
                            GUI.changed = true;
                            //isSelected = false;
                        }
                    }

                    break;

                case EventType.MouseUp:
                    //isDragged = false;
                    BTEditor.SelectedNode = null;
                    break;
/*
                case EventType.MouseDrag:
                    if (e.button == 0 && isDragged)
                    {
                        Drag(e.delta);
                        e.Use();
                        return true;
                    }

                    break;*/
            }

            return false;

        }
    }
}