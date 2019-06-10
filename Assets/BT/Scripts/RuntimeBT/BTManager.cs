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
    public class BTManager : MonoBehaviour
    {
        [System.Serializable]
        public enum ETickMode
        {
            Milliseconds,
            UnityTick,
            Manual
        }

        public BehaviorTreeController CurrentTickingController;
        public static BTManager Instance = null;

        public ETickMode TickMode = ETickMode.UnityTick;

        [Tooltip("The update frequency of the tree in milliseconds.")]
        public float UpdateMsFreq = 5;

        [HideInInspector] public ReferenceDictionary references;

        public List<BehaviorTreeController> _updateTrees;
        public List<BehaviorTreeController> _lateUpdateTrees;
        public List<BehaviorTreeController> _fixedUpdateTrees;


        private BehaviorTreeController[] _behaviorTreeControllers;
        private float _timer = 0f;
        [SerializeField] private bool _isDebugMode;

        public bool isDebugMode
        {
            get { return _isDebugMode; }
            set { _isDebugMode = value; }
        }

        private void OnEnable()
        {
            _updateTrees = new List<BehaviorTreeController>();

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
            switch (TickMode)
            {
                case ETickMode.UnityTick:
                {
                    foreach (var tree in _updateTrees)
                    {
                        tree.TickTree();
                    }

                    break;
                }

                case ETickMode.Milliseconds:
                {
                    _timer += Time.deltaTime;

                    if (_timer > UpdateMsFreq / 1000)
                    {
                        _timer = 0f;

                        foreach (var tree in _updateTrees)
                        {
                            tree.TickTree();
                        }
                    }

                    break;
                }
            }
        }

        private void LateUpdate()
        {
            switch (TickMode)
            {
                case ETickMode.UnityTick:
                {
                    foreach (var tree in _lateUpdateTrees)
                    {
                        tree.TickTree();
                    }

                    break;
                }

                case ETickMode.Milliseconds:
                {
                    _timer += Time.deltaTime;

                    if (_timer > UpdateMsFreq / 1000)
                    {
                        _timer = 0f;

                        foreach (var tree in _lateUpdateTrees)
                        {
                            tree.TickTree();
                        }
                    }

                    break;
                }
            }
        }

        private void FixedUpdate()
        {
            switch (TickMode)
            {
                case ETickMode.UnityTick:
                {
                    foreach (var tree in _fixedUpdateTrees)
                    {
                        tree.TickTree();
                    }

                    break;
                }

                case ETickMode.Milliseconds:
                {
                    _timer += Time.deltaTime;

                    if (_timer > UpdateMsFreq / 1000)
                    {
                        _timer = 0f;

                        foreach (var tree in _fixedUpdateTrees)
                        {
                            tree.TickTree();
                        }
                    }

                    break;
                }
            }
        }

        [Serializable]
        public class ReferenceDictionary : SerializableDictionaryBase<string, GameObject>
        {
        }
    }
}