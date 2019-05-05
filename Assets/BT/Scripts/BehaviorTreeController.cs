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
            Update, LateUpdate, FixedUpdate, Manual
        }
    
        public BehaviorTreeGraph TreeGraph;
    
        [TextArea]
        [SerializeField] private string BehaviorTreeDescription;
        [SerializeField] private EUpdateType UpdateType;
        [SerializeField] private bool StartOnEnable = true;
        [SerializeField] private bool PauseOnDisabled = false;
        [SerializeField] private bool RestartOnComplete = false;

        private BehaviorTree _tree;


        private void Start()
        {
            Init();
        }

        public void Init()
        {
            if(TreeGraph != null)
                _tree = TreeGraph._tree;
        }

        private void Update()
        {
            if(TreeGraph != null)
                Debug.Log(_tree.Tick());
        }
    }
}
