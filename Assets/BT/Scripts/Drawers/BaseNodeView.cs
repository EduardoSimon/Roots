using UnityEditor;
using UnityEngine;

namespace BT
{
    public abstract class BaseNodeView : ScriptableObject
    {
        public ATask task;
        public Rect windowRect;
        public string windowTitle;
        
        
        protected virtual void DrawWindow()
        {
            GUILayout.Label("Hello im a drawer drawing the node for the " + task.GetType().Name + " class");
        }

        protected virtual void DrawConnections()
        {
            
        }
    }
}