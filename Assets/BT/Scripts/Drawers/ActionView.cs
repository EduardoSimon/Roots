using UnityEditor;
using UnityEngine;

namespace BT
{
    public class ActionView : BaseNodeView
    {
        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);
            #if UNITY_EDITOR
            EditorGUI.BeginChangeCheck();
            var aAction = (AAction) task;
            aAction.board = EditorGUILayout.ObjectField(aAction.board, typeof(BlackBoard), false) as BlackBoard;
            if (EditorGUI.EndChangeCheck()) GUI.FocusControl(null);
            #endif
        }
    }
}