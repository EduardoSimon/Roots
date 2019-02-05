using System.Collections;
using System.Collections.Generic;
using System.Data;
using BT_Core;
using NUnit.Framework;
using NUnit.Framework.Internal;
using UnityEditor.VersionControl;
using UnityEngine;
using UnityEngine.TestTools;
using Task = BT_Core.Task;

namespace BT_Tests
{
    public class BTCoreTests
    {
        public class BasicTreeTests
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
                tree.AddRoot(new Task());
                var status = tree.Tick();
            
                Assert.IsNotNull(status);
            }

            [TestCase(TaskStatus.Running)]
            public void Tree_Returns_Status(TaskStatus status)
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                tree.AddRoot(new Task());
                var returnedStatus = tree.Tick();
            
                Assert.That(returnedStatus == status);
            }

            [Test]
            public void Tree_has_not_null_root()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                tree.AddRoot(new Task());
            
                Assert.That(tree.RootNode != null);
            }
        }

        public class SequenceTests
        {
            [Test]
            public void Sequence_has_children()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                tree.AddRoot(new Sequence(new []
                {
                    new Task(), new Task(), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var sequence = tree.RootNode as Sequence;
                Assert.That(sequence != null && sequence.Children.Count > 0);
            }
    
            [Test]
            public void Sequence_Success_after_all_children_succeeded()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Sequence(new ATask[]
                {
                    new MockTask(TaskStatus.Succeeded),
                    new MockTask(TaskStatus.Succeeded),
                    new MockTask(TaskStatus.Succeeded), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var sequence = tree.RootNode as Sequence;
                Assert.That(sequence != null  && returnedStatus == TaskStatus.Succeeded);
            }
            
            [Test]
            public void Sequence_Fails_after_any_children_fails()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Sequence(new ATask[]
                {
                    new MockTask(TaskStatus.Succeeded),
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Succeeded), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var sequence = tree.RootNode as Sequence;
                Assert.That(sequence != null  && returnedStatus == TaskStatus.Failed);
            }
            
            
            [Test]
            public void Sequence_returns_running_when_any_of_its_children_is_running()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Sequence(new ATask[]
                {
                    new MockTask(TaskStatus.Succeeded),
                    new MockTask(TaskStatus.Running),
                    new MockTask(TaskStatus.NonInitialized), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var sequence = tree.RootNode as Sequence;
                Assert.That(sequence != null  && returnedStatus == TaskStatus.Running);
            }
    
            [Test]
            public void Sequence_returns_Success_when_it_has_no_children()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
    
                tree.AddRoot(new Sequence());
                
                var returnedStatus = tree.Tick();
    
                var sequence = tree.RootNode as Sequence;
                Assert.That(sequence != null  && returnedStatus == TaskStatus.Failed);
            }
        }
        
        public class SelectorTests
        {
                        
            [Test]
            public void Selector_has_children()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                tree.AddRoot(new Selector(new []
                {
                    new Task(), new Task(), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var selector = tree.RootNode as Selector;
                Assert.That(selector != null && selector.Children.Count > 0);
            }
            
            [Test]
            public void Selector_Success_after_all_children_succeeded()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Selector(new ATask[]
                {
                    new MockTask(TaskStatus.Succeeded),
                    new MockTask(TaskStatus.Succeeded),
                    new MockTask(TaskStatus.Succeeded), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var selector = tree.RootNode as Selector;
                Assert.That(selector != null  && returnedStatus == TaskStatus.Succeeded);
            }
            
            [Test]
            public void Selector_Success_after_any_children_succeeded()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Selector(new ATask[]
                {
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Succeeded),
                    new MockTask(TaskStatus.Failed), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var selector = tree.RootNode as Selector;
                Assert.That(selector != null  && returnedStatus == TaskStatus.Succeeded);
            }
            
            [Test]
            public void Selector_in_running_after_any_children_running()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Selector(new ATask[]
                {
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Running),
                    new MockTask(TaskStatus.Running), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var selector = tree.RootNode as Selector;
                Assert.That(selector != null  && returnedStatus == TaskStatus.Running);
            }
            
            [Test]
            public void Selector_fails_after_every_children_fails()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Selector(new ATask[]
                {
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Failed), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var selector = tree.RootNode as Selector;
                Assert.That(selector != null  && returnedStatus == TaskStatus.Failed);
            }
        
            [Test]
            public void Selector_success_when_last_node_has_succeeded()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Selector(new ATask[]
                {
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Succeeded), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var selector = tree.RootNode as Selector;
                Assert.That(selector != null  && returnedStatus == TaskStatus.Succeeded);
            }
            
            [Test]
            public void Selector_is_running_when_last_node_is_running()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Selector(new ATask[]
                {
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Failed),
                    new MockTask(TaskStatus.Running), 
                }));
                
                var returnedStatus = tree.Tick();
    
                var selector = tree.RootNode as Selector;
                Assert.That(selector != null  && returnedStatus == TaskStatus.Running);
            }
            
            [Test]
            public void Selector_fails_if_it_has_no_children()
            {
                var tree = ScriptableObject.CreateInstance<BehaviourTree>();
                
                tree.AddRoot(new Selector());
                
                var returnedStatus = tree.Tick();
    
                var selector = tree.RootNode as Selector;
                Assert.That(selector != null  && returnedStatus == TaskStatus.Failed);
            }
        }     
    }  
}
