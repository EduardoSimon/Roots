using System;
using System.Collections.Generic;
using BT.Scripts;
using RotaryHeart.Lib.SerializableDictionary;
using UnityEditor;
using UnityEngine;

[CreateAssetMenu(menuName = "BT/Blackboard", fileName = "Default BlackBoard", order = 1)]
public class BlackBoard : ScriptableObject
{
    private class NotAvailableBlackBoardKeyException : Exception
    {
    }

    [Serializable]
    public class Key
    {
        public string keyName;
        public BlackBoardVariable Variable;

        public Key(string keyName, BlackBoardVariable variable)
        {
            this.keyName = keyName;
            Variable = variable;
        }
    }

    public string BlackboardName;
    [SerializeField] public List<Key> _bbKeys;

    public string[] Keys
    {
        get
        {
            string[] array = new string[_bbKeys.Count];
            for (int i = 0; i < _bbKeys.Count; i++)
            {
                array[i] = _bbKeys[i].keyName;
            }

            return array;
        }
    }

    private void OnEnable()
    {
        if (_bbKeys == null)
            _bbKeys = new List<Key>();

        foreach (var bbKey in _bbKeys)
        {
            TransformBlackBoardVariable variable = bbKey.Variable as TransformBlackBoardVariable;
            
            if (variable != null)
                variable.Variable = null;
        }
    }

    public T GetVariable<T>(string keyName) where T : BlackBoardVariable
    {
        for (int i = 0; i < _bbKeys.Count; i++)
        {
            if (_bbKeys[i].keyName == keyName)
                return _bbKeys[i].Variable as T;
        }

        throw new NotAvailableBlackBoardKeyException();
    }

    public BlackBoardVariable GetVariable(string keyName)
    {
        for (int i = 0; i < _bbKeys.Count; i++)
        {
            if (_bbKeys[i].keyName == keyName)
                return _bbKeys[i].Variable;
        }

        throw new NotAvailableBlackBoardKeyException();
    }

    public bool AddVariable(BlackBoardVariable variable, string keyName)
    {
        for (int i = 0; i < _bbKeys.Count; i++)
        {
            if (_bbKeys[i].keyName == keyName)
                return false;
        }

        _bbKeys.Add(new Key(keyName, variable));
        
#if UNITY_EDITOR
        AssetDatabase.AddObjectToAsset(variable, this);
        AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(this));
#endif
        return true;
    }

    public bool RemoveVariable(string keyName)
    {
        for (int i = 0; i < _bbKeys.Count; i++)
        {
            if (_bbKeys[i].keyName == keyName)
            {
                ScriptableObject.DestroyImmediate(_bbKeys[i].Variable,true);
                _bbKeys.Remove(_bbKeys[i]);
                return true;
            }
        }

        return false;
    }
}