using System;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

namespace BT_Editor
{
    public class BTEditor : EditorWindow
    {
        private Vector2 offset;
        private Vector2 drag;
        private static BTEditor _editor;

        [MenuItem("BT/Editor")]
        static void Init()
        {
            _editor = (BTEditor) EditorWindow.CreateInstance<BTEditor>();
            _editor.Show();
            _editor.Focus();
        }

        private void OnGUI()
        {
            DrawBackgroundGrid(20,0.2f,Color.grey);
            DrawBackgroundGrid(100,0.4f,Color.grey);
            
            GUIStyle style = new GUIStyle();
            style.fontSize = 40;
            float textX = position.x + position.width - 500;
            float textY = position.y + position.height - 200;
            GUI.Label(new Rect( textX, textY,500, 200),"Behavior Tree", EditorStyles.label );
        }
        
        private void DrawBackgroundGrid(float gridSpacing, float gridOpacity, Color gridColor)
        {
            int widthDivs = Mathf.CeilToInt(position.width / gridSpacing);
            int heightDivs = Mathf.CeilToInt(position.height / gridSpacing);
 
            Handles.BeginGUI();
            Handles.color = new Color(gridColor.r, gridColor.g, gridColor.b, gridOpacity);
 
            offset += drag * 0.5f;
            Vector3 newOffset = new Vector3(offset.x % gridSpacing, offset.y % gridSpacing, 0);
 
            for (int i = 0; i < widthDivs; i++)
            {
                Handles.DrawLine(new Vector3(gridSpacing * i, -gridSpacing, 0) + newOffset, new Vector3(gridSpacing * i, position.height, 0f) + newOffset);
            }
 
            for (int j = 0; j < heightDivs; j++)
            {
                Handles.DrawLine(new Vector3(-gridSpacing, gridSpacing * j, 0) + newOffset, new Vector3(position.width, gridSpacing * j, 0f) + newOffset);
            }
 
            Handles.color = Color.white;
            Handles.EndGUI();
        }
    }
    
}