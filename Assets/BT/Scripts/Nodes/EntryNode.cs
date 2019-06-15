using System;
using System.Collections;
using System.Collections.Generic;
using BT;
using BT.Editor;
using UnityEditor;
using UnityEngine;

public class EntryNode : BaseNode
{
    private Texture2D iconTexture2D;

    public override void Init(string id, bool isEntryPoint, bool isRootView, bool isParentView, Action<NodeSocket> OnSocketClicked, BehaviorTreeGraph context)
    {
        base.Init(id, isEntryPoint, isRootView, isParentView, OnSocketClicked,context);
        iconTexture2D = Resources.Load<Texture2D>("entry_icon");
    }

    public override void DrawNodeView(int id)
    {
        base.DrawNodeView(id);
        GUI.DrawTexture(new Rect(10,20, BTConstants.kNodeWidht - 30 , BTConstants.kNodeHeight - 30), iconTexture2D);
    }

    
    public override void DrawSockets()
    {
        exitSocket.Draw();
        exitSocket.ProcessEvent(Event.current);
    }
    
}
