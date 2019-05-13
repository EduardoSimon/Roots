using System;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    public class BlackBoardVariable : ScriptableObject
    {
        public BaseNodeView node;

        public  virtual void SaveBlackboardVariable() {}

        public virtual void Init(BaseNodeView nodeView)
        {
            if (nodeView != null)
            {
                node = nodeView;
                AssetDatabase.AddObjectToAsset(this, node);
                AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(node));
            }
            else
                throw new ArgumentNullException(nameof(nodeView),"Trying to create a node variable with a null node");            
        }
        
        public virtual void DrawVariableInspector(string label) {}
    }
}