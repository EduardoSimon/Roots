using System.Data;
using UnityEngine;

namespace BT_Core
{
    public enum BehaviourStatus
    {
        Succeeded,
        Failed,
        Running
    }
    
    public class BehaviourTree : ScriptableObject
    {
        public Behaviour RootNode { get; private set; }

        public BehaviourStatus Tick()
        {
            return RootNode.Update();
        }

        public void AddRoot(Behaviour behaviour)
        {
            if(behaviour == null)
                throw new NoNullAllowedException("Cant add a null root node.");
            RootNode = behaviour;
        }
    }
}