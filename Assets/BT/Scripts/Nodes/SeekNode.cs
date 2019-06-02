using System;
using System.Collections.Generic;
using BT.Scripts.Core;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class SeekNode : BaseNode
    {
        public GameObjectBlackBoardVariable target;
        public FloatBlackBoardVariable speed;
        
        public override ATask Task
        {
            get => (Seek) task;
            set => task = (Seek) value;
        }

        public override void Init(string id, bool isEntryPoint, bool isRootView, bool isParentView, Action<NodeSocket> OnSocketClicked)
        {
            base.Init(id, isEntryPoint, isRootView, isParentView, OnSocketClicked);
        }

        public override void DrawInspector(Event current)
        {
            base.DrawInspector(current);
            
            target.DrawVariableInspector("Target",current);
            speed.DrawVariableInspector("Speed", current);
        }

        public override void SaveNodeInfo()
        {
            base.SaveNodeInfo();

            Seek seekTask = task as Seek;
            
            if(target.gameObjectVariable != null)
                seekTask.target = target.gameObjectVariable.transform;
            else
            {
                Debug.LogWarning("The seek node has no <b>target</b>. You can add it at runtime or drag it in the editor.");
            }

            seekTask.speed = speed.FloatVariable;
        }
    }
}