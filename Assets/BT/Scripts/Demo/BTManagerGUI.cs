using System;
using System.Collections;
using System.Collections.Generic;
using BT.Runtime;
using UnityEngine;

public class BTManagerGUI : MonoBehaviour
{
    private void OnGUI()
    {
        GUI.Window(int.MinValue,new Rect(0,0, Screen.width / 6, Screen.height/8),DrawDebugGUI, "Behavior Tree Debug GUI",GUI.skin.window);
    }

    private void DrawDebugGUI(int id)
    {
        if(BTManager.Instance.CurrentTickingController != null)
            GUILayout.Label("Running: <b>" + BTManager.Instance.CurrentTickingController.gameObject.name + "</b> with tree name: " + BTManager.Instance.CurrentTickingController.treeGraph.name);
    }
}
