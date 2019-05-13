using UnityEditor;
using UnityEngine;
using UnityEditor.SceneManagement;

namespace BT.Editor
{
    public class EditorFix {
        public static void SetObjectDirty(Object o) {
            EditorUtility.SetDirty(o);
        }
 
        public static void SetObjectDirty(GameObject go) {
            EditorUtility.SetDirty(go);
            EditorSceneManager.MarkSceneDirty(go.scene); //This used to happen automatically from SetDirty
        }
 
        public static void SetObjectDirty(Component comp) {
            EditorUtility.SetDirty(comp);
            EditorUtility.SetDirty(comp.gameObject);
            EditorSceneManager.MarkSceneDirty(comp.gameObject.scene); //This used to happen automatically from SetDirty
        }
    }

}
