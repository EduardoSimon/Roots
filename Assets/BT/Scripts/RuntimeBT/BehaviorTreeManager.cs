using System;
using System.Collections;
using System.Collections.Generic;
using BT.Scripts;
using RotaryHeart.Lib.SerializableDictionary;
using UnityEngine;
using UnityEngine.Serialization;

namespace BT.Runtime
{
    [AddComponentMenu("Behavior Tree/BehaviorTree Manager")]
    [HelpURL("https://www.github.com/EduardoSimon")]
    public class BehaviorTreeManager : MonoBehaviour
    {
        [System.Serializable]
        public enum ETickMode
        {
            CPUCycles,
            Milliseconds,
            UnityTick,
            Manual
        }

        public BehaviorTreeController CurrentTickingController;
        public static BehaviorTreeManager Instance = null;

        public ETickMode TickMode = ETickMode.UnityTick;
        
        [Tooltip("The update frequency of the tree in milliseconds.")]
        public float UpdateMsFreq = 5;
        public float UpdateCPUCyclesFreq;
        
        [HideInInspector] public ReferenceDictionary references;
        public List<BehaviorTreeController> _enabledTrees;
        
        private BehaviorTreeController[] _behaviorTreeControllers;
        private float _timer = 0f;
        [SerializeField]private bool _isDebugMode;

        public bool isDebugMode
        {
            get { return _isDebugMode; }
            set { _isDebugMode = value; }
        }

        private void OnEnable()
        {
            _enabledTrees = new List<BehaviorTreeController>();

            if (references == null)
                references = new ReferenceDictionary();
        }

        private void Awake()
        {
            if (Instance == null)
                Instance = this;
            else if (Instance != null && Instance != this)
                Destroy(this.gameObject);
        }

        void Start()
        {
            _behaviorTreeControllers = FindObjectsOfType<BehaviorTreeController>();

            foreach (var controller in _behaviorTreeControllers)
            {
                if (controller.startOnEnable)
                    controller.Init();
            }
        }

        private void Update()
        {
            _timer += Time.deltaTime;
            
            if (TickMode == ETickMode.UnityTick)
            {
                foreach (var tree in _enabledTrees)
                {
                    if (tree.updateType == BehaviorTreeController.EUpdateType.Update)
                        tree.TickTree();
                }
            }
            else if (TickMode == ETickMode.Milliseconds)
            {
                if (_timer > UpdateMsFreq / 1000)
                {
                    _timer = 0f;
                    
                    foreach (var tree in _enabledTrees)
                    {
                        if (tree.updateType == BehaviorTreeController.EUpdateType.Update)
                        {
                            tree.TickTree();
                        }
                    }
                }
            }
        }

        private void LateUpdate()
        {
            foreach (var tree in _enabledTrees)
            {
                if (tree.updateType == BehaviorTreeController.EUpdateType.LateUpdate)
                    tree.TickTree();
            }
        }

        private void FixedUpdate()
        {
            foreach (var tree in _enabledTrees)
            {
                if (tree.updateType == BehaviorTreeController.EUpdateType.FixedUpdate)
                    tree.TickTree();
            }
        }

        [Serializable]
        public class ReferenceDictionary : SerializableDictionaryBase<string, GameObject>
        {
        }
    }
}