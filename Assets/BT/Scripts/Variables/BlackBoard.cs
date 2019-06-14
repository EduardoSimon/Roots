using System.Collections.Generic;
using BT.Scripts;
using UnityEngine;

[CreateAssetMenu(menuName = "BT/Blackboard", fileName = "Default BlackBoard", order = 1)]
public class BlackBoard : ScriptableObject
{
    public string BlackboardName;
    private List<BlackBoardVariable> _variables;
}