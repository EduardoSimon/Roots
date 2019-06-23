using UnityEngine;
using System.Collections;
using BT;
using BT.Scripts;

[SearchTaskPath("Condition/IsNotNull")]
public class IsNotNull : Condition
{
    public TransformBlackBoardVariable variable;
    
    protected override bool isConditionSatisfied()
    {
        return variable.Variable != null;
    }
}