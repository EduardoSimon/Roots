using UnityEditor;
using UnityEngine;

namespace BT
{
    public class SequenceView : BaseNodeView
    {
        protected override void DrawWindow()
        {
            base.DrawWindow();
            GUILayout.Label("OFC im a sequence");
        }
    }
}