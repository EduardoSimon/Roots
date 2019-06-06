using System;
using System.Collections;
using System.Collections.Generic;
using BT;
using BT.Core;
using BT.Editor;
using UnityEngine;

namespace BT.Runtime
{
    [AddComponentMenu("Behavior Tree/BehaviorTree Controller")]
    [HelpURL("https://www.github.com/EduardoSimon")]
    public class BehaviorTreeController : MonoBehaviour
    {
        public enum EUpdateType
        {
            Update,
            LateUpdate,
            FixedUpdate,
            Manual
        }

        public BehaviorTreeGraph treeGraph;

        [TextArea] [SerializeField] private string behaviorTreeDescription;
        [SerializeField] private EUpdateType updateType;
        [SerializeField] private bool startOnEnable = true;
        [SerializeField] private bool pauseOnDisabled = false;
        [SerializeField] private bool restartOnComplete = true;
        [SerializeField] private BTLog.ELogLevel minimunLogLevel;
        
        
        private bool _hasCompletedOnce;
//        private bool _isPaused;
        private BehaviorTree _tree;

        private void OnValidate()
        {
            if (treeGraph == null)
            {
                BTLog.Log("There is a controller without a Behavior graph in the scene.", BTLog.ELogLevel.Warning);
            }
        }

        private void Start()
        {
            BTLog.LogLevel = minimunLogLevel;
            
            _hasCompletedOnce = false;

            if (startOnEnable)
                Init();
        }

        private void Init()
        {
            if (treeGraph != null)
            {
                _tree = treeGraph._tree;
                treeGraph.root.task.controller = this;
            }
        }

        private void Update()
        {
            if (updateType == EUpdateType.Update)
                TickTree();
        }

        private void LateUpdate()
        {
            if (updateType == EUpdateType.LateUpdate)
                TickTree();
        }

        private void FixedUpdate()
        {
            if (updateType == EUpdateType.FixedUpdate)
                TickTree();
        }

        private void TickTree()
        {
            if (_tree == null)
                return;

            if (!restartOnComplete && _hasCompletedOnce)
                return;

            if (treeGraph == null) return;
            
            var status = _tree.Tick(this);

            if(status != TaskStatus.Running)
                _hasCompletedOnce = true;

            if (status == TaskStatus.Running)
                BTLog.Log("The tree at " + gameObject.name + " gameobject returned: " + status, BTLog.ELogLevel.Warning);
            else if(status == TaskStatus.Succeeded)
                BTLog.Log("The tree at " + gameObject.name + " gameobject returned: " + status, BTLog.ELogLevel.Succeded);
            else
                BTLog.Log("The tree at " + gameObject.name + " gameobject returned: " + status, BTLog.ELogLevel.Error);

        }

        private void OnDisable()
        {
            if (!pauseOnDisabled) return;
            
    //        _isPaused = true;
            BTLog.Log("The tree is paused.", BTLog.ELogLevel.Warning);
        }

        private void OnDestroy()
        {
            //reset all the tasks in the tree
            foreach (var nodes in treeGraph.SavedNodes)
            {
                nodes.Task.Reset();
            }
        }

        private void OnEnable()
        {
//            if (pauseOnDisabled)
  //              _isPaused = false;
        }
    }
}