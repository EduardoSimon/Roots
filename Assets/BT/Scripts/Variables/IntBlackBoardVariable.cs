using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class IntBlackBoardVariable : BlackBoardVariable
    {
        public int Variable;    
        
        public override Rect DrawVariableInspector(Rect rect, string label, ref int id)
        {
            
            base.DrawVariableInspector(rect, label, ref id);
            GUI.SetNextControlName("Variable" + id);
            Variable = EditorGUI.IntField(rect,label,Variable);


            if (Event.current.type == EventType.MouseDown && !rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl(null);
            }
            else if (Event.current.type == EventType.MouseDown && rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl("Variable" + id);
            }

            return rect;

        }
    }
}