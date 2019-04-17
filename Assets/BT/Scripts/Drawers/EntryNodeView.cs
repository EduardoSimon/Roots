using System.Collections;
using System.Collections.Generic;
using BT;
using UnityEngine;

public class EntryNodeView : BaseNodeView
{
    public override void DrawWindow(int id)
    {
        GUILayout.Label(windowTitle);
    }
}
