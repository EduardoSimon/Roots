using System;
using System.Collections.Generic;
using BT.Core;
using BT.Editor;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class LogNode : BaseNode
    {
        private Texture2D _texture2D;
        [SerializeField] public BoolBlackBoardVariable isLogError;
        [SerializeField] public StringBlackBoardVariable message;


        public override ATask Task
        {
            get => task as Log;
            set => task = (Log) value;
        }

        public override void Init(string guid,bool isEntryPoint, bool isRootView, bool isParentView, Action<NodeSocket> OnSocketClicked)
        {
            base.Init(guid, isEntryPoint, isRootView, isParentView, OnSocketClicked);

            if (_texture2D == null)
                _texture2D = Resources.Load<Texture2D>("log_icon");
        }

        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);

            GUI.DrawTexture(new Rect(20, 20, BTConstants.kNodeWidht - 30, BTConstants.kNodeHeight - 30), _texture2D);
        }

        public override void DrawSockets()
        {
            base.DrawSockets();
        }

        public override void DrawInspector(Event current)
        {
            base.DrawInspector(current);
            message.DrawVariableInspector("Log Message",Event.current);
            //isLogError.DrawVariableInspector("Is Logging an error?");
        }

        public override void SaveNodeInfo()
        {
            base.SaveNodeInfo();

            var logTask = task as Log;

            logTask.message = message.StringVariable;
            //logTask.isLogError = isLogError.BoolVariable;
        }

        public override void CopyVariables(List<BlackBoardVariable> previousVariables)
        {
            base.CopyVariables(previousVariables);

            if (previousVariables == null)
            {
                message = CreateInstance<StringBlackBoardVariable>();
                AssetDatabase.AddObjectToAsset(message,this);
                AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(this));
                message.node = this;
                variables.Add(message);
                
                isLogError = CreateInstance<BoolBlackBoardVariable>();
                AssetDatabase.AddObjectToAsset(isLogError,this);
                AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(this));
                isLogError.node = this;
                variables.Add(isLogError);
            }
            else
            {
                message = (StringBlackBoardVariable)previousVariables[0];
                isLogError = (BoolBlackBoardVariable)previousVariables[1];
            }
            
            message.Init(previousVariables == null ? null : message.guid);
            isLogError.Init(previousVariables == null ? null : isLogError.guid);
        }
    }
}