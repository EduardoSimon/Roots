using System;
using System.Collections;
using System.Collections.Generic;
using BT.Scripts;
using RotaryHeart.Lib.SerializableDictionary;
using UnityEngine;

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

        public static BehaviorTreeController currentTickingController;
        public static BehaviorTreeManager Instance = null;

        public ETickMode TickMode = ETickMode.UnityTick;
        
        [Tooltip("The update frequency of the tree in milliseconds.")]
        public float updateFreq = 5;
        
        [HideInInspector] public ReferenceDictionary references;
        public List<BehaviorTreeController> _enabledTrees;
        
        private BehaviorTreeController[] _behaviorTreeControllers;
        private float timer = 0f;
        

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
            timer += Time.deltaTime;
            
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
                if (timer > updateFreq / 1000)
                {
                    timer = 0f;
                    
                    foreach (var tree in _enabledTrees)
                    {
                        if (tree.updateType == BehaviorTreeController.EUpdateType.Update)
                        {
                            tree.TickTree();
                            Debug.Log("Tick at " + Time.time);
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