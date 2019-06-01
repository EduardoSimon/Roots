using System;
using BT;
using BT.Core;
using BT.Editor;
using BT.Scripts.Core;
using BT.Scripts.Drawers;
using Editor;
using NUnit.Framework;
using UnityEditor;
using UnityEngine;
using UnityEngine.TestTools;

namespace GUITests
{
    public class GUITest
    {
        private BtEditor editor;

        [SetUp]
        public void SetupEnvironment()
        {
            editor = ScriptableObject.CreateInstance<BtEditor>();
            editor.Show(true);
            editor.currentGraph = ScriptableObject.CreateInstance<BehaviorTreeGraph>();
            AssetDatabase.CreateAsset(editor.currentGraph, "Assets/TestGraph.asset");
            editor.CreateEntryNode();
        }

        [TearDown]
        public void DisposeEnvironment()
        {
            AssetDatabase.DeleteAsset("Assets/TestGraph.asset");
            editor.Close();
            Assert.That(editor == null);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.WindowsEditor)]
        public void Window_is_not_null()
        {
            var editor = ScriptableObject.CreateInstance<BtEditor>();
            editor.Show(true);
            Assert.IsNotNull(editor);
        }

        [Test]
        public void EntryNode_is_not_null_graph_is_selected()
        {
            Assert.That(editor.entry != null);
        }

        [Test]
        [TestCase(0)]
        [TestCase(1)]
        [TestCase(2)]
        [TestCase(4)]
        [TestCase(6)]
        [TestCase(78)]
        [TestCase(100)]
        public void Can_Add_n_nodes(int n)
        {
            for (int i = 0; i < n; i++)
            {
                editor.CreateNodeView(new SearchTasksWindow.NodeType(typeof(Sequence), typeof(SequenceNode)),
                    new Rect(100, 100, BTConstants.kNodeWidht, BTConstants.kNodeHeight));
            }

            Assert.That(editor.Nodes.Count == n);
        }

        [Test]
        [TestCase(0)]
        [TestCase(1)]
        [TestCase(2)]
        [TestCase(4)]
        [TestCase(6)]
        [TestCase(20)]
        [TestCase(40)]
        public void Add_n_not_null_Nodes(int n)
        {
            for (int i = 0; i < n; i++)
            {
                editor.CreateNodeView(new SearchTasksWindow.NodeType(typeof(Sequence), typeof(SequenceNode)),
                    new Rect(100, 100, BTConstants.kNodeWidht, BTConstants.kNodeHeight));
                Assert.That(editor.Nodes[i].Task != null);
                Assert.That(editor.Nodes[i] != null);
            }
        }

        [Test]
        [TestCase(typeof(SequenceNode), typeof(Sequence))]
        [TestCase(typeof(DefaultNode), typeof(Selector))]
        [TestCase(typeof(SeekNode), typeof(Seek))]
        [TestCase(typeof(LogNode), typeof(Log))]
        [TestCase(typeof(PatrolNode), typeof(Patrol))]
        public void Can_add_node_of_type(Type drawerType, Type taskType)
        {
            editor.CreateNodeView(new SearchTasksWindow.NodeType(taskType, drawerType),
                new Rect(100, 100, BTConstants.kNodeWidht, BTConstants.kNodeHeight));
            Assert.That(editor.Nodes[0].GetType() == drawerType);
            Assert.That(editor.Nodes[0].Task.GetType() == taskType);
        }

        [Test]
        [TestCase(typeof(SequenceNode), typeof(Sequence))]
        [TestCase(typeof(DefaultNode), typeof(Selector))]
        [TestCase(typeof(SeekNode), typeof(Seek))]
        [TestCase(typeof(LogNode), typeof(Log))]
        [TestCase(typeof(PatrolNode), typeof(Patrol))]
        public void Set_root_view(Type drawerType, Type taskType)
        {
            editor.CreateNodeView(new SearchTasksWindow.NodeType(taskType, drawerType),
                new Rect(100, 100, BTConstants.kNodeWidht, BTConstants.kNodeHeight));

            NodeSocket.CurrentClickedSocket = editor.entry.exitSocket;
            
            editor.OnNodeSocketClicked(editor.Nodes[0].entrySocket);
            
            Assert.That(editor.Connections[0].StartSocket != null);
            Assert.That(editor.Connections[0].EndSocket != null);
            Assert.That(editor.Connections.Count == 1);
        }
        
        [Test]
        [TestCase(0)]
        [TestCase(1)]
        [TestCase(2)]
        [TestCase(4)]
        [TestCase(6)]
        [TestCase(20)]
        [TestCase(40)]
        public void Create_n_sequences_connected_with_one_as_root(int n)
        {
            editor.CreateNodeView(new SearchTasksWindow.NodeType(typeof(Sequence), typeof(SequenceNode)),
                new Rect(100, 100, BTConstants.kNodeWidht, BTConstants.kNodeHeight));

            NodeSocket.CurrentClickedSocket = editor.entry.exitSocket;
            
            editor.OnNodeSocketClicked(editor.Nodes[0].entrySocket);
            
            Assert.That(editor.Connections[0].StartSocket != null);
            Assert.That(editor.Connections[0].EndSocket != null);
            Assert.That(editor.Connections.Count == 1);

            for (int i = 0; i < n; i++)
            {
                editor.CreateNodeView(new SearchTasksWindow.NodeType(typeof(Sequence), typeof(SequenceNode)),
                    new Rect(100 + i, 100 + i, BTConstants.kNodeWidht, BTConstants.kNodeHeight));
                
                NodeSocket.CurrentClickedSocket = editor.Nodes[editor.Nodes.Count - 2].exitSocket;
                editor.OnNodeSocketClicked(editor.Nodes[editor.Nodes.Count - 1].entrySocket);
                
                Assert.That(editor.Connections[i].StartSocket != null);
                Assert.That(editor.Connections[i].EndSocket != null);
            }
            
            Assert.That(editor.Connections.Count == n + 1);

            
            
        }
    }
}