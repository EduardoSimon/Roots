using UnityEngine;

namespace BT
{
    public class SequenceView : BaseNodeView
    {
        private Texture2D icon;
        
        private void Awake()
        {
            icon = Resources.Load<Texture2D>("sequence_icon");
        }

        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);
            GUI.DrawTexture(new Rect(10,20, kNodeWidht - 30 , kNodeHeight - 30), icon);
        }
    }
}