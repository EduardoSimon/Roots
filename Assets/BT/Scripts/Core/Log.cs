using BT.Scripts;
using BT.Scripts.Drawers;
using UnityEngine;

namespace BT.Core
{
    [CustomNodeDrawer(typeof(LogNode))]
    [SearchTaskPath("Action/Log")]
    [TaskTooltip("HI IM A LOG")]
    public class Log : Action
    {
        public string message;
        public bool isLogError;
        
        protected override void OnFirstTick()
        {
            base.OnFirstTick();
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