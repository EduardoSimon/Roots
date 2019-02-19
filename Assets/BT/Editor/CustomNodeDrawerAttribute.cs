using System;
using UnityEditor;

namespace BT.Editor
{
    [AttributeUsage(AttributeTargets.Class)]
    public class CustomNodeDrawerAttribute : Attribute
    {
        public EditorWindow DrawWindow;

        public CustomNodeDrawerAttribute(EditorWindow drawWindow)
        {
            DrawWindow = drawWindow;
        }
    }
}