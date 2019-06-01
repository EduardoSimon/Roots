using System;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT.Editor
{
    public class NodeUtils
    {
        public static void InitializeNode(BaseNode node, Action<NodeSocket> onNodeSocketClicked)
        {
            node.Init(node.GUID, node.IsEntryPoint, node.IsRootView, node.IsParentView, onNodeSocketClicked);

            if (node.IsEntryPoint || node.IsParentView)
                node.exitSocket.Init(node.exitSocket._socketRect, node.exitSocket.SocketType, node.exitSocket.Node,
                    onNodeSocketClicked);

            if (!node.IsEntryPoint)
                node.entrySocket.Init(node.entrySocket._socketRect, node.entrySocket.SocketType, node.entrySocket.Node,
                    onNodeSocketClicked);
        }
        
        
        public static NodeConnection CreateConnection(BehaviorTreeGraph currentGraph, NodeSocket StartSocket, NodeSocket EndSocket, Color color)
        {
            NodeConnection connection = null;

            connection = ScriptableObject.CreateInstance<NodeConnection>();
            connection.name = "Connection";

            connection.StartSocket = StartSocket;
            connection.EndSocket = EndSocket;
            connection.ConnectionColor = color;
            connection.IsEntryConnection = false || NodeSocket.CurrentClickedSocket != null && NodeSocket.CurrentClickedSocket.Node is EntryNode;

            StartSocket.IsHooked = true;
            EndSocket.IsHooked = true;
            

            AssetDatabase.AddObjectToAsset(connection, currentGraph);
            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
            return connection;
        }
    }
}