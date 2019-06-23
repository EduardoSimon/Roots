using BT.Runtime;
using BT.Scripts.Nodes;
using UnityEngine;
using UnityEngine.AI;

namespace BT.Scripts.Actions
{
    [SearchTaskPath("Action/SetDestination")]
    [TaskTooltip("Given a NavMeshAgent, sets its destination to a certain position.")]
    [CustomNodeDrawer(typeof(ActionNode))]
    public class SetDestination : Action
    {
        public TransformBlackBoardVariable destination;

        private NavMeshAgent _agent;
        
        public override void Initialize(BehaviorTreeController behaviorTreeController)
        {
            base.Initialize(behaviorTreeController);
            _agent = transform.gameObject.GetComponent<NavMeshAgent>();
            _agent.Warp(transform.position);
        }

        protected override void OnFirstTick()
        {
            base.OnFirstTick();

        }

        protected override TaskStatus Update()
        {
            if(destination.Variable == null)
                return TaskStatus.Failed;
            
            if (_agent.remainingDistance < _agent.stoppingDistance)
                return TaskStatus.Succeeded;
            
            _agent.SetDestination(destination.Variable.position);

            return TaskStatus.Running;
        }
    }
}