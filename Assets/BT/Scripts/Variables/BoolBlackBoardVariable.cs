using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class BoolBlackBoardVariable : BlackBoardVariable
    {
        public bool BoolVariable;

        public override void DrawVariableInspector(string label)
        {
            base.DrawVariableInspector(label);
            
            GUI.SetNextControlName("BoolVariable");
            EditorGUI.BeginChangeCheck();
            BoolVariable = GUILayout.Toggle(BoolVariable, "Is Logging an Error?");
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("BoolVariable");
            }

        }
    }
}