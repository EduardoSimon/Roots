﻿using System;
using System.Collections;
using System.Collections.Generic;
using BT;
using BT.Runtime;
using BT.Scripts.Nodes;
using UnityEngine;

[TaskTooltip("Returns true if the distance to target is less than distanceRange.")]
[SearchTaskPath("Conditions/IsTargetInRange")]
[CustomNodeDrawer(typeof(LeafNode))]
public class IsTargetInRange : ACondition
{
    public Transform target;
    public float distanceRange;

    private void OnEnable()
    {
        Debug.Log("Calling on Enable;");
    }

    protected override bool isConditionSatisfied()
    {
        return Vector3.Distance(BTManager.Instance.CurrentTickingController.transform.position, target.position) < distanceRange;
    }
}