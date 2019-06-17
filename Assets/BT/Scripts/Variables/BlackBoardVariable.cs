using System;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    [System.Serializable]
    public class BlackBoardVariable : ScriptableObject
    {
        public int bbIndex;
        public bool isLocalVariable = true;
        public BaseNode node;
        public string taskFieldName;
        [SerializeField] public string guid;

        protected virtual void OnEnable()
        {
            hideFlags = HideFlags.HideInHierarchy;
        }

        public string Guid => guid;

        public  virtual void SaveBlackboardVariable() {}

        public virtual void Init(string guid)
        {
            #if UNITY_EDITOR
            this.guid = guid ?? GUID.Generate().ToString();
            #endif
        }

        public virtual Rect DrawVariableInspector(Rect rect, string label, ref int id)
        {
            id++;
            return new Rect(0, 0, 0, 0);
        }

        public virtual void OnTreeInit() {}
    }
}