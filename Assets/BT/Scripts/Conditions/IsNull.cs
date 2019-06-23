using UnityEngine;
using System.Collections;
using BT;
using BT.Scripts;

[SearchTaskPath("Condition/IsNull")]
public class IsNull : Condition
{
    public TransformBlackBoardVariable variable;
    
    protected override bool isConditionSatisfied()
    {
        return variable == null;
    }
}