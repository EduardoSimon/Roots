using UnityEngine;

namespace BT
{
    public class SequenceView : BaseNodeView
    {
        public override void DrawWindow()
        {
            base.DrawWindow();
            GUILayout.Label("OFC im a sequence");
        }
    }
}