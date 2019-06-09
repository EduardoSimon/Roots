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

            RetrieveVariable(true);
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
            BTManager btManager = FindObjectOfType<BTManager>();

            if (btManager == null)
            {
                GameObject gameObject = new GameObject("BTManager", typeof(BTManager));
                btManager = gameObject.GetComponent<BTManager>();
            }

            if (btManager != null && btManager.references != null && !btManager.references.ContainsKey(guid))
            {
                btManager.references[guid] = gameObjectVariable;
            }
        }


        public override Rect DrawVariableInspector(Rect rect, string label, ref int id)
        {
            base.DrawVariableInspector(rect, label, ref id);
            GUI.SetNextControlName("Variable" + id);
            gameObjectVariable =
                EditorGUILayout.ObjectField(label, gameObjectVariable, typeof(GameObject), true) as GameObject;

            if (Event.current.type == EventType.MouseDown && !rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl(null);
            }
            else if (Event.current.type == EventType.MouseDown && rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl("Variable" + id);
            }

            return rect;
        }

        private void RetrieveVariable(bool willCreateManagerIfNotFound)
        {
            BTManager manager = FindObjectOfType<BTManager>();

            if (willCreateManagerIfNotFound && manager == null)
            {
                GameObject gameObject = new GameObject("BTManager", typeof(BTManager));
                manager = gameObject.GetComponent<BTManager>();
            }

            if (manager.references != null && guid != null)
            {
                if (manager.references.ContainsKey(guid))
                    gameObjectVariable = manager.references[this.guid];
            }
        }
    }
}