using System;
using System.Collections.Generic;
using BT.Scripts.Core;
using BT.Scripts.Nodes;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class SeekNode : LeafNode
    {
        public GameObjectBlackBoardVariable target;
        public FloatBlackBoardVariable speed;
        
        /*
        public override ATask Task
        {
            get => (Seek) _task;
            set => _task = (Seek) value;
        }*/

        public override void SaveNodeData()
        {
            base.SaveNodeData();
            
            Seek seekTask = _task as Seek;
            
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