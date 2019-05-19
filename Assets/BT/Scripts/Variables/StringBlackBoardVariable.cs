using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class StringBlackBoardVariable : BlackBoardVariable
    {
        [SerializeField] public string StringVariable;
        
        public override void DrawVariableInspector(string label)
        {
            base.DrawVariableInspector(label);
            
            GUI.SetNextControlName("StringVariable");
            EditorGUI.BeginChangeCheck();
            StringVariable = EditorGUILayout.TextField(label,StringVariable);

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("StringVariable");
            }
        }
    }
}