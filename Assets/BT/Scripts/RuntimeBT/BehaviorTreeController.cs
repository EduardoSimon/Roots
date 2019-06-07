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
        [SerializeField] public EUpdateType updateType;
        [SerializeField] public bool startOnEnable = true;
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
        }

        public void Init()
        {
            if (treeGraph != null)
            {
                _tree = treeGraph._tree;
                BehaviorTreeManager.Instance._enabledTrees.Add(this);
            }
            else
            {
                BTLog.Log("The tree is null and couldn't be initialized.", BTLog.ELogLevel.Warning);
            }
        }

        public void TickTree()
        {
            if (_tree == null)
                return;

            if (!restartOnComplete && _hasCompletedOnce)
                return;

            if (treeGraph == null) return;

            BehaviorTreeManager.currentTickingController = this;
            
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
            BehaviorTreeManager.Instance._enabledTrees.Remove(this);
            
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
    }
}