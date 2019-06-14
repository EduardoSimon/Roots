using System;
using System.Collections.Generic;
using BT.Scripts;
using RotaryHeart.Lib.SerializableDictionary;
using UnityEngine;

[CreateAssetMenu(menuName = "BT/Blackboard", fileName = "Default BlackBoard", order = 1)]
public class BlackBoard : ScriptableObject
{
    [Serializable]
    public class BBKeysDictionary : SerializableDictionaryBase<string, BlackBoardVariable>
    {
    }

    private class NotAvailableBlackBoardKeyException : Exception
    {
    }

    public string BlackboardName;
    [SerializeField] private BBKeysDictionary _bbKeys;

    public BBKeysDictionary BBKeys => _bbKeys;

    private void OnEnable()
    {
        if (_bbKeys == null)
            _bbKeys = new BBKeysDictionary();
    }

    public T GetVariable<T>(string keyName) where T : BlackBoardVariable
    {
        if (_bbKeys.ContainsKey(keyName))
            return _bbKeys[keyName] as T;

        throw new NotAvailableBlackBoardKeyException();
    }

    public bool AddVariable(BlackBoardVariable variable, string keyName)
    {
        if (_bbKeys.ContainsKey(keyName))
            return false;

        _bbKeys[keyName] = variable;
        return true;
    }
    
    
}