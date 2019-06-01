using System;
using System.Collections;
using System.Collections.Generic;
using BT;
using BT.Editor;
using UnityEngine;
using UnityEngine.SpatialTracking;

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

        private bool _hasCompletedOnce;
//        private bool _isPaused;
        private BehaviorTree _tree;


        private void Start()
        {
            _hasCompletedOnce = false;

            if (startOnEnable)
                Init();
        }

        private void Init()
        {
            if (treeGraph != null)
                _tree = treeGraph._tree;
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
            
            var status = _tree.Tick();

            _hasCompletedOnce = true;

            BTLog.Log("The tree at " + gameObject.name + " gameobject returned: " + status,
                status != TaskStatus.Succeeded ? BTLog.ELogLevel.Error : BTLog.ELogLevel.Log);
        }

        private void OnDisable()
        {
            if (!pauseOnDisabled) return;
            
    //        _isPaused = true;
            BTLog.Log("The tree is paused.", BTLog.ELogLevel.Warning);
        }

        private void OnEnable()
        {
//            if (pauseOnDisabled)
  //              _isPaused = false;
        }
    }
}