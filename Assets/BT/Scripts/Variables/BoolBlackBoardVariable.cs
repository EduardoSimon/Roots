using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class BoolBlackBoardVariable : BlackBoardVariable
    {
        public bool BoolVariable;

        public override void DrawVariableInspector(string label, Event current)
        {

            GUI.SetNextControlName("BoolVariable");
            EditorGUI.BeginChangeCheck();
            BoolVariable = GUILayout.Toggle(BoolVariable, "Is Logging an Error?");
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("BoolVariable");
            }
            
            base.DrawVariableInspector(label,current);
        }
    }
}