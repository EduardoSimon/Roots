using System.Collections;
using System.Collections.Generic;
using BT;
using BT.Scripts;
using RotaryHeart.Lib.SerializableDictionary;
using UnityEngine;

public class IsTargetInRangeNode : BaseNode
{
    public GameObjectBlackBoardVariable target;
    public FloatBlackBoardVariable distanceRange;
    
    public override ATask Task
    {
        get { return (IsTargetInRange) task;}
        set { task = (IsTargetInRange) value; }
    }
    
    public override void SaveNodeInfo()
    {
        base.SaveNodeInfo();

        var isTargetInRangeTask = task as IsTargetInRange;

        isTargetInRangeTask.target = target.gameObjectVariable.transform;
        isTargetInRangeTask.distanceRange = distanceRange.FloatVariable;
    }

    public override void DrawSockets()
    {
        entrySocket.Draw();
    }

    public override void DrawInspector(Event current)
    {
        base.DrawInspector(current);
        
        target.DrawVariableInspector("Target",current);
        distanceRange.DrawVariableInspector("Range Distance",current);
    }
    
}
