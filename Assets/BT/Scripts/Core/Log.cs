using BT.Scripts;
using BT.Scripts.Drawers;
using UnityEngine;

namespace BT.Core
{
    [CustomNodeDrawer(typeof(LogNode))]
    [SearchMenu("Action/Log")]
    [TaskTooltip("HI IM A LOG")]
    public class Log : AAction
    {
        public string message;
        public bool isLogError;
        
        protected override void OnInitialize()
        {
            base.OnInitialize();
        }

        protected override TaskStatus Update()
        {
            if(isLogError)
                Debug.LogError(message);
            else
                Debug.Log(message);
            
            return TaskStatus.Succeeded;
        }

        protected override void OnTerminate(TaskStatus taskStatus)
        {
            base.OnTerminate(taskStatus);
        }
    }
}