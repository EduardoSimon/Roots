using System;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    [System.Serializable]
    public class BlackBoardVariable : ScriptableObject
    {
        public BaseNode node;
        public string taskFieldName;
        [SerializeField] public string guid;

        public string Guid => guid;

        public  virtual void SaveBlackboardVariable() {}

        public virtual void Init(string guid)
        {
            this.guid = guid ?? GUID.Generate().ToString();
        }

        public virtual Rect DrawVariableInspector(Rect rect, string label, ref int id)
        {
            id++;
            return new Rect(0, 0, 0, 0);
        }

    }
}