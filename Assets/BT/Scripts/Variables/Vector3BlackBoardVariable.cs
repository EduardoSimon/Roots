using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class Vector3BlackBoardVariable : BlackBoardVariable
    {
        public Vector3 Vector3Variable;
        
        public override void DrawVariableInspector(string label, Event current)
        {
            base.DrawVariableInspector(label, current);
            
            GUI.SetNextControlName("Vector3Variable");
            EditorGUI.BeginChangeCheck();
            Vector3Variable = EditorGUILayout.Vector3Field(label,Vector3Variable);

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("Vector3Variable");
            }
        }
    }
}