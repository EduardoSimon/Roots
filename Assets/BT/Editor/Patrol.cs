using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace BT
{
    [SearchMenu("Action/Patrol")]
    [CustomNodeDrawer(typeof(AAction))]
    public class Patrol : AAction
    {
        protected override void OnInitialize()
        {
            base.OnInitialize();
            Debug.Log("Initialized Patrol Action");
        }

        protected override TaskStatus Update()
        {
            Debug.Log("Tick Patrol Action");
            return base.Update();
        }

        protected override void OnTerminate(TaskStatus taskStatus)
        {
            Debug.Log("Terminate Patrol Action");
            base.OnTerminate(taskStatus);
        }
    }
    

}
