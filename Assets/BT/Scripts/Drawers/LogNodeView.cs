using BT.Core;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class LogNodeView : BaseNodeView
    {
        private Texture2D _texture2D;
        [SerializeField] public BoolBlackBoardVariable isLogError;
        [SerializeField] public StringBlackBoardVariable message;


        public override ATask Task
        {
            get => task as Log;
            set => task = (Log) value;
        }

        public override void Init(string guid,bool isEntryPoint, bool isRootView, bool isParentView)
        {
            base.Init(guid, isEntryPoint, isRootView, isParentView);

            if (_texture2D == null)
                _texture2D = Resources.Load<Texture2D>("log_icon");

            message = CreateInstance<StringBlackBoardVariable>();
            message.Init(message == null ? null : message.guid);

            message.node = this;

            if (!variables.Contains(message))
                variables.Add(message);

            message.StringVariable = "Enter your log message here.";

            isLogError = CreateInstance<BoolBlackBoardVariable>();
            isLogError.Init(isLogError == null ? null : isLogError.guid);
            isLogError.node = this;
            
            if(!variables.Contains(isLogError))
                variables.Add(isLogError);
            
            isLogError.BoolVariable = false;
            
        }

        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);

            GUI.DrawTexture(new Rect(20, 20, kNodeWidht - 30, kNodeHeight - 30), _texture2D);
        }

        public override void DrawSockets()
        {
            base.DrawSockets();
        }

        public override void DrawInspector()
        {
            base.DrawInspector();
            message.DrawVariableInspector("Log Message");
            //isLogError.DrawVariableInspector("Is Logging an error?");
        }

        public override void SaveNodeInfo()
        {
            base.SaveNodeInfo();

            var logTask = task as Log;

            logTask.message = message.StringVariable;
            //logTask.isLogError = isLogError.BoolVariable;
        }
    }
}