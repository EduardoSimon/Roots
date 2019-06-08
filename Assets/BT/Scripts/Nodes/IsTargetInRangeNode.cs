using System;
using System.Collections;
using System.Collections.Generic;
using BT;
using BT.Editor;
using BT.Scripts;
using BT.Scripts.Nodes;
using RotaryHeart.Lib.SerializableDictionary;
using UnityEditor;
using UnityEngine;

public class IsTargetInRangeNode : LeafNode
{
    public GameObjectBlackBoardVariable target;
    public FloatBlackBoardVariable distanceRange;

    public override void SaveNodeData()
    {
        base.SaveNodeData();
        
        var isTargetInRangeTask = _task as IsTargetInRange;

        if(target.gameObjectVariable.transform == null) //todo stop tree compilation with error code
            BTLog.Log("Target in " + nameof(IsTargetInRangeNode) + "is null, please assign one to compile the tree.");
        else
        {
            isTargetInRangeTask.target = target.gameObjectVariable.transform;
        }

        isTargetInRangeTask.distanceRange = distanceRange.FloatVariable;
    }
}
