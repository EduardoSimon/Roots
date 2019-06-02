using BT.Editor;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class StringBlackBoardVariable : BlackBoardVariable
    {
        [SerializeField] public string StringVariable;
        
        public override void DrawVariableInspector(string label, Event current)
        {
            
            GUI.SetNextControlName("StringVariable");
            
            EditorGUI.BeginChangeCheck();
            StringVariable = EditorGUILayout.TextField( label,StringVariable);
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("StringVariable");
            }

            base.DrawVariableInspector(label,current);

        }
    }
}