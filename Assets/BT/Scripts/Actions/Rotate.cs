using UnityEngine;
using System.Collections;
using BT;
using BT.Scripts;
using BT.Scripts.Nodes;

[SearchTaskPath("Action/RotateBy")]
[CustomNodeDrawer(typeof(ActionNode))]
[TaskTooltip("Rotates the transform by a given value for a given time. While is rotating the status will be Running.")]
public class Rotate : Action
{
    public FloatBlackBoardVariable degrees;
    public BoolBlackBoardVariable rotateX;
    public BoolBlackBoardVariable rotateY;
    public BoolBlackBoardVariable rotateZ;

    public FloatBlackBoardVariable degPerSecond;

    private Quaternion targetRotation;

    protected override void OnFirstTick()
    {
        base.OnFirstTick();
        Vector3 angles = cachedTransform.localRotation.eulerAngles;
        
        targetRotation = Quaternion.Euler(new Vector3(rotateX.Variable ? angles.x + degrees.Variable : angles.x,
            rotateY.Variable ? angles.y + degrees.Variable : angles.y,
            rotateZ.Variable ? angles.z + degrees.Variable : angles.z));
        
    }

    protected override TaskStatus Update()
    {
        if (Quaternion.Angle(cachedTransform.localRotation, targetRotation) < 0.01f)
            return TaskStatus.Succeeded;
        
        cachedTransform.localRotation = Quaternion.RotateTowards(cachedTransform.localRotation,targetRotation, degPerSecond.Variable *  Time.deltaTime);
        
        return TaskStatus.Running;
    }
}