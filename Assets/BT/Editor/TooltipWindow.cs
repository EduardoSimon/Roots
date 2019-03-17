using UnityEditor;
using UnityEngine;

namespace BT.Editor
{
    public class TooltipWindow : EditorWindow
    {
        public string Tooltip;

        private void OnGUI()
        {
            GUILayout.BeginHorizontal();
            if(GUILayout.Button("Close"))
                Close();
            GUILayout.EndHorizontal();
            
            GUILayout.BeginVertical();
            GUILayout.Label(Tooltip);
            GUILayout.EndVertical();
        }
    }
}