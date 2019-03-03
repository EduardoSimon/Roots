using System.Collections;
using System.Collections.Generic;
using BT;
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
            BtEditor editor = ScriptableObject.CreateInstance<BtEditor>();
            editor.Show(true);
            Assert.IsNotNull(editor);      
        }

        [Test]
        public void Window_is_null_when_destroyed()
        {
            BtEditor editor = ScriptableObject.CreateInstance<BtEditor>();
            editor.Show(true);
            editor.Close();
            Assert.That(editor == null);
        }
        
        
    }
}
