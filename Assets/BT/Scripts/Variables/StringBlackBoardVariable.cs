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
            base.DrawVariableInspector(label,current);
            
            GUI.SetNextControlName("StringVariable");
            
           
            EditorGUI.BeginChangeCheck();
            StringVariable = EditorGUILayout.TextField( label,StringVariable);
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("StringVariable");
            }

            if (current.type != EventType.MouseDown) return;

            if (!GUILayoutUtility.GetLastRect().Contains(current.mousePosition))
            {
                GUI.FocusControl(null);
                Event.current.Use();
            }

        }
    }
}