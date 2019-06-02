using BT.Scripts.Drawers;
using UnityEngine;

namespace BT.Scripts.Core
{
    [CustomNodeDrawer(typeof(SeekNode))]
    [SearchMenu("Action/Seek")]
    [TaskTooltip("The Seek Task follows its target until reaching a minimum distance.")]
    public class Seek : AAction
    {
        public Transform target;
        public float speed = 10f;

        private Transform _transform;
        
        protected override void OnInitialize()
        {
            base.OnInitialize();
            Debug.Log("Initialized Seek Action.");
            _transform = controller.transform;
        }

        protected override TaskStatus Update()
        {
            var position = _transform.position;
            Vector3 dir = target.position - position;
            position += speed * Time.deltaTime * dir.normalized;
            _transform.position = position;

            Debug.Log("Chasing: " + target.gameObject.name);
            return base.Update();
        }

        protected override void OnTerminate(TaskStatus taskStatus)
        {
            base.OnTerminate(taskStatus);
            //Debug.Log("Terminated Seek Action");
        }
    }
}