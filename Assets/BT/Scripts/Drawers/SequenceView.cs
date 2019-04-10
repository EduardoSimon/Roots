using UnityEngine;

namespace BT
{
    public class SequenceView : BaseNodeView
    {
        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);
            GUILayout.Label("OFC im a sequence");
        }
    }
}