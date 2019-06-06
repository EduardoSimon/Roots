using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class Vector3BlackBoardVariable : BlackBoardVariable
    {
        public Vector3 Vector3Variable;
        
        
        public override Rect DrawVariableInspector(Rect rect, string label, ref int id)
        {
            base.DrawVariableInspector(rect,label,ref id);
            
            EditorGUI.BeginChangeCheck();
            GUI.SetNextControlName("Variable"  + id);
            Vector3Variable = EditorGUI.Vector3Field( rect,label,Vector3Variable);
            
            
            if(Event.current.type == EventType.MouseDown && !rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl(null);
                
            }
            else if(Event.current.type == EventType.MouseDown && rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl("Variable" + id);
            }

            return rect;

        }
    }
}