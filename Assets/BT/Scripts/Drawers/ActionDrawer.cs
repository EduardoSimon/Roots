using UnityEditor;
using UnityEngine;

namespace BT
{
    public class ActionDrawer : EditorWindow
    {   
        private void OnGUI()
        {
            GUILayout.Label("Hello im an action");
        }
    }
}