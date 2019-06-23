using BT.Runtime;
using BT.Scripts.Nodes;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Conditions
{
    [SearchTaskPath("Conditions/IsInSight")]
    [CustomNodeDrawer(typeof(ConditionalNode))]
    public class IsInSight : Condition
    {
        public FloatBlackBoardVariable fov;
        public StringBlackBoardVariable searchTagName;
        public FloatBlackBoardVariable maxRange;

        //return value
        public TransformBlackBoardVariable SightedTarget;

        private Transform[] availableTargets;

        public override void Initialize(BehaviorTreeController behaviorTreeController)
        {
            base.Initialize(behaviorTreeController);

            var targets = GameObject.FindGameObjectsWithTag(searchTagName.Variable);
            availableTargets = new Transform[targets.Length];

            for (var index = 0; index < targets.Length; index++)
            {
                var target = targets[index];
                availableTargets[index] = target.transform;
            }
        }

        protected override bool isConditionSatisfied()
        {
            for (int i = 0; i < availableTargets.Length; i++)
            {
                Vector3 dir = availableTargets[i].position - transform.position;
                Debug.DrawRay(transform.position, dir);
                if (Vector3.Angle(dir, transform.forward) < fov.Variable / 2 &&
                    Vector3.Distance(transform.position, availableTargets[i].position) < maxRange.Variable)
                {
                    SightedTarget.Variable = availableTargets[i];
                    return true;
                }
            }

            SightedTarget.Variable = null;
            return false;
        }

        public override void OnDrawGizmos()
        {
            base.OnDrawGizmos();
#if UNITY_EDITOR
            Handles.color = Status == TaskStatus.Failed ? new Color(1, 0, 0, 0.05f) : new Color(0, 1, 0, 0.05f);
            Handles.DrawSolidArc(transform.position, transform.up, transform.forward.normalized * maxRange.Variable,
                -fov.Variable, maxRange.Variable);
            Handles.DrawSolidArc(transform.position, transform.up, transform.forward.normalized * maxRange.Variable,
                fov.Variable, maxRange.Variable);
#else
        if (_manager.isDebugMode)
        {  
            Gizmos.color = Status == TaskStatus.Failed ? new Color(1, 0, 0, 0.2f) : new Color(0, 1, 0, 0.2f);
            Gizmos.DrawWireSphere(transform.position, maxRange.Variable);
        }
#endif
        }
    }
}