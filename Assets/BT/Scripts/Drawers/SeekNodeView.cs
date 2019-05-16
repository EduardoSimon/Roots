using BT.Scripts.Core;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    
    public class SeekNodeView : BaseNodeView
    {
        public GameObjectBlackBoardVariable target;
        
        public override ATask Task
        {
            get => (Seek) task;
            set => task = (Seek) value;
        }

        public override void Init(string id, bool isEntryView, bool isParentView)
        {
            base.Init(id, isEntryView, isParentView);

            if (target == null)
            {
                target = CreateInstance<GameObjectBlackBoardVariable>();
                target.Init(null,this);
            }
            else
            {
                target.Init(target.Guid,this);
            }

        }

        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);
        }

        public override void DrawSockets()
        {
            base.DrawSockets();
        }

        public override void DrawInspector()
        {
            base.DrawInspector();
            
            target.DrawVariableInspector("Target");
        }

        public override void SaveNodeInfo()
        {
            base.SaveNodeInfo();

            Seek seekTask = task as Seek;

            seekTask.target = target.ObjectVariable.transform;
        }
    }
    
    
}