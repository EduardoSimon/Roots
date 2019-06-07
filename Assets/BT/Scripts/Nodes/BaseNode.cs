using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using BT.Editor;
using BT.Scripts;
using BT.Scripts.Drawers;
using BT.Scripts.Nodes;
using UnityEditor;
using UnityEngine;
using Debug = System.Diagnostics.Debug;

namespace BT
{
    [SerializeField]
    public abstract class BaseNode : ScriptableObject, ISavableNode
    {
        public class InspectorFieldData
        {
            public BlackBoardVariable variable;
            public string fieldName;

            public InspectorFieldData(BlackBoardVariable variable, string fieldName)
            {
                this.variable = variable;
                this.fieldName = fieldName;
            }
        }

        private GUISkin _skin;
        private int _id;
        private int focusID = 1;
        protected int VariableId;
        protected List<InspectorFieldData> inspectorVariables;

        public NodeSocket entrySocket;
        public NodeSocket exitSocket;

        public Rect windowRect;
        public string windowTitle;

        [SerializeField] public List<BlackBoardVariable> variables;

        [SerializeField] private bool isParentView;
        public bool IsParentView => isParentView;

        [SerializeField] private bool isRootView;
        public bool IsRootView => isRootView;

        [SerializeField] private bool isSelected;
        public bool IsSelected => isSelected;

        [SerializeField] private bool isEntryPoint;
        public bool IsEntryPoint => isEntryPoint;

        [SerializeField] private string guid;
        public string GUID => guid;

        //serialize this
        public List<BaseNode> children;
        protected ATask _task;

        public static event Action<BaseNode> OnNodeRightClicked;
        public event Action<BaseNode> OnClickedNode;

        /// <summary>
        /// Emulates the constructor of the class. Override this method calling the base one for your custom initialization
        /// </summary>
        /// <param name="id"> If the node has been created before and only a copy is need, the GUID parameter MUST BE NULL</param>
        /// <param name="isRootView"> Is the entry view of the graph</param>
        /// <param name="isParentView"> Is allowed to have children</param>
        public virtual void Init(string id, bool isEntryPoint, bool isRootView, bool isParentView,
            Action<NodeSocket> OnSocketClicked)
        {
            if (variables == null)
                variables = new List<BlackBoardVariable>();

            _skin = Resources.Load<GUISkin>("BTSkin");

            if (id == null)
            {
                this.guid = Guid.NewGuid().ToString();
                children = new List<BaseNode>();
            }
            else
                this.guid = id;

            if (exitSocket == null)
            {
                exitSocket = CreateInstance<NodeSocket>();
                exitSocket.Init(
                    new Rect(windowRect.xMin, windowRect.yMax, BTConstants.SocketWidth, BTConstants.SocketHeight),
                    NodeSocket.NodeSocketType.Out, this, OnSocketClicked);
            }

            if (!isEntryPoint)
            {
                if (entrySocket == null)
                {
                    entrySocket = CreateInstance<NodeSocket>();
                    entrySocket.Init(
                        new Rect(windowRect.xMin, windowRect.yMin, BTConstants.SocketWidth, BTConstants.SocketHeight),
                        NodeSocket.NodeSocketType.In, this, OnSocketClicked);
                }

                windowTitle = Task.GetType().Name;
            }

            this.isRootView = isRootView;
            this.isParentView = isParentView;
            this.isEntryPoint = isEntryPoint;
            
            inspectorVariables = new List<InspectorFieldData>();

            if(variables.Count > 0)
                GetInspectorVariables();
        }


        public virtual void DrawWindow(int id)
        {
            _id = id;
        }

        public virtual void DrawSockets()
        {
            //the draw method takes into account the drag of the Node
            if (entrySocket != null)
            {
                entrySocket.Draw();
                entrySocket.ProcessEvent(Event.current);
            }

            if (exitSocket != null)
            {
                exitSocket.Draw();
                exitSocket.ProcessEvent(Event.current);
            }
        }

        /// <summary>
        /// Callback for drawing this node's inspector. Use EditorGUILayout or GUILayout functions for easier positioning.
        /// </summary>
        /// <param name="current"></param>
        public virtual void DrawInspector(Rect inspectorRect)
        {
            GUILayout.Label(windowTitle);

            if (inspectorVariables.Count > 0)
            {
                VariableId = 0;

                Rect? previousRect = null;
                foreach (var inspectorField in inspectorVariables)
                {
                    if (previousRect == null)
                        previousRect = inspectorField.variable.DrawVariableInspector(
                            new Rect(inspectorRect.x + 10, inspectorRect.y + 20, inspectorRect.width - 20,
                                20), inspectorField.fieldName, ref VariableId);
                    else
                        previousRect = inspectorField.variable.DrawVariableInspector(
                            new Rect(inspectorRect.x + 10, previousRect.Value.y + 25, inspectorRect.width - 20,
                                20), inspectorField.fieldName, ref VariableId);
                }

                if (Event.current.type == EventType.KeyUp && Event.current.keyCode == KeyCode.Tab)
                {
                    GUI.FocusControl("Variable" + focusID);
                    GUI.changed = true;
                    focusID++;

                    if (focusID > VariableId)
                        focusID = 1;
                }
            }

        }

        public void Drag(Vector2 delta)
        {
            windowRect.position += delta;
        }

        public bool ProcessEvents(Event e)
        {
            switch (e.type)
            {
                case EventType.MouseDown:
                    switch (e.button)
                    {
                        case 0 when windowRect.Contains(e.mousePosition):
                            isSelected = true;
                            OnClickedNode?.Invoke(this);
                            GUI.FocusWindow(_id);
                            return true;
                        case 0:
                            return true;
                        case 1:
                        {
                            if (windowRect.Contains(e.mousePosition))
                                OnNodeRightClicked?.Invoke(this);
                            return true;
                        }
                    }

                    break;

                case EventType.MouseUp:
                    isSelected = false;
                    GUI.UnfocusWindow();
                    return true;
            }

            return false;
        }
        private void GetInspectorVariables()
        {
            inspectorVariables = new List<InspectorFieldData>();

            foreach (var field in this.GetType().GetFields()
                .Where(info => info.FieldType.IsSubclassOf(typeof(BlackBoardVariable))))
            {
                BTLog.Log("Getting inspector data, field: " + field.Name + "of type: " + field.FieldType,
                    BTLog.ELogLevel.Verbose);

                inspectorVariables.Add(new InspectorFieldData(field.GetValue(this) as BlackBoardVariable, field.Name));
            }
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(object other)
        {
            var node = other as BaseNode;

            return node != null && node.guid == guid;
        }

        public virtual void CopyVariables(List<BlackBoardVariable> previousVariables)
        {
            int count = 0;

            foreach (var field in this.GetType().GetFields()
                .Where(info => info.FieldType.IsSubclassOf(typeof(BlackBoardVariable))))
            {
                BTLog.Log("Copying variable with field name: " + field.Name + "of type: " + field.FieldType,
                    BTLog.ELogLevel.Verbose);

                BlackBoardVariable variable;

                if (previousVariables == null)
                {
                    variable = CreateInstance(field.FieldType) as BlackBoardVariable;
                    AssetDatabase.AddObjectToAsset(variable, this);
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(this));
                    Debug.Assert(variable != null, nameof(variable) + " != null");
                    variable.node = this;
                    variables.Add(variable);
                }
                else
                {
                    variable = previousVariables[count];
                }

                variable.Init(previousVariables == null ? null : variable.guid);

                field.SetValue(this, variable);

                count++;
            }
            
            GetInspectorVariables();
        }

        public virtual ATask Task
        {
            get => _task;
            set => _task = value;
        }

        public abstract void SaveNodeData();
    }
}