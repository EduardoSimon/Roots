using UnityEditor;
using UnityEngine;

namespace BT
{
    public class SequenceDrawer : EditorWindow
    {
        private void OnGUI()
        {
            GUILayout.Label("Hello im a sequence");
        }
    }
}