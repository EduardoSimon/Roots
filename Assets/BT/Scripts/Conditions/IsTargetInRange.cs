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
[CustomNodeDrawer(typeof(ConditionalNode))]
public class IsTargetInRange : Condition
{
    public TransformBlackBoardVariable target;
    public FloatBlackBoardVariable distanceRange;

    private Collider[] _colliders;
    
    private void OnEnable()
    {
        Debug.Log("Calling on Enable;");
    }

    protected override void OnFirstTick()
    {
        base.OnFirstTick();
        _colliders = new Collider[5];
    }

    protected override bool isConditionSatisfied()
    {
        Physics.OverlapSphereNonAlloc(cachedTransform.position, distanceRange.Variable,_colliders);
        
        for (int i = 0; i < _colliders.Length; i++)
        {
            if(_colliders[i] == null)
                continue;
            
            if (_colliders[i].gameObject.CompareTag("Player"))
            {
                target.Variable = _colliders[i].gameObject.transform;
                return true;
            }
        }


        return false;
    }

    public override void OnDrawGizmos()
    {
        Vector3 startPos = new Vector3(cachedTransform.position.x, cachedTransform.position.y - 0.5f, cachedTransform.position.z);
#if UNITY_EDITOR       
        base.OnDrawGizmos();
        Handles.color = Status == TaskStatus.Failed ? new Color(1, 0, 0, 0.05f) : new Color(0, 1, 0, 0.05f);
        Handles.DrawSolidArc(startPos, cachedTransform.up, cachedTransform.forward.normalized * distanceRange.Variable, 360f, distanceRange.Variable);
#else
        if (_manager.isDebugMode)
        {  
            Gizmos.color = Status == TaskStatus.Failed ? new Color(1, 0, 0, 0.2f) : new Color(0, 1, 0, 0.2f);
            Gizmos.DrawWireSphere(cachedTransform.position, distanceRange);
        }
#endif
    }
}