using UnityEngine;

namespace BT
{
    [SearchMenu("Action/Patrol")]
    [CustomNodeDrawer(typeof(Action))]
    public class Patrol : Action
    {
        protected override void OnFirstTick()
        {
            base.OnFirstTick();
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