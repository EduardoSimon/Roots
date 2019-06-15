using UnityEngine;
using System.Collections;
using BT;
 
public class IsInFOV : Condition
{
    public float angle = 30;
    
    protected virtual bool isConditionSatisfied()
    {
        
        return false;
    }
}