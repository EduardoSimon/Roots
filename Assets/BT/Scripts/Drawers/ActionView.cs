using UnityEditor;
using UnityEngine;

namespace BT
{
    public class ActionView : BaseNode
    {
        public override void DrawNodeView(int id)
        {
            base.DrawNodeView(id);
            #if UNITY_EDITOR
            EditorGUI.BeginChangeCheck();
            var aAction = (AAction) Task;
            aAction.board = EditorGUILayout.ObjectField(aAction.board, typeof(BlackBoard), false) as BlackBoard;
            if (EditorGUI.EndChangeCheck()) GUI.FocusControl(null);
            #endif
        }
    }
}