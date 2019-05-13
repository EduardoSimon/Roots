using BT.Editor;
using BT.Runtime;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class ObjectBlackBoardVariable : BlackBoardVariable
    {
        public Transform ObjectVariable;
        [SerializeField] private int instanceID;

        private void OnEnable()
        {
            EditorApplication.playModeStateChanged += OnPlayModeStateChanged; 
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
                    
                    BehaviorTreeManager btManager = FindObjectOfType<BehaviorTreeManager>();

                    if (btManager != null && ObjectVariable != null)
                    {
                        if (!btManager.gameObjects.Contains(ObjectVariable.gameObject))
                        {
                            EditorFix.SetObjectDirty(ObjectVariable);
                            btManager.gameObjects.Add(ObjectVariable.gameObject);
                        }
                    }
                    break;
                
                case PlayModeStateChange.EnteredPlayMode:
                    manager = FindObjectOfType<BehaviorTreeManager>();

                    if (manager != null)
                    {
                        if (manager.gameObjects != null && manager.gameObjects.Count > 0)
                            ObjectVariable = manager.gameObjects[0].transform;
                    }

                    break;
                    
                case PlayModeStateChange.EnteredEditMode:
                    manager = FindObjectOfType<BehaviorTreeManager>();

                    if (manager != null)
                    {
                        if (manager.gameObjects != null && manager.gameObjects.Count > 0)
                            ObjectVariable = manager.gameObjects[0].transform;

                    }
                    break;
                
                /*
                case PlayModeStateChange.EnteredEditMode:
                    manager = FindObjectOfType<BehaviorTreeManager>();

                    if (manager != null)
                    {
                        if (manager.gameObjects != null && manager.gameObjects.Count > 0)
                            ObjectVariable = manager.gameObjects[0].transform;
                    }
                    break;
                */
            }
        }

        public override void DrawVariableInspector(string label)
        {
            base.DrawVariableInspector(label);
            
            GUI.SetNextControlName("ObjectVariable");
            EditorGUI.BeginChangeCheck();
            ObjectVariable = EditorGUILayout.ObjectField(label,ObjectVariable, typeof(Transform),true) as Transform;

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("ObjectVariable");
                
                EditorFix.SetObjectDirty(ObjectVariable);
            }
        }
    }
}