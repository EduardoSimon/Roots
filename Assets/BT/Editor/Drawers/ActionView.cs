using UnityEditor;
using UnityEngine;

namespace BT
{
    public class ActionView : BaseNodeView
    {   
        public override void DrawWindow()
        {
            base.DrawWindow();   
            EditorGUI.BeginChangeCheck();
            Action action = (Action) task;
            action.board = EditorGUILayout.ObjectField(action.board,typeof(BlackBoard),false) as BlackBoard;
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl(null);
            }

        }
    }
}