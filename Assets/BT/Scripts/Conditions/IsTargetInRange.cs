using System;
using System.Collections;
using System.Collections.Generic;
using BT;
using BT.Runtime;
using BT.Scripts;
using BT.Scripts.Nodes;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;

[TaskTooltip("Returns true if the distance to target is less than distanceRange.")]
[SearchTaskPath("Conditions/IsTargetInRange")]
[CustomNodeDrawer(typeof(LeafNode))]
public class IsTargetInRange : Condition
{
    public Transform target;
    public float distanceRange;
    
    private void OnEnable()
    {
        Debug.Log("Calling on Enable;");
    }

    protected override bool isConditionSatisfied()
    {
        return Vector3.Distance(BTManager.Instance.CurrentTickingController.transform.position, target.position) <
               distanceRange;
    }

    public override void OnDrawGizmos()
    {
        Transform t = BTManager.Instance.CurrentTickingController.transform;
        Vector3 startPos = new Vector3(t.transform.position.x, t.transform.position.y - 0.5f, t.transform.position.z);
        
        base.OnDrawGizmos();
        Handles.color = Status == TaskStatus.Failed ? new Color(1, 0, 0, 0.05f) : new Color(0, 1, 0, 0.05f);
        Handles.DrawSolidArc(startPos, t.up, t.forward.normalized * distanceRange, 360f, distanceRange);
#if !UNITY_EDITOR
        if (_manager.isDebugMode)
        {  
            Gizmos.color = Status == TaskStatus.Failed ? new Color(1, 0, 0, 0.2f) : new Color(0, 1, 0, 0.2f);
            Gizmos.DrawWireSphere(BTManager.Instance.CurrentTickingController.transform.position, distanceRange);
        }
#endif
    }
}