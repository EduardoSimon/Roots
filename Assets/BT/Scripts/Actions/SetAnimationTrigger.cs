using UnityEngine;
using System.Collections;
using BT;
using BT.Runtime;
using BT.Scripts;

[SearchTaskPath("Action/Animation/SetAnimationTrigger")]
public class SetAnimationTrigger : Action
{
    public StringBlackBoardVariable ParamName;
    private Animator _animator;

    private int paramHash = -1;
    
    public override void Initialize(BehaviorTreeController behaviorTreeController)
    {
        base.Initialize(behaviorTreeController);
        _animator = cachedTransform.GetComponentInChildren<Animator>();
        paramHash = Animator.StringToHash(ParamName.Variable);
    }

    protected override TaskStatus Update()
    {
        if (paramHash == -1)
        {
            return TaskStatus.Failed;
        }
        
        _animator.SetTrigger(paramHash);
        return TaskStatus.Succeeded;
    }
}