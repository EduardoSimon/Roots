using System;
using BT.Editor;
using BT.Runtime;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    [System.Serializable]
    public class  GameObjectBlackBoardVariable : BlackBoardVariable
    {
        public GameObject ObjectVariable;
        [SerializeField] private RefIndex ID;
        [SerializeField] private bool hasBeenReferenced = false;

        private void OnEnable()
        {
            EditorApplication.playModeStateChanged += OnPlayModeStateChanged; 
            
            BehaviorTreeManager manager = FindObjectOfType<BehaviorTreeManager>();

            if (manager != null)
            {
                if (manager.gameObjects != null && manager.gameObjects.Count > 0)
                    ObjectVariable = manager.gameObjects[ID.ID].reference;

            }
        }

        private void OnDisable()
        {
            EditorApplication.playModeStateChanged -= OnPlayModeStateChanged; 
        }

        private void OnPlayModeStateChanged(PlayModeStateChange state)
        {
            BehaviorTreeManager manager;
            
            switch (state)
            {
                case PlayModeStateChange.ExitingEditMode:
                   
                    
                    break;
                
                case PlayModeStateChange.EnteredPlayMode:
                    manager = FindObjectOfType<BehaviorTreeManager>();

                    if (manager != null)
                    {
                        if (manager.gameObjects != null && manager.gameObjects.Count > 0 && ID != null)
                            ObjectVariable = manager.gameObjects[ID.ID].reference;
                    }

                    break;
                    
                case PlayModeStateChange.EnteredEditMode:

                    break;
            }
        }

        public override void DrawVariableInspector(string label)
        {
            base.DrawVariableInspector(label);
            
            GUI.SetNextControlName("ObjectVariable");
            EditorGUI.BeginChangeCheck();
            ObjectVariable = EditorGUILayout.ObjectField(label,ObjectVariable, typeof(GameObject),true) as GameObject;

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("ObjectVariable");
                
                BehaviorTreeManager btManager = FindObjectOfType<BehaviorTreeManager>();

                ReferenceData data = new ReferenceData(this.guid,ObjectVariable);
                    
                if (btManager != null && ObjectVariable != null)
                {
                    for (int i = 0; i < btManager.gameObjects.Count; i++)
                    {
                        if (btManager.gameObjects[i] == data)
                        {
                            return;
                        }
                    }
                    
                    btManager.gameObjects.Add(data);
                    ID = new RefIndex(btManager.gameObjects.IndexOf(data));
                    hasBeenReferenced = true;
                }
                
            }
        }

        [Serializable]
        public class ReferenceData
        {
            public string guid;
            public GameObject reference;

            public override bool Equals(object obj)
            {
                ReferenceData cast = obj as ReferenceData;

                if (cast == null) return false;

                if (this.guid == cast.guid)
                    return true;

                return false;
            }

            public override int GetHashCode()
            {
                unchecked
                {
                    return (284237 ^ 23743792 ^ guid.GetHashCode());
                }
                
            }

            public ReferenceData(string guid, GameObject reference)
            {
                this.guid = guid;
                this.reference = reference;
            }
        }

        [Serializable]
        public class RefIndex
        {
            [SerializeField] private int id;
            
            public int ID => id;

            public RefIndex(int id)
            {
                this.id = id;
            }
        }
    }
}