using System;
using Editor;
using UnityEditor;
using UnityEngine;

namespace BT.Editor
{
    public class NodeFactory
    {
        public static T Create<T>(SearchTasksWindow.NodeType nodeType, Rect windowRect)
            where T : BaseNode
        {
            var editor = BtEditor.GetWindow<BtEditor>();
            
            if(editor == null) throw new ArgumentNullException();
            
            var instance = InitializeNode(nodeType, windowRect, editor.currentGraph, editor.OnNodeSocketClicked, editor);

            return instance as T;
        }

        private static BaseNode InitializeNode(SearchTasksWindow.NodeType nodeType, Rect windowRect, BehaviorTreeGraph nodeContainer, Action<NodeSocket> OnNodeSocketClicked, BtEditor editor)
        {
            var instance = ScriptableObject.CreateInstance(nodeType.DrawerType.FullName) as BaseNode;
            instance.name = nodeType.DrawerType.Name;
            AssetDatabase.AddObjectToAsset(instance, nodeContainer);
            Debug.Assert(instance != null, "Couldn't create the node with name " + nameof(nodeType.DrawerType));

            instance.exitSocket = ScriptableObject.CreateInstance<NodeSocket>();
            instance.exitSocket.Init(
                new Rect(instance.windowRect.xMin, instance.windowRect.yMax, BTConstants.SocketWidth,
                    BTConstants.SocketHeight), NodeSocket.NodeSocketType.Out, instance, OnNodeSocketClicked);
            instance.exitSocket.name = instance.name + " exitSocket";
            AssetDatabase.AddObjectToAsset(instance.exitSocket, nodeContainer);

            instance.entrySocket = ScriptableObject.CreateInstance<NodeSocket>();
            instance.entrySocket.Init(
                new Rect(instance.windowRect.xMin, instance.windowRect.yMin, BTConstants.SocketWidth,
                    BTConstants.SocketHeight), NodeSocket.NodeSocketType.In, instance, OnNodeSocketClicked);
            instance.entrySocket.name = instance.name + " entrySocket";
            AssetDatabase.AddObjectToAsset(instance.entrySocket, nodeContainer);

            instance.Task = ScriptableObject.CreateInstance(nodeType.taskType) as ATask;
            Debug.Assert(instance.Task != null, "Couldn't create the task with name " + nameof(nodeType.taskType));
            instance.Task.name = nodeType.taskType.Name;
            AssetDatabase.AddObjectToAsset(instance.Task, nodeContainer);
            instance.windowRect = windowRect;
            instance.windowTitle = instance.Task.name;

            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(nodeContainer));

            if (instance.Task is IComposite cast)
                instance.Init(null, false, editor.Nodes.Count == 0 ? true : false,
                    true, OnNodeSocketClicked); // if we pass null to the guid a new one will be created
            else
                instance.Init(null, false, editor.Nodes.Count == 0 ? true : false, false, OnNodeSocketClicked);
            
            BTLog.Log(instance.IsRootView);

            instance.CopyVariables(null);
            return instance;
        }
    }
}