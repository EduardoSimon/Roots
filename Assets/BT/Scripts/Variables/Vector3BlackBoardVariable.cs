using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class Vector3BlackBoardVariable : BlackBoardVariable
    {
        public Vector3 Variable;
        
        
        public override Rect DrawVariableInspector(Rect rect, string label, ref int id)
        {
            base.DrawVariableInspector(rect,label,ref id);
            #if UNITY_EDITOR
            EditorGUI.BeginChangeCheck();
            GUI.SetNextControlName("Variable"  + id);
            Variable = EditorGUI.Vector3Field( rect,label,Variable);
            
            
            if(Event.current.type == EventType.MouseDown && !rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl(null);
                
            }
            else if(Event.current.type == EventType.MouseDown && rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl("Variable" + id);
            }

            #endif
            return rect;

        }
    }
}