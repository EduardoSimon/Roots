using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Emit;
using BT.Scripts;
using RotaryHeart.Lib.SerializableDictionary;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine;
using ReorderableList = UnityEditorInternal.ReorderableList;

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

        private SerializedProperty _property;
        private SerializedObject obj;
        private bool canAdd = false;
        private bool hasInputName;

        public UnityEditorInternal.ReorderableList _list;

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

            if (_currentBb != null)
            {
                obj = new SerializedObject(_currentBb);
                _property = obj.FindProperty("_bbKeys");
                _list = new UnityEditorInternal.ReorderableList(_property.serializedObject, _property, true, true,
                    true, true);
                _list.drawHeaderCallback += DrawHeaderCallback;
                _list.onAddDropdownCallback += AddDropdownCallback;
                _list.onRemoveCallback += RemoveCallback;
                _list.drawElementCallback += ListOnDrawElementCallback;
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

                if (_currentBb != null)
                {
                    obj = new SerializedObject(_currentBb);
                    _property = obj.FindProperty("_bbKeys");
                    _list = new UnityEditorInternal.ReorderableList(_property.serializedObject, _property, true, true,
                        true, true);
                    _list.drawHeaderCallback += DrawHeaderCallback;
                    _list.onAddDropdownCallback += AddDropdownCallback;
                    _list.onRemoveCallback += RemoveCallback;
                    _list.drawElementCallback += ListOnDrawElementCallback;
                }
            }

            if (_currentBb == null)
            {
                ShowNotification(new GUIContent("Please Select a BlackBoard to edit its variables.",
                    Resources.Load<Texture>("blackboard_icon")));
                return;
            }


            if (_property == null)
            {
                obj = new SerializedObject(_currentBb);
                _property = obj.FindProperty("_bbKeys");
            }

            if (_list != null)
            {
                _list.displayAdd = keyText != "";
                obj.Update();
                _list.DoLayoutList();
                obj.ApplyModifiedProperties();

                GUI.SetNextControlName("VarName");
                keyText = EditorGUILayout.TextField("New Variable Name", keyText, GUILayout.MaxWidth(300));
            }


            if (GUI.changed)
                Repaint();
        }

        private void RemoveCallback(ReorderableList list)
        {
            _currentBb.RemoveVariable(list.serializedProperty.GetArrayElementAtIndex(list.index)
                .FindPropertyRelative("keyName").stringValue);
        }

        private void AddDropdownCallback(Rect buttonrect, ReorderableList list)
        {
            canAdd = true;

            GUI.FocusControl("VarName");
            GenericMenu menu = new GenericMenu();

            foreach (var variableType in _variableTypes)
            {
                menu.AddItem(new GUIContent(variableType), false, () =>
                {
                    _currentBb.AddVariable(CreateInstance(variableType) as BlackBoardVariable, keyText);
                    GUI.FocusControl(null);
                    keyText = "";
                    GUI.changed = true;
                });
            }

            menu.DropDown(buttonrect);
        }

        private void DrawHeaderCallback(Rect rect)
        {
            GUI.Label(rect, "Current Blackboard Variables");
        }

        private void ListOnDrawElementCallback(Rect rect, int index1, bool isActive, bool isFocused)
        {
            string keyName = _property.GetArrayElementAtIndex(index1).FindPropertyRelative("keyName").stringValue;
            BlackBoardVariable variable =
                _property.GetArrayElementAtIndex(index1).FindPropertyRelative("Variable").objectReferenceValue as
                    BlackBoardVariable;

            switch (variable)
            {
                case BoolBlackBoardVariable bVar:
                    bVar.Variable = EditorGUI.Toggle(rect, keyName, bVar.Variable);
                    break;
                case TransformBlackBoardVariable tVar:
                    tVar.Variable = EditorGUI.ObjectField(rect, keyName, tVar.Variable, typeof(Transform), false) as Transform;
                    //GUI.Label(rect, "The transform variable is only assignable at runtime.");
                    break;
                case FloatBlackBoardVariable fVar:
                    fVar.Variable = EditorGUI.FloatField(rect, keyName, fVar.Variable);
                    break;
                case Vector3BlackBoardVariable v3Var:
                    v3Var.Variable = EditorGUI.Vector3Field(rect, keyName, v3Var.Variable);
                    break;
                case IntBlackBoardVariable iVar:
                    iVar.Variable = EditorGUI.IntField(rect, keyName, iVar.Variable);
                    break;
                case StringBlackBoardVariable sVar:
                    sVar.Variable = EditorGUI.TextField(rect, keyName, sVar.Variable);
                    break;
                default:
                    GUI.Label(rect, keyName);
                    break;
            }
        }
    }
}