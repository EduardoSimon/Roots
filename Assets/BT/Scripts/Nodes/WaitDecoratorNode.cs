using System;
using BT.Editor;
using UnityEngine;

namespace BT.Scripts.Nodes
{
    public class WaitDecoratorNode : BaseNode
    {
        private Texture2D icon;

        public override void Init(string id, bool isEntryPoint, bool isRootView, bool isParentView, Action<NodeSocket> OnSocketClicked,
            BehaviorTreeGraph context)
        {
            base.Init(id, isEntryPoint, isRootView, isParentView, OnSocketClicked, context);
            
            icon = Resources.Load<Texture2D>("wait_icon");
        }

        public override void DrawNodeView(int id)
        {
            base.DrawNodeView(id);
            GUI.DrawTexture(new Rect(20,20, BTConstants.kNodeWidht - 30 , BTConstants.kNodeHeight - 30), icon);
        }
    }
}