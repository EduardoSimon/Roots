using BT.Scripts.Drawers;
using UnityEngine;

namespace BT.Scripts.Core
{
    [CustomNodeDrawer(typeof(SeekNode))]
    [SearchTaskPath("Action/Seek")]
    [TaskTooltip("The Seek Task follows its target until reaching a minimum distance.")]
    public class Seek : AAction
    {
        public Transform target;
        public float speed = 10f;

        private Transform _transform = null;
        
        protected override void OnInitialize()
        {
            base.OnInitialize();
            Debug.Log("Initialized Seek Action.");
            _transform = controller.transform;
        }

        protected override TaskStatus Update()
        {
            _transform = controller.transform;
            var position = _transform.position;
            Vector3 dir = target.position - position;
            position += speed * Time.deltaTime * dir.normalized;
            _transform.position = position;


            if (Vector3.Distance(_transform.position, target.position) < 1f)
                return TaskStatus.Succeeded;
            else
            {
                return TaskStatus.Running;
            }
            Debug.Log("Chasing: " + target.gameObject.name);
            return base.Update();
        }

        protected override void OnTerminate(TaskStatus taskStatus)
        {
            _transform = null;
            base.OnTerminate(taskStatus);
            //Debug.Log("Terminated Seek Action");
        }
    }
}