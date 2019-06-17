using System;
using BT.Editor;
using UnityEngine;

namespace BT.Scripts.Nodes
{
    public class ConditionalNode : LeafNode
    {
        private Texture2D icon;
        
        public override void Init(string id, bool isEntryPoint, bool isRootView, bool isParentView, Action<NodeSocket> OnSocketClicked, BehaviorTreeGraph context)
        {
            base.Init(id, isEntryPoint, isRootView, isParentView, OnSocketClicked,context);
            icon = Resources.Load<Texture2D>("conditional_icon");
        }

        public override void DrawNodeView(int id)
        {
            base.DrawNodeView(id);
            GUI.DrawTexture(new Rect(10,20, BTConstants.kNodeWidht - 30 , BTConstants.kNodeHeight - 30), icon);
        }

        
    }
}