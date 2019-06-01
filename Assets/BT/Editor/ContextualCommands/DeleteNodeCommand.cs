using System.Collections.Generic;
using BT.Scripts;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT.Editor.ContextualCommands
{
    public class DeleteNodeCommand : Command, IContextualCommand
    {
        public void PerformCommand(BtEditor context, BaseNode clickedNode)
        {
            var connectionsToRemove = new List<NodeConnection>();

            foreach (var connection in context.Connections)
                if (connection.EndSocket == clickedNode.entrySocket ||
                    connection.StartSocket == clickedNode.exitSocket)
                    connectionsToRemove.Add(connection);

            foreach (var connection in connectionsToRemove)
            {
                connection.StartSocket.IsHooked = false;
                connection.EndSocket.IsHooked = false;
                context.Connections.Remove(connection);
            }
            
            context.Nodes.Remove(clickedNode);

            foreach (var var in clickedNode.variables)
            {
                Object.DestroyImmediate(var, true);
            }

            foreach (var connection in connectionsToRemove)
            {
                Object.DestroyImmediate(connection,true);
            }
            if(clickedNode.exitSocket != null)
                Object.DestroyImmediate(clickedNode.exitSocket,true);
            Object.DestroyImmediate(clickedNode.entrySocket,true);
            Object.DestroyImmediate(clickedNode.Task,true);
            Object.DestroyImmediate(clickedNode,true);
            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(context.currentGraph));
            clickedNode = null;

            //SerializingSystem.SaveGraphData(context.currentGraph,context.Nodes,context.Connections);
        }
    }
}