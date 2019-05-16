using System;
using BT.Core;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class LogNodeView : BaseNodeView
    {
        private Texture2D _texture2D;
        public StringBlackBoardVariable message;
        public BoolBlackBoardVariable isLogError;

        public override ATask Task
        {
            get
            {
                return task as Log;
            }
            set { task = (Log) value; } }

        public override void Init(string guid, bool isEntryView, bool isParentView)
        {
            base.Init(guid, isEntryView, isParentView);

            _texture2D = Resources.Load<Texture2D>("log_icon");

            message = CreateInstance<StringBlackBoardVariable>();
            message.Init(null,this);
            message.StringVariable = "Enter your log message here.";

            isLogError = CreateInstance<BoolBlackBoardVariable>();
            isLogError.Init(null,this);
            isLogError.BoolVariable = false; 

        }

        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);

            GUI.DrawTexture(new Rect(20 ,20, kNodeWidht - 30, kNodeHeight - 30), _texture2D );
        }

        public override void DrawSockets()
        {
            base.DrawSockets();
        }

        public override void DrawInspector()
        {
            base.DrawInspector();
            message.DrawVariableInspector("Log Message");
            isLogError.DrawVariableInspector("Is Logging an error?");
        }

        public override void SaveNodeInfo()
        {
            base.SaveNodeInfo();

            Log logTask = task as Log;
            
            logTask.message = message.StringVariable;
            logTask.isLogError = isLogError.BoolVariable;

        }
    }
}