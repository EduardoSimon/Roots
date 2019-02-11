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
        Invalid
    }
    
    public class BehaviourTree : ScriptableObject
    {
        public Action RootNode { get; private set; }

        public TaskStatus Tick()
        {
            return RootNode.Tick();
        }

        public void AddRoot(Action action)
        {
            if(action == null)
                throw new NoNullAllowedException("Cant add a null root node.");
            RootNode = action;
        }
    }
}