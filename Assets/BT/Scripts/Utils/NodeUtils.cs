#if UNITY_EDITOR
using System;
using System.Collections.Generic;
using System.Linq;
using BT.Scripts;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT.Editor
{
    public class NodeUtils
    {
        public static void InitializeNode(BaseNode node, Action<NodeSocket> onNodeSocketClicked, BehaviorTreeGraph context)
        {
            node.Init(node.GUID, node.IsEntryPoint, node.IsRootView, node.IsParentNode, onNodeSocketClicked, context);

            if (node.IsEntryPoint || node.IsParentNode)
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
        
        public static List<BaseNode.InspectorFieldData> GetInspectorVariables(BaseNode node)
        {
            var inspectorVariables = new List<BaseNode.InspectorFieldData>();

            foreach (var variable in node.variables)
            {
                BTLog.Log("Getting inspector data, field: " + variable.taskFieldName + "of type: " + variable.GetType());

                inspectorVariables.Add(new BaseNode.InspectorFieldData(variable, variable.taskFieldName));
            }

            return inspectorVariables;
        }

        public static void CopyVariables(BaseNode node, List<BlackBoardVariable> previousVariables)
        {
            int count = 0;

            //Todo refactor the inspector filter
            foreach (var field in node.Task.GetType().GetFields().Where(info => info.IsPublic && info.FieldType != typeof(TaskStatus) & info.FieldType != typeof(ATask) && info.FieldType != typeof(BlackBoard)))
            {
                BTLog.Log("Copying variable with field name: " + field.Name + "of type: " + field.FieldType);

                BlackBoardVariable variable;

                if (previousVariables == null)
                {
                    variable = VariableFactory.CreateVariable(field.FieldType);
                    
                    if (variable != null)
                    {
                        AssetDatabase.AddObjectToAsset(variable, node);
                        AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(node));
                        Debug.Assert(variable != null, nameof(variable) + " != null");
                        variable.node = node;
                        variable.taskFieldName = field.Name;
                        node.variables.Add(variable); 
                    }
                    else
                    {
                        BTLog.Log("Couldnt create a variable of type: " + field.FieldType);
                    }

                }
                else
                {
                    variable = previousVariables[count];
                }

                variable.Init(previousVariables == null ? null : variable.guid);
                
                count++;
            }
            
        }
    }
    
}

#endif