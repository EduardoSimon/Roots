﻿using System.Collections;
using System.Collections.Generic;
using BT;
using UnityEngine;

[TaskTooltip("Returns true if the distance to target is less than distanceRange.")]
[SearchTaskPath("Conditions/IsTargetInRange")]
[CustomNodeDrawer(typeof(IsTargetInRangeNode))]
public class IsTargetInRange : ACondition
{
    public Transform target;
    public float distanceRange;
    
    protected override bool isConditionSatisfied()
    {
        return Vector3.Distance(controller.transform.position, target.position) < distanceRange;
    }
}