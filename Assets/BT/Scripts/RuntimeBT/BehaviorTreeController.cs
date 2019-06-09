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
        public ATask currentTickingTask;
        [TextArea] [SerializeField] private string behaviorTreeDescription;
        [SerializeField] public EUpdateType updateType;
        [SerializeField] public bool startOnEnable = true;
        [SerializeField] private bool pauseOnDisabled = false;
        [SerializeField] private bool restartOnComplete = true;
        [SerializeField] private BTLog.ELogLevel minimunLogLevel;


        private BTDebugCanvasController _debugCanvasController;

        private bool _hasCompletedOnce;

        private BTManager _manager;

//        private bool _isPaused;
        private BehaviorTree _tree;

        private void OnValidate()
        {
            if (treeGraph == null)
            {
                BTLog.Log("There is a controller without a Behavior graph in the scene.", BTLog.ELogLevel.Warning);
            }
        }

        private void Awake()
        {
            _debugCanvasController = GetComponentInChildren<BTDebugCanvasController>();
            _manager = BTManager.Instance;
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

                if (updateType == EUpdateType.Update)
                    _manager._updateTrees.Add(this);
                else if (updateType == EUpdateType.FixedUpdate)
                    _manager._fixedUpdateTrees.Add(this);
                else if (updateType == EUpdateType.LateUpdate)
                    _manager._lateUpdateTrees.Add(this);

                InitializeTasks(_tree.RootTask);
            }
            else
            {
                BTLog.Log("The tree is null and couldn't be initialized.", BTLog.ELogLevel.Warning);
            }
        }

        private void InitializeTasks(ATask task)
        {
            if (task is IComposite compositeNode)
            {
                for (int i = 0; i < compositeNode.Children.Count; i++)
                {
                    InitializeTasks(compositeNode.Children[i]);
                }
            }

            task.OnTreeInitialize();
        }

        public void TickTree()
        {
            if (_tree == null)
                return;

            if (!restartOnComplete && _hasCompletedOnce)
                return;

            if (treeGraph == null) return;

            _manager.CurrentTickingController = this;

            var status = _tree.Tick();

            if (_manager.isDebugMode)
                _debugCanvasController.SetDebugInfo(status, currentTickingTask.name);

            if (status != TaskStatus.Running)
                _hasCompletedOnce = true;

            if (status == TaskStatus.Running)
                BTLog.Log("The tree at " + gameObject.name + " gameobject returned: " + status,
                    BTLog.ELogLevel.Warning);
            else if (status == TaskStatus.Succeeded)
                BTLog.Log("The tree at " + gameObject.name + " gameobject returned: " + status,
                    BTLog.ELogLevel.Succeded);
            else
                BTLog.Log("The tree at " + gameObject.name + " gameobject returned: " + status, BTLog.ELogLevel.Error);
        }

        private void OnDisable()
        {
            if (!pauseOnDisabled) return;
            _manager._updateTrees.Remove(this);

            //        _isPaused = true;
            BTLog.Log("The tree is paused.", BTLog.ELogLevel.Warning);
        }

        private void OnDestroy()
        {
            if (treeGraph != null && treeGraph.SavedNodes != null)
            {
                //reset all the tasks in the tree
                foreach (var nodes in treeGraph.SavedNodes)
                {
                    nodes.Task.Reset();
                }
            }
        }
    }
}