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
        public GameObject gameObjectVariable;

        private void OnEnable()
        {
            EditorApplication.playModeStateChanged += OnPlayModeStateChanged; 
            
            BehaviorTreeManager manager = FindObjectOfType<BehaviorTreeManager>();

            if (manager == null)
            {
                GameObject gameObject = new GameObject("BTManager", typeof(BehaviorTreeManager));
            }
            
            if (manager.references != null && guid != null)
            {
                if(manager.references.ContainsKey(guid))
                    gameObjectVariable = manager.references[this.guid];
            }
        }

        private void OnDisable()
        {
            EditorApplication.playModeStateChanged -= OnPlayModeStateChanged; 
        }

        private void OnPlayModeStateChanged(PlayModeStateChange state)
        {
            switch (state)
            {
                case PlayModeStateChange.ExitingEditMode:
                    BehaviorTreeManager btManager = FindObjectOfType<BehaviorTreeManager>();
                    
                    if (btManager == null)
                    {
                        GameObject gameObject = new GameObject("BTManager", typeof(BehaviorTreeManager));
                    }
                    
                    if (btManager != null && btManager.references != null && !btManager.references.ContainsKey(guid))
                    {
                        btManager.references[guid] = gameObjectVariable;
                    }

                    break;
                
                case PlayModeStateChange.EnteredPlayMode:
                    var manager = FindObjectOfType<BehaviorTreeManager>();

                    if (manager == null)
                    {
                        GameObject gameObject = new GameObject("BTManager", typeof(BehaviorTreeManager));
                    }
                    
                    if (manager != null && manager.references != null && manager.references.ContainsKey(guid))
                        gameObjectVariable = manager.references[guid];
                    break;
                    
                case PlayModeStateChange.EnteredEditMode:
                    break;
            }
        }

        public override void DrawVariableInspector(string label,Event current)
        {
            base.DrawVariableInspector(label,current);
            
            GUI.SetNextControlName("ObjectVariable");
            EditorGUI.BeginChangeCheck();
            gameObjectVariable = EditorGUILayout.ObjectField(label,gameObjectVariable, typeof(GameObject),true) as GameObject;

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("ObjectVariable");
            }
        }

    }
}