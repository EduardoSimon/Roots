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
        
        protected override void OnInitialize()
        {
            base.OnInitialize();
            Debug.Log("Initialized Seek Action.");
        }

        protected override TaskStatus Update()
        {
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