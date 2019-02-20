using UnityEditor;
using UnityEngine;

namespace BT
{
    public class ActionView : BaseNodeView
    {   
        protected override void DrawWindow()
        {
            base.DrawWindow();
            GUILayout.Label("OFC im an action");

        }
    }
}