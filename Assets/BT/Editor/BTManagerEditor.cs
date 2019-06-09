using System;
using System.Collections;
using System.Collections.Generic;
using BT.Runtime;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(BTManager))]
public class BTManagerEditor : UnityEditor.Editor
{
    public override void OnInspectorGUI()
    {
        BTManager script = (BTManager) target;

        script.TickMode = (BTManager.ETickMode)EditorGUILayout.EnumPopup("Tick Mode", script.TickMode);

        if (script.TickMode == BTManager.ETickMode.Milliseconds)
            script.UpdateMsFreq = EditorGUILayout.FloatField("Frequency", script.UpdateMsFreq);
        else if (script.TickMode == BTManager.ETickMode.CPUCycles)
            script.UpdateCPUCyclesFreq = EditorGUILayout.FloatField("Frequency",script.UpdateCPUCyclesFreq);

        script.isDebugMode = EditorGUILayout.Toggle("Is Debug Mode", script.isDebugMode);
    }
}
