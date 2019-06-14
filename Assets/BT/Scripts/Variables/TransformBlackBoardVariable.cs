using System;
using BT.Editor;
using BT.Runtime;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
#if UNITY_EDITOR
using UnityEditor.SceneManagement;

#endif

namespace BT.Scripts
{
    [Serializable]
    public class TransformBlackBoardVariable : BlackBoardVariable
    {
        public Transform Variable;
        
        public override void OnTreeInit()
        {
            base.OnTreeInit();
            Debug.Log("INIT Variable");
            RetrieveVariable();
        }
        
#if UNITY_EDITOR
        private void OnEnable()
        {
            EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
            EditorSceneManager.sceneOpened += OnSceneOpened;
        }

        private void OnSceneOpened(Scene scene, OpenSceneMode mode)
        {
            RetrieveVariable();
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
                    RetrieveVariable();
                    break;

                case PlayModeStateChange.EnteredEditMode:
                    break;
            }
        }
#endif

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
                btManager.references[guid] = Variable.transform;
            }
        }


        public override Rect DrawVariableInspector(Rect rect, string label, ref int id)
        {
            base.DrawVariableInspector(rect, label, ref id);
#if UNITY_EDITOR
            GUI.SetNextControlName("Variable" + id);
            Variable =
                EditorGUILayout.ObjectField(label, Variable, typeof(Transform), true) as Transform;

            if (Event.current.type == EventType.MouseDown && !rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl(null);
            }
            else if (Event.current.type == EventType.MouseDown && rect.Contains(Event.current.mousePosition))
            {
                GUI.FocusControl("Variable" + id);
            }

#endif
            return rect;
        }

        private void RetrieveVariable()
        {
            BTManager manager = BTManager.Instance;

            if (manager == null)
            {
                return;
            }
            
            if (manager.references != null && guid != null)
            {
                if (manager.references.ContainsKey(guid))
                {
                    Variable = manager.references[this.guid].transform;
                    node.Task.GetType().GetField(taskFieldName).SetValue(node.Task, Variable);
                }
            }
        }
    }
}