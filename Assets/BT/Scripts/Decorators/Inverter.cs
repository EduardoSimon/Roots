using UnityEngine;
using System.Collections;
using BT;
 
[SearchTaskPath("Decorator/Inverter")]
public class Inverter : Decorator
{
    protected override TaskStatus Update()
    {
        if (child != null)
        {
            TaskStatus childStatus = child.Tick();

            switch (childStatus)
            {
                case TaskStatus.Succeeded:
                    return TaskStatus.Failed;
                case TaskStatus.Failed:
                    return TaskStatus.Succeeded;
                case TaskStatus.Running:
                    return TaskStatus.Running;
            }
        }
        
        return TaskStatus.Invalid;
    }
}