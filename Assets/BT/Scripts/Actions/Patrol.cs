using BT.Runtime;
using BT.Scripts;
using BT.Scripts.Nodes;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine;
using UnityEngine.AI;

namespace BT
{
    [SearchTaskPath("Action/Patrol")]
    [CustomNodeDrawer(typeof(ActionNode))]
    public class Patrol : Action
    {
        public TransformBlackBoardVariable point1;
        public TransformBlackBoardVariable point2;
        public TransformBlackBoardVariable point3;
        public TransformBlackBoardVariable point4;
        public TransformBlackBoardVariable point5;
        public TransformBlackBoardVariable point6;

        public FloatBlackBoardVariable patrolVelocity;

        private Transform[] waypoints;
        private NavMeshAgent _agent;
        private int currentIndex;

        public override void Initialize(BehaviorTreeController behaviorTreeController)
        {
            base.Initialize(behaviorTreeController);
            waypoints = new Transform[]
                {point1.Variable, point2.Variable, point3.Variable, point4.Variable, point5.Variable, point6.Variable};
            _agent = cachedTransform.GetComponent<NavMeshAgent>();
        }

        protected override void OnFirstTick()
        {
            base.OnFirstTick();

            if (waypoints[currentIndex] != null)
            {
                _agent.SetDestination(waypoints[0].position);
                patrolVelocity.Variable = _agent.velocity.normalized.magnitude;
            }

            Debug.Log("Initialized Patrol Action");
        }

        protected override TaskStatus Update()
        {
            patrolVelocity.Variable = _agent.velocity.normalized.magnitude;
            
            if (waypoints[currentIndex] != null)
            {
                // Check if we've reached the destination
                if (!_agent.pathPending)
                {
                    if (_agent.remainingDistance <= _agent.stoppingDistance)
                    {
                        if (!_agent.hasPath || _agent.velocity.sqrMagnitude == 0f)
                        {
                            currentIndex += 1;

                            if (currentIndex == waypoints.Length)
                                currentIndex = 0;

                            if (waypoints[currentIndex] != null)
                            {
                                _agent.SetDestination(waypoints[currentIndex].position);
                            }
                            else
                            {
                                while (waypoints[currentIndex] == null)
                                {
                                    currentIndex++;

                                    if (currentIndex == waypoints.Length)
                                        currentIndex = 0;
                                }
                            }
                        }
                    }
                }
            }

            return base.Update();
        }

        protected override void OnTerminate(TaskStatus taskStatus)
        {
            Debug.Log("Terminate Patrol Action");
            base.OnTerminate(taskStatus);
        }
    }
}