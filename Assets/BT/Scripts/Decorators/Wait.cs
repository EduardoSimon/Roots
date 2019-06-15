using System;
using UnityEngine;
using System.Collections;
using BT;
using BT.Editor;
using BT.Scripts.Nodes;

[SearchTaskPath("Decorator/Wait")]
[TaskTooltip("Wait for a certain number of seconds.")]
[CustomNodeDrawer(typeof(WaitDecoratorNode))]
public class Wait : Decorator
{
    private float timer;
    public float WaitTime;
    private float lastTime;

    protected override void OnFirstTick()
    {
        base.OnFirstTick();
        timer = 0;
        lastTime = Time.time + Time.deltaTime;
    }

    protected override TaskStatus Update()
    {
        float diff = Math.Abs(Time.time - lastTime);
        timer += diff;
        lastTime = Time.time;
        return timer >= WaitTime ? TaskStatus.Succeeded : TaskStatus.Running;
    }

    protected override void OnTerminate(TaskStatus status)
    {
        base.OnTerminate(status);
        timer = 0;
        status = TaskStatus.NonInitialized;
    }
}