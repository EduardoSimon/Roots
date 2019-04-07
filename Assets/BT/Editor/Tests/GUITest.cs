using BT;
using NUnit.Framework;
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
    }
}