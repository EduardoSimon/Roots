using System.Collections;
using System.Collections.Generic;
using BT;
using UnityEditor;
using UnityEditor.VersionControl;
using UnityEngine;
using UnityEditorInternal;

public class ScriptCreator : MonoBehaviour
{
    [MenuItem("Assets/Create/BT/Action Task", false, 20)]
    static void CreateActionScript()
    {
        ProjectWindowUtil.CreateScriptAssetFromTemplateFile("Assets/BT/Resources/ActionTemplate.txt",
            "NewAction.cs");
        AssetDatabase.Refresh();
    }

    [MenuItem("Assets/Create/BT/Condition Task", false, 21)]
    static void CreateConditionScript()
    {
        ProjectWindowUtil.CreateScriptAssetFromTemplateFile("Assets/BT/Resources/ConditionTemplate.txt",
            "NewCondition.cs");
        AssetDatabase.Refresh();
    }

    [MenuItem("Assets/Create/BT/Decorator Script", false, 22)]
    static void CreateDecoratorScript()
    {
        ProjectWindowUtil.CreateScriptAssetFromTemplateFile("Assets/BT/Resources/DecoratorTemplate.txt",
            "NewCondition.cs");
        AssetDatabase.Refresh();
    }
}