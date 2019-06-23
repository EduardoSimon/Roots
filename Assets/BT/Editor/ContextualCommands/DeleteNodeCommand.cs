using System;
using System.Collections.Generic;
using BT.Scripts;
using BT.Scripts.Drawers;
using UnityEditor;
using Object = UnityEngine.Object;

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
                if (connection.StartSocket.Node.IsParentNode && connection.StartSocket.Node.children.Contains(clickedNode))
                {
                    connection.StartSocket.Node.children.Remove(clickedNode);

                    IComposite compositeCast = connection.StartSocket.Node.Task as IComposite;
                    Decorator decoratorCast = connection.StartSocket.Node.Task as Decorator;
                    
                    if (compositeCast == null  && decoratorCast == null)
                        throw new NullReferenceException("The node had a broken node, which had an invalid parent. Please create a new file.");
                    
                    if(compositeCast != null)
                        compositeCast.RemoveChildren(clickedNode.Task);
                    else if (decoratorCast != null)
                        decoratorCast.child = null;
                    
                }
                
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

            if (clickedNode.variables.Count > 0)
            {
                foreach (var clickedNodeVariable in clickedNode.variables)
                {
                    Object.DestroyImmediate(clickedNodeVariable);
                }
            }
            Object.DestroyImmediate(clickedNode.entrySocket,true);
            Object.DestroyImmediate(clickedNode.Task,true);
            Object.DestroyImmediate(clickedNode,true);
            AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(context.currentGraph));
            clickedNode = null;

            //SerializingSystem.SaveGraphData(context.currentGraph,context.Nodes,context.Connections);
        }
    }
}