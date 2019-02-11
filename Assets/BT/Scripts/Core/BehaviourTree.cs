using System.Data;
using UnityEngine;

namespace BT_Core
{
    public enum TaskStatus
    {
        Succeeded,
        Failed,
        Running,
        NonInitialized,
        Invalid,
        Aborted
    }
    
    public class BehaviourTree : ScriptableObject
    {
        public ATask RootNode { get; private set; }

        public TaskStatus Tick()
        {
            return RootNode.Tick();
        }

        public void AddRoot(ATask action)
        {
            RootNode = action ?? throw new NoNullAllowedException("Cant add a null root node.");
        }
    }
}