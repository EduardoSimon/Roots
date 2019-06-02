using System;
using BT.Editor;
using BT.Runtime;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace BT.Scripts
{
    [System.Serializable]
    public class GameObjectBlackBoardVariable : BlackBoardVariable
    {
        public GameObject gameObjectVariable;

        private void OnEnable()
        {
            EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
            EditorSceneManager.sceneOpened += OnSceneOpened;

            RetrieveVariable(false);
        }


        private void OnSceneOpened(Scene arg0, OpenSceneMode mode)
        {
            RetrieveVariable(false);
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
                    StoreVariable();
                    break;

                case PlayModeStateChange.EnteredPlayMode:
                    RetrieveVariable(true);
                    break;

                case PlayModeStateChange.EnteredEditMode:
                    break;
            }
        }

        private void StoreVariable()
        {
            BehaviorTreeManager btManager = FindObjectOfType<BehaviorTreeManager>();

            if (btManager == null)
            {
                GameObject gameObject = new GameObject("BTManager", typeof(BehaviorTreeManager));
                btManager = gameObject.GetComponent<BehaviorTreeManager>();
            }

            if (btManager != null && btManager.references != null && !btManager.references.ContainsKey(guid))
            {
                btManager.references[guid] = gameObjectVariable;
            }
        }

        public override void DrawVariableInspector(string label, Event current)
        {

            GUI.SetNextControlName("ObjectVariable");
            EditorGUI.BeginChangeCheck();
            gameObjectVariable =
                EditorGUILayout.ObjectField(label, gameObjectVariable, typeof(GameObject), true) as GameObject;

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl("ObjectVariable");
            }
            
            base.DrawVariableInspector(label, current);

        }
        
        private void RetrieveVariable(bool willCreateManagerIfNotFound)
        {
            BehaviorTreeManager manager = FindObjectOfType<BehaviorTreeManager>();

            if (willCreateManagerIfNotFound && manager == null)
            {
                GameObject gameObject = new GameObject("BTManager", typeof(BehaviorTreeManager));
                manager = gameObject.GetComponent<BehaviorTreeManager>();
            }

            if (manager.references != null && guid != null)
            {
                if (manager.references.ContainsKey(guid))
                    gameObjectVariable = manager.references[this.guid];
            }
        }
    }
}
