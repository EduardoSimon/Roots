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
        [SerializeField] public string guid;

        public string Guid => guid;

        public  virtual void SaveBlackboardVariable() {}

        public virtual void Init(string guid)
        {
            this.guid = guid ?? GUID.Generate().ToString();
        }

        public virtual void DrawVariableInspector(string label, Event current)
        {
            if (current.type != EventType.MouseDown || GUI.GetNameOfFocusedControl() != "") return;

            if (!GUILayoutUtility.GetLastRect().Contains(current.mousePosition))
            {
                GUI.FocusControl(null);
                Event.current.Use();
            }
        }

    }
}