using System;
using System.Collections;
using System.Collections.Generic;
using BT;
using BT.Editor;
using BT.Scripts;
using RotaryHeart.Lib.SerializableDictionary;
using UnityEditor;
using UnityEngine;

public class IsTargetInRangeNode : BaseNode
{
    public GameObjectBlackBoardVariable target;
    public FloatBlackBoardVariable distanceRange;
    public FloatBlackBoardVariable distanceRange2;
    public FloatBlackBoardVariable distanceRange3;


    public override void Init(string id, bool isEntryPoint, bool isRootView, bool isParentView, Action<NodeSocket> OnSocketClicked)
    {
        base.Init(id, isEntryPoint, isRootView, isParentView, OnSocketClicked);
    }

    public override ATask Task
    {
        get { return (IsTargetInRange) task;}
        set { task = (IsTargetInRange) value; }
    }
    
    public override void SaveNodeInfo()
    {
        base.SaveNodeInfo();

        var isTargetInRangeTask = task as IsTargetInRange;

        if(target.gameObjectVariable.transform == null) //todo stop tree compilation.
            BTLog.Log("Target in " + nameof(IsTargetInRangeNode) + "is null, please assign one to compile the tree.");
        else
        {
            isTargetInRangeTask.target = target.gameObjectVariable.transform;
        }

        isTargetInRangeTask.distanceRange = distanceRange.FloatVariable;
    }

    public override void DrawSockets()
    {
        entrySocket.Draw();
    }
}
