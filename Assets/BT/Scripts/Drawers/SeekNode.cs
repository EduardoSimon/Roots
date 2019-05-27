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
        }

        public override void CopyVariables(List<BlackBoardVariable> previousVariables)
        {
            var instance = CreateInstance<GameObjectBlackBoardVariable>();
            AssetDatabase.AddObjectToAsset(instance,this);
            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(this));
            instance.node = this;

            if (previousVariables != null)
                target = (GameObjectBlackBoardVariable)previousVariables[0];
            
            instance.Init(target == null ? null : target.guid);

            
            if (target != null )
            {
                AssetDatabase.RemoveObjectFromAsset(target);
                instance.gameObjectVariable = target.gameObjectVariable;
            }
            
            target = instance;
            variables.Add(instance);
            
        }
    }
    
    
}