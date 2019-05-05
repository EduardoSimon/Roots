using System;
using BT.Core;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class LogNodeView : BaseNodeView
    {

        public override void Init(string guid, bool isEntryView, bool isParentView)
        {
            base.Init(guid, isEntryView, isParentView);
        }

        public override void DrawWindow(int id)
        {
            base.DrawWindow(id);

            Log LogTask = (Log) task;
            LogTask.value = EditorGUI.IntField(
                new Rect(10, 20, 30 , 20), 
                LogTask.value);
        }

        public override void DrawSockets()
        {
            base.DrawSockets();
        }
    }
}