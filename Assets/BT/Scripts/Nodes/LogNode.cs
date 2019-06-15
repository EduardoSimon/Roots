using System;
using System.Collections.Generic;
using System.Linq;
using BT.Core;
using BT.Editor;
using BT.Scripts.Nodes;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class LogNode : LeafNode
    {
        private Texture2D _texture2D;
        
        /// <summary>
        /// The init has two purposes:
        ///    -Re-enable the references of the node when they are lost: OnEnterPlayMode or OnExitPlaymode
        ///    -If the node is new, creating a guid for it, else reloading the one assigned to it.
        /// </summary>
        /// <param name="guid"></param>
        /// <param name="isEntryPoint"></param>
        /// <param name="isRootView"></param>
        /// <param name="isParentView"></param>
        /// <param name="OnSocketClicked"></param>
        public override void Init(string guid, bool isEntryPoint, bool isRootView, bool isParentView,
            Action<NodeSocket> OnSocketClicked, BehaviorTreeGraph context)
        {
            base.Init(guid, isEntryPoint, isRootView, isParentView, OnSocketClicked,context);

            if (_texture2D == null)
                _texture2D = Resources.Load<Texture2D>("log_icon");
        }

        /// <summary>
        /// The node drawing function. Generally you would just draw a texture on top of the node, but its fully customizable.
        /// </summary>
        /// <param name="id"></param>
        public override void DrawNodeView(int id)
        {
            base.DrawNodeView(id);

            GUI.DrawTexture(new Rect(20, 20, BTConstants.kNodeWidht - 30, BTConstants.kNodeHeight - 30), _texture2D);
        }
    }
}