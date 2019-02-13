using BT_Editor;
using UnityEditor;
using UnityEngine;

namespace Editor
{
    public class SearchTasksWindow : EditorWindow
    {
        string searchString = "";
        private GUISkin _skin;
        public BTEditor parentWindow;

        private void OnEnable()
        {
            _skin = Resources.Load<GUISkin>("BTSkin");
            this.wantsMouseEnterLeaveWindow = true;
        }

        void OnGUI()
        {
            if (Event.current.type == EventType.KeyUp && Event.current.keyCode == KeyCode.Escape && EditorWindow.focusedWindow == this)
            {
                parentWindow.Focus();
                this.Close();
                parentWindow._searchTasksWindow = null;
            }
            else if (Event.current.type == EventType.MouseLeaveWindow)
            {
                parentWindow.Focus();
                this.Close();
                parentWindow._searchTasksWindow = null;
            }

            GUI.skin = _skin;
            GUILayout.BeginVertical("Task Finder", EditorStyles.toolbarButton);
            GUILayout.Space(20);
            GUILayout.BeginHorizontal();
            GUILayout.Box(Resources.Load<Texture>("search_icon"),"texture", new []{ GUILayout.MaxHeight(15), GUILayout.MaxWidth(15)});
            searchString = GUILayout.TextField(searchString,EditorStyles.textArea);
            GUILayout.EndHorizontal();
            GUILayout.EndVertical();
            
            /*
            // Do comparison here. For example
            for (int i = 0; i < items.Length; i++)
            {
                if (items[i].name.Contains(searchString))
                {
                    GUI.Label(items[i].name);
                }
            }*/
        }
        
    }
}
