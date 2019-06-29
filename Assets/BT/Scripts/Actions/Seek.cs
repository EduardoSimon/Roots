using BT.Runtime;
using BT.Scripts.Drawers;
using BT.Scripts.Nodes;
using UnityEngine;

namespace BT.Scripts.Core
{
    [CustomNodeDrawer(typeof(ActionNode))]
    [SearchTaskPath("Action/Seek")]
    [TaskTooltip("The Seek Task follows its target until reaching a minimum distance.")]
    public class Seek : Action
    {
        public TransformBlackBoardVariable target;
        public FloatBlackBoardVariable speed;
        
        protected override void OnFirstTick()
        {
            Debug.Log("Initialized Seek Action.");
            base.OnFirstTick();
        }

        protected override TaskStatus Update()
        {
            if (target.Variable == null)
                return TaskStatus.Failed;
            
            var position = cachedTransform.position;
            Vector3 dir = target.Variable.position - position;
            position += speed.Variable * Time.deltaTime * dir.normalized;
            cachedTransform.position = position;

            if (Vector3.Distance(cachedTransform.position, target.Variable.position) < 1f)
                return TaskStatus.Succeeded;

            return TaskStatus.Running;
        }
    }
}