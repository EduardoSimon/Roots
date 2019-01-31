using System.Collections;
using System.Collections.Generic;
using System.Data;
using BT_Core;
using NUnit.Framework;
using NUnit.Framework.Internal;
using UnityEditor.VersionControl;
using UnityEngine;
using UnityEngine.TestTools;
using Behaviour = BT_Core.Behaviour;

namespace BT_Tests
{
    public class NewTestScript
    {
        [Test]
        public void Tree_Is_Not_Null()
        {
            var tree = ScriptableObject.CreateInstance<BehaviourTree>();
            
            Assert.IsNotNull(tree);
        }

        [Test]
        public void Tree_Returns_Status_Not_Null()
        {
            var tree = ScriptableObject.CreateInstance<BehaviourTree>();
            tree.AddRoot(new Behaviour());
            BehaviourStatus status = tree.Tick();
            
            Assert.IsNotNull(status);
        }

        [TestCase(BehaviourStatus.Failed)]
        public void Tree_Returns_Initial_Status(BehaviourStatus status)
        {
            var tree = ScriptableObject.CreateInstance<BehaviourTree>();
            tree.AddRoot(new Behaviour());
            BehaviourStatus returnedStatus = tree.Tick();
            
            Assert.That(returnedStatus == status);
        }

        [Test]
        public void Tree_hasnt_null_root()
        {
            var tree = ScriptableObject.CreateInstance<BehaviourTree>();
            tree.AddRoot(new Behaviour());
            
            Assert.That(tree.RootNode != null);
        }
    }
}
