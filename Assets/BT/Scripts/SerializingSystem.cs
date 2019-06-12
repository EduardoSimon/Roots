using System.Collections.Generic;
using BT.Editor;
using BT.Scripts.Drawers;
using UnityEditor;

namespace BT.Scripts
{
    public class SerializingSystem
    {
        public static void SaveGraphData(BehaviorTreeGraph currentGraph, List<BaseNode> editorNodes, List<NodeConnection> nodeConnections)
        {
            if (currentGraph != null)
            {
                if (currentGraph.SavedNodes.Count != 0 || currentGraph.SavedConnections.Count != 0)
                {
                    currentGraph.SavedNodes.Clear();
                    currentGraph.SavedConnections.Clear();
                    BTLog.Log("Overriding the data");
                }

                foreach (var nodeView in editorNodes)
                {
                    nodeView.SaveNodeData();
                    currentGraph.SavedNodes.Add(nodeView);
//                    EditorFix.SetObjectDirty(nodeView);
                }

                foreach (var connection in nodeConnections)
                {
                    if (!connection.IsEntryConnection)
                        currentGraph.SavedConnections.Add(connection);
                    else
                    {
                        currentGraph.entryConnection = connection;
                    }
                }

                BTLog.Log("Saved " + currentGraph.SavedNodes.Count + " nodes.");

                currentGraph.OnSave();

#if  UNITY_EDITOR
                EditorUtility.SetDirty(currentGraph);
#endif
            }
        }
        
        
        private void CopyTreeGraphData()
        {
            /*
            if (currentGraph == null)
            {
                BTLog.Log("Select a graph to Load Data From", BTLog.ELogLevel.Error);
            }
            else
            {

                BTLog.Log("Copying Data", BTLog.ELogLevel.Warning);
                _nodeViews.Clear();
                _connections.Clear();


                if (entry != null)
                {
                    AssetDatabase.RemoveObjectFromAsset(entry);
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(currentGraph));
                    DestroyImmediate(entry);
                }

                CreateEntryNode();

                foreach (var savedNode in currentGraph.SavedNodes)
                {
                    if (savedNode.IsRootView)
                        root = CopyNodeView(savedNode);
                }

                if (entry != null && root != null)
                {
                    _nodeViews.Add(root);
                    _connections.Add(CreateConnection(entry.exitSocket, root.entrySocket, Color.red));
                }

                foreach (var nodeConnection in currentGraph.SavedConnections)
                {
                    BaseNode copiedStartNode = null, copiedEndNode = null;

                    if (nodeConnection.StartSocket.IsHooked)
                        copiedStartNode = CopyNodeView(nodeConnection.StartSocket.Node);

                    if (nodeConnection.EndSocket.IsHooked)
                        copiedEndNode = CopyNodeView(nodeConnection.EndSocket.Node);

                    if (copiedStartNode != null && copiedEndNode != null && copiedStartNode != entry)
                    {
                        BaseNode startNode = null;
                        if (!_nodeViews.Contains(copiedStartNode))
                        {
                            _nodeViews.Add(copiedStartNode);
                            startNode = copiedStartNode;
                        }
                        else
                        {
                            startNode = _nodeViews[_nodeViews.IndexOf(copiedStartNode)];
                        }

                        BaseNode endNode = null;
                        if (!_nodeViews.Contains(copiedEndNode))
                        {
                            _nodeViews.Add(copiedEndNode);
                            endNode = copiedEndNode;
                        }
                        else
                        {
                            endNode = _nodeViews[_nodeViews.IndexOf(copiedEndNode)];
                        }

                        _connections.Add(CreateConnection(startNode.exitSocket, endNode.entrySocket, Color.red));
                    }
                    else
                    {
                        BTLog.Log("Trying to load an invalid connection. One of the connection socket was null",
                            BTLog.ELogLevel.Error);
                    }
                }

                //copy the unconnected nodes 
                foreach (var savedNode in currentGraph.SavedNodes)
                    if (!_nodeViews.Contains(savedNode))
                        _nodeViews.Add(CopyNodeView(savedNode));

                /*

                if (_nodesToDestroy.Count > 0)
                {
                    foreach (var nodeView in _nodesToDestroy)
                    {
                        AssetDatabase.RemoveObjectFromAsset(nodeView);
                        AssetDatabase.DeleteAsset(AssetDatabase.GetAssetPath(nodeView));
                        DestroyImmediate(nodeView);
                    }
                    
                }
                
                _nodesToDestroy.Clear();
                

                GUI.changed = true;
                */
        }
    }
}