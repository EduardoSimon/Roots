using System.Collections.Generic;
using BT.Scripts.Drawers;
using UnityEditor;
using UnityEngine;

namespace BT.Editor.ContextualCommands
{
    public class MakeRootNodeCommand : Command, IContextualCommand
    {
        public void PerformCommand(BtEditor context, BaseNode clickedNode)
        {
            var connectionsToRemove = new List<NodeConnection>();

            foreach (var connection in context.Connections)
            {
                if (connection.IsEntryConnection)
                    connectionsToRemove.Add(connection);
                else if (connection.EndSocket == clickedNode.entrySocket)
                    connectionsToRemove.Add(connection);
            }

            foreach (var toRemove in connectionsToRemove)
            {
                context.Connections.Remove(toRemove);
            }

            context.entry.exitSocket.IsHooked = true;
            clickedNode.entrySocket.IsHooked = true;

            context.Connections.Add(NodeUtils.CreateConnection(context.currentGraph, context.entry.exitSocket, clickedNode.entrySocket,
                Color.red));
        }
    }
}