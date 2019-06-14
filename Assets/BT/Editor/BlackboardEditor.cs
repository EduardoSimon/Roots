using System;
using System.Collections.Generic;
using System.Linq;
using BT.Scripts;
using UnityEditor;
using UnityEngine;

namespace BT.Editor
{
    public class BlackboardEditor : EditorWindow
    {
        private BlackBoard _currentBb;
        private int index;
        private string keyText;

        public BlackBoard CurrentBb { get; private set; }

        private List<string> _variableTypes;

        private string bbType;

        [MenuItem("BT/BlackBoard Editor")]
        static void Init()
        {
            GetWindow<BlackboardEditor>("Blackboard Editor", true, new Type[1] {typeof(SceneView)}).Show();
        }

        private void OnEnable()
        {
            _variableTypes = new List<string>();

            foreach (var variableType in typeof(BlackBoardVariable).Assembly.GetTypes()
                .Where(t => t.IsSubclassOf(typeof(BlackBoardVariable))))
            {
                _variableTypes.Add(variableType.Name);
            }
        }

        private void OnGUI()
        {
            EditorGUI.BeginChangeCheck();
            _currentBb = EditorGUILayout.ObjectField(_currentBb, typeof(BlackBoard), false,
                GUILayout.MaxWidth(position.width / 5), GUILayout.MinWidth(200)) as BlackBoard;

            if (EditorGUI.EndChangeCheck())
            {
                GUI.FocusControl(null);
            }

            if (_currentBb == null)
                return;

            GUILayout.BeginHorizontal();
            index = EditorGUILayout.Popup(index, _variableTypes.ToArray());
            keyText = EditorGUILayout.TextField("Variable Name", keyText);
            GUILayout.EndHorizontal();
            
            if (GUILayout.Button("Add Variable", GUILayout.MaxWidth(100)))
                _currentBb.AddVariable(CreateInstance(_variableTypes[index]) as BlackBoardVariable, keyText);

            foreach (var key in _currentBb.BBKeys.Keys)
            {
                GUILayout.Label(key);
            }
            GUILayout.Label(_currentBb.BBKeys.Keys.ToString());
        }
    }
}