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

        public FloatBlackBoardVariable speed;
        
        public override void Initialize(BehaviorTreeController behaviorTreeController)
        {
            base.Initialize(behaviorTreeController);
            _agent = cachedTransform.gameObject.GetComponent<NavMeshAgent>();
            _agent.Warp(cachedTransform.position);
        }

        protected override void OnFirstTick()
        {
            base.OnFirstTick();
            _agent.isStopped = false;
            _agent.ResetPath();
            if(destination.Variable != null)
                _agent.SetDestination(destination.Variable.position);

        }

        protected override TaskStatus Update()
        {
            speed.Variable = _agent.velocity.magnitude;
            
            if (destination.Variable == null)
            {
                _agent.isStopped = true;
                _agent.ResetPath();
                return TaskStatus.Failed;
            }
            
            
            if (!_agent.pathPending)
            {
                if (_agent.remainingDistance <= _agent.stoppingDistance)
                {
                    if (!_agent.hasPath || _agent.velocity.sqrMagnitude == 0f)
                    {
                        _agent.ResetPath();
                        return TaskStatus.Succeeded;
                    }
                }
            }
            
            _agent.SetDestination(destination.Variable.position);

            return TaskStatus.Running;
        }
    }
}