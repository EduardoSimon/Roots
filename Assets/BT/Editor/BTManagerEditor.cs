using System;
using System.Collections;
using System.Collections.Generic;
using BT.Runtime;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(BehaviorTreeManager))]
public class BTManagerEditor : UnityEditor.Editor
{
    public override void OnInspectorGUI()
    {
        BehaviorTreeManager script = (BehaviorTreeManager) target;

        script.TickMode = (BehaviorTreeManager.ETickMode)EditorGUILayout.EnumPopup("Tick Mode", script.TickMode);

        if (script.TickMode == BehaviorTreeManager.ETickMode.Milliseconds)
            script.UpdateMsFreq = EditorGUILayout.FloatField(script.UpdateMsFreq);
        else if (script.TickMode == BehaviorTreeManager.ETickMode.CPUCycles)
            script.UpdateCPUCyclesFreq = EditorGUILayout.FloatField(script.UpdateCPUCyclesFreq);
    }
}
