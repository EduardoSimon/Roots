using BT.Scripts.Drawers;
using UnityEngine;

namespace BT.Core
{
    [CustomNodeDrawer(typeof(LogNodeView))]
    [SearchMenu("Action/Log")]
    [TaskTooltip("HI IM A LOG")]
    public class Log : AAction
    {
        public int value;
        protected override void OnInitialize()
        {
            base.OnInitialize();
        }

        protected override TaskStatus Update()
        {
            Debug.Log("Hi Im  logging the value: " + value + "at time: " + Time.time);
            return TaskStatus.Succeeded;
        }

        protected override void OnTerminate(TaskStatus taskStatus)
        {
            base.OnTerminate(taskStatus);
        }
    }
}