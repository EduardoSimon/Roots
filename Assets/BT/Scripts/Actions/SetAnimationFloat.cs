using UnityEngine;
using System.Collections;
using BT;
using BT.Runtime;
using BT.Scripts;
using BT.Scripts.Nodes;

[SearchTaskPath("Action/Animation/SetAnimationFloat")]
[TaskTooltip("Sets the value of an animator parameter. If the parameter doesn´t exist, the taks fails.")]
[CustomNodeDrawer(typeof(ActionNode))]
public class SetAnimationFloat : Action
{
    public StringBlackBoardVariable FloatParamName;
    public FloatBlackBoardVariable value;

    private Animator _animator;
    private int paramHashedName = 0; 
    public override void Initialize(BehaviorTreeController behaviorTreeController)
    {
        base.Initialize(behaviorTreeController);
        _animator = cachedTransform.GetComponentInChildren<Animator>();
        paramHashedName = Animator.StringToHash(FloatParamName.Variable);
    }

    protected override TaskStatus Update()
    {
        if (paramHashedName == 0)
            return TaskStatus.Failed;

        if (value != null)
        {
            _animator.SetFloat(paramHashedName,value.Variable);
            return TaskStatus.Succeeded;
        }

        return Status;
    }
}