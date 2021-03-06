﻿using System;
using System.Collections;
using System.Collections.Generic;
using BT.Editor;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(BehaviorTreeGraph))]
public class GraphCustomInspector : UnityEditor.Editor
{
    private void OnValidate()
    {
        Repaint();
        EditorUtility.SetDirty(target as BehaviorTreeGraph);
    }
}