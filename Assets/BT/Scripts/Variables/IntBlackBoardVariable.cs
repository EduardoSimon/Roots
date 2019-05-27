using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class IntBlackBoardVariable : BlackBoardVariable
    {
        public int IntVariable;    
        
        public override void DrawVariableInspector(string label, Event current)
        {
            base.DrawVariableInspector(label, current);
            
            GUI.SetNextControlName("IntVariable");
            EditorGUI.BeginChangeCheck();
            IntVariable = EditorGUILayout.IntField(label, IntVariable);

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("IntVariable");
            }

        }
    }
}