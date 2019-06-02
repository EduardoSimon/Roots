using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class FloatBlackBoardVariable : BlackBoardVariable
    {
        public float FloatVariable = 5f;

        public override void SaveBlackboardVariable()
        {
            base.SaveBlackboardVariable();
        }

        public override void DrawVariableInspector(string label, Event current)
        {
            
            GUI.SetNextControlName("FloatVariable");
            EditorGUI.BeginChangeCheck();
            FloatVariable = EditorGUILayout.FloatField(label, FloatVariable);

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("FloatVariable");
            }
            
            base.DrawVariableInspector(label, current);
        }
    }
}