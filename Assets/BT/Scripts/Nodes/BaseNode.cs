using System;
using System.Collections.Generic;
using System.Reflection;
using BT.Editor;
using BT.Scripts;
using BT.Scripts.Nodes;
using UnityEngine;

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

        #region Private and Protected Members

        private GUISkin _skin;
        private int _id;
        private int focusID = 1;
        [SerializeField] private bool isParentNode;
        [SerializeField] private bool isRootView;
        [SerializeField] private bool isEntryPoint;
        [SerializeField] private bool isSelected;        
        [SerializeField] private string guid;

        protected int VariableId;
        protected List<InspectorFieldData> inspectorVariables;
        [SerializeField] protected ATask _task;
        #endregion

        #region Public Members
        public NodeSocket entrySocket;
        public NodeSocket exitSocket;
        public Rect windowRect;
        public string windowTitle;
        [SerializeField] public List<BlackBoardVariable> variables;
        #endregion

        #region Properties and Statics

        public bool IsRootView => isRootView;
        public bool IsSelected => isSelected;
        public bool IsEntryPoint => isEntryPoint;
        public string GUID => guid;
        public List<BaseNode> children;
        public ATask Task
        {
            get => _task;
            set => _task = value;
        }
        public bool IsParentNode => isParentNode;
        public static event Action<BaseNode> OnNodeRightClicked;
        public event Action<BaseNode> OnClickedNode;

        #endregion
        
        /// <summary>
        /// Emulates the constructor of the class. Override this method calling the base one for your custom initialization
        /// </summary>
        /// <param name="id"> If the node has been created before and only a copy is need, the GUID parameter MUST BE NULL</param>
        /// <param name="isRootView"> Is the entry view of the graph</param>
        /// <param name="isParentView"> Is allowed to have children</param>
        public virtual void Init(string id, bool isEntryPoint, bool isRootView, bool isParentView,
            Action<NodeSocket> OnSocketClicked)
        {
            #if UNITY_EDITOR
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
            this.isParentNode = isParentView;
            this.isEntryPoint = isEntryPoint;

            inspectorVariables = new List<InspectorFieldData>();

            if (variables.Count > 0)
                inspectorVariables = NodeUtils.GetInspectorVariables(this);
            #endif
        }


        #region DrawingMethods

         /// <summary>
        /// Extend this method to customize  how  the node is drawn.
        /// </summary>
        /// <param name="id"> The unique ID of the window.</param>
        public virtual void DrawNodeView(int id)
        {
            _id = id;
        }

        /// <summary>
        /// Override this method and to change how the sockets are drawn.
        /// </summary>
        public virtual void DrawSockets()
        {
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
        #endregion
        
        #region Event Processing

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

        #endregion

        #region SavingMethods
        
        public virtual void CopyVariables(List<BlackBoardVariable> previousVariables)
        {
            #if UNITY_EDITOR
            NodeUtils.CopyVariables(this, previousVariables);

            inspectorVariables = NodeUtils.GetInspectorVariables(this);
            #endif
        }


        public virtual void SaveNodeData()
        {
            foreach (var variable in variables)
            {
                if (variable != null)
                {
                    FieldInfo variableField = variable.GetType().GetField("Variable");
                    FieldInfo taskField = _task.GetType().GetField(variable.taskFieldName);
                    taskField.SetValue(_task, variableField.GetValue(variable));
                }
            }
        }
        

        #endregion
       
        
        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(object other)
        {
            var node = other as BaseNode;

            return node != null && node.guid == guid;
        }
    }
}