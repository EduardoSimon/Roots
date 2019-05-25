using System.Collections;
using System.Collections.Generic;
using BT;
using UnityEditor;
using UnityEngine;

public class EntryNode : BaseNode
{
    private Texture2D iconTexture2D;
    
    private void Awake()
    {
        iconTexture2D = Resources.Load<Texture2D>("entry_icon");
    }

    public override void DrawWindow(int id)
    {
        base.DrawWindow(id);
        GUI.DrawTexture(new Rect(10,20, kNodeWidht - 30 , kNodeHeight - 30), iconTexture2D);
    }

    
    public override void DrawSockets()
    {
        exitSocket?.Draw();
        exitSocket?.ProcessEvent(Event.current);
    }
}
