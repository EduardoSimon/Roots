using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace BT.Runtime
{
    [AddComponentMenu("Behavior Tree/BehaviorTree Manager")]
    [HelpURL("https://www.github.com/EduardoSimon")]
    public class BehaviorTreeManager : MonoBehaviour
    {
        public static BehaviorTreeManager Instance = null;
        
        private BehaviorTreeController[] _behaviorTreeControllers;

        private void Awake()
        {
            if (Instance == null)
                Instance = this;
            else if(Instance != null && Instance != this)
                Destroy(this.gameObject);
        }

        void Start()
        {
            _behaviorTreeControllers = FindObjectsOfType<BehaviorTreeController>();

            for (int i = 0; i < _behaviorTreeControllers.Length; i++)
            {
                /*
                if (!_behaviorTreeControllers[i].HasRoot)
                {
                    Debug.Log("There is no root in the BT controlled attached.", _behaviorTreeControllers[i].gameObject);
                }
                else
                {
                    _behaviorTreeControllers[i].Init();
                }*/
            }
        }

    }
  

}
