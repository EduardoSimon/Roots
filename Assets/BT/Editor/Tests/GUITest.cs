using BehaviorDesigner.Runtime.Tasks.Basic.UnityGameObject;
using BT;
using BT.Editor;
using NUnit.Framework;
using UnityEditor;
using UnityEngine;
using UnityEngine.TestTools;

namespace GUITests
{
    public class GUITest
    {
        [Test]
        [UnityPlatform(RuntimePlatform.WindowsEditor)]
        public void Window_is_not_null()
        {
            var editor = ScriptableObject.CreateInstance<BtEditor>();
            editor.Show(true);
            Assert.IsNotNull(editor);
        }

        [Test]
        public void Window_is_null_when_destroyed()
        {
            var editor = ScriptableObject.CreateInstance<BtEditor>();
            editor.Show(true);
            editor.Close();
            Assert.That(editor == null);
        }
        
        [Test]
        public void EntryNode_is_not_null_graph_is_selected()
        {
            var editor = ScriptableObject.CreateInstance<BtEditor>();
            editor.Show(true);
            editor.currentGraph = ScriptableObject.CreateInstance<BehaviorTreeGraph>();
            AssetDatabase.CreateAsset(editor.currentGraph, "Assets/TestGraph.asset");
            editor.CreateEntryNode();
            Assert.That(editor.entry != null);
            AssetDatabase.DeleteAsset("Assets/TestGraph.asset");
            editor.Close();
        }
        
    }
}