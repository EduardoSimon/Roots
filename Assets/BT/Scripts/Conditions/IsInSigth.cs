using BT.Runtime;
using BT.Scripts.Nodes;
using UnityEngine;

namespace BT.Scripts.Conditions
{
    [SearchTaskPath("Conditions/IsInSight")]
    [CustomNodeDrawer(typeof(ConditionalNode))]
    public class IsInSight : Condition
    {
        public float fov = 30;
        public string searchTagName;
        
        //return value
        public Transform targetInSight;

        private Transform[] availableTargets;
        
        public override void Initialize(BehaviorTreeController behaviorTreeController)
        {
            base.Initialize(behaviorTreeController);
            
            var targets = GameObject.FindGameObjectsWithTag(searchTagName);
            availableTargets = new Transform[targets.Length];

            for (var index = 0; index < targets.Length; index++)
            {
                var target = targets[index];
                availableTargets[index] = target.transform;
            }
        }

        protected virtual bool isConditionSatisfied()
        {
            for (int i = 0; i < availableTargets.Length; i++)
            {
                Vector3 dir = availableTargets[i].position - transform.position;
                if (Vector3.Angle(dir, transform.forward) < fov)
                {
                    targetInSight = availableTargets[i];
                    return true;
                }    
            }
            return false;
        }
    }
}