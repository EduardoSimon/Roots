using UnityEngine;

namespace BT.Scripts
{
    public class BlackBoardVariable : ScriptableObject
    {
        public BaseNodeView node;
        
        public  virtual void SaveBlackboardVariable() {}
    }
}