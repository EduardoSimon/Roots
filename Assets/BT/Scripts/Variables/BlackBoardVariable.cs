using System;
using UnityEditor;
using UnityEngine;

namespace BT.Scripts
{
    [System.Serializable]
    public class BlackBoardVariable : ScriptableObject
    {
        public BaseNodeView node;
        [SerializeField] public string guid;

        public string Guid => guid;

        public  virtual void SaveBlackboardVariable() {}

        private void OnEnable()
        {

        }

        public virtual void Init(string guid, BaseNodeView nodeView)
        {
            if (guid == null)
            {
                this.guid = GUID.Generate().ToString();
                
                if (nodeView != null)
                {
                    node = nodeView;
                    AssetDatabase.AddObjectToAsset(this, node);
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(node));
                }
                else
                    throw new ArgumentNullException(nameof(nodeView),"Trying to create a node variable with a null node"); 
            }
            else
            {
                this.guid = guid;
                
                if (nodeView != null)
                {
                    node = nodeView;
                    AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(node));
                }
                else
                    throw new ArgumentNullException(nameof(nodeView),"Trying to create a node variable with a null node"); 
                
            }
            
                       
        }
        
        public virtual void DrawVariableInspector(string label) {}

        public override int GetHashCode()
        {
            unchecked
            {
                var result = 0;
                result = (result * 397) ^ node.GetHashCode();
                result = (result * 397) ^ node.GUID.GetHashCode();
                return result;
            }
        }

        public override bool Equals(object other)
        {
            var cast = (BlackBoardVariable) other;

            if (cast == null)
                return false;

            if (ReferenceEquals(cast, this))
                return true;

            return false;
        }
    }
}