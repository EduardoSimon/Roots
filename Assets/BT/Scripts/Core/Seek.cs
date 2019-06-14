using BT.Runtime;
using BT.Scripts.Drawers;
using BT.Scripts.Nodes;
using UnityEngine;

namespace BT.Scripts.Core
{
    [CustomNodeDrawer(typeof(LeafNode))]
    [SearchTaskPath("Action/Seek")]
    [TaskTooltip("The Seek Task follows its target until reaching a minimum distance.")]
    public class Seek : Action
    {
        public Transform target;
        public float speed = 10f;
        
        protected override void OnFirstTick()
        {
            Debug.Log("Initialized Seek Action.");
            base.OnFirstTick();
        }

        protected override TaskStatus Update()
        {
            var transform = _manager.CurrentTickingController.transform;
            var position = transform.position;
            Vector3 dir = target.position - position;
            position += speed * Time.deltaTime * dir.normalized;
            transform.position = position;

            if (Vector3.Distance(transform.position, target.position) < 1f)
                return TaskStatus.Succeeded;
            else
            {
                return TaskStatus.Running;
            }
        }
    }
}