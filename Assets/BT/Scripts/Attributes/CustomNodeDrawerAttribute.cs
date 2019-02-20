using System;
using UnityEditor;

namespace BT
{
    [AttributeUsage(AttributeTargets.Class)]
    public class CustomNodeDrawerAttribute : Attribute
    {
        public Type DrawWindowType;

        public CustomNodeDrawerAttribute(Type type)
        {
            DrawWindowType = type;
        }
    }
}