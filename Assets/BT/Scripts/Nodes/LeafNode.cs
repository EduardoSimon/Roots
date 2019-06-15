using System;
using BT.Editor;
using UnityEngine;

namespace BT.Scripts.Nodes
{
    public class LeafNode : BaseNode
    {
        public override void Init(string id, bool isEntryPoint, bool isRootView, bool isParentView, Action<NodeSocket> OnSocketClicked, BehaviorTreeGraph context)
        {
            base.Init(id, isEntryPoint, isRootView, isParentView, OnSocketClicked,context);
            isParentView = false;
        }

        public override void DrawSockets()
        {
            entrySocket.Draw();
            ProcessEvents(Event.current);
        }

        public override void SaveNodeData()
        {
            base.SaveNodeData();
            _task.Status = TaskStatus.NonInitialized;
        }
    }
}