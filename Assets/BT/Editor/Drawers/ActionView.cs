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
            AAction aAction = (AAction) task;
            aAction.board = EditorGUILayout.ObjectField(aAction.board,typeof(BlackBoard),false) as BlackBoard;
            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl(null);
            }

        }
    }
}