using System;
using BT.Core;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class LogNodeView : BaseNodeView
    {
        private Texture2D _texture2D;
        
        public override void Init(string guid, bool isEntryView, bool isParentView)
        {
            base.Init(guid, isEntryView, isParentView);

            _texture2D = Resources.Load<Texture2D>("log_icon");

        }

        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);

            GUI.DrawTexture(new Rect(20,20, kNodeWidht - 30, kNodeHeight - 30), _texture2D );
        }

        public override void DrawSockets()
        {
            base.DrawSockets();
        }
    }
}