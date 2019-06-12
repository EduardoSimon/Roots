using System;
using UnityEngine;

namespace BT.Scripts
{
    public class VariableFactory
    {
        public static BlackBoardVariable CreateVariable(Type t)
        {
            if (t == typeof(float)) return ScriptableObject.CreateInstance<FloatBlackBoardVariable>();

            if (t == typeof(Transform)) return ScriptableObject.CreateInstance<TransformBlackBoardVariable>();

            if (t == typeof(int)) return ScriptableObject.CreateInstance<IntBlackBoardVariable>();

            if (t == typeof(bool)) return ScriptableObject.CreateInstance<BoolBlackBoardVariable>();

            if (t == typeof(string)) return ScriptableObject.CreateInstance<StringBlackBoardVariable>();

            if (t == typeof(Vector3)) return ScriptableObject.CreateInstance<Vector3BlackBoardVariable>();

            throw new NullReferenceException("Couldn't create a variable of type: " + t);
        }
    }
}