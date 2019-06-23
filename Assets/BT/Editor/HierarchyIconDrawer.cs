using BT.Runtime;
using UnityEditor;
using UnityEngine;


namespace BT.Editor
{
/*The MIT License (MIT)
Copyright (c) 2016 Edward Rowe (@edwardlrowe)
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/


/// <summary>
/// Draws a Comment Icon on GameObjects in the Hierarchy that contain the Comment component.
/// </summary>
[InitializeOnLoad]
public class HierarchyIconDrawer
{
    private static readonly Texture2D Icon;

    static HierarchyIconDrawer()
    {
        Icon = AssetDatabase.LoadAssetAtPath("Assets/Gizmos/tree_icon.png", typeof(Texture2D)) as Texture2D;

        if (Icon == null)
        {
            return;
        } 

        EditorApplication.hierarchyWindowItemOnGUI += DrawIconOnWindowItem;
    }

    private static void DrawIconOnWindowItem(int instanceID, Rect rect)
    {
        if (Icon == null)
        {
            return;
        }

        GameObject gameObject = EditorUtility.InstanceIDToObject(instanceID) as GameObject;

        if (gameObject == null)
        {
            return;
        }

        
        var comment = gameObject.GetComponent<BehaviorTreeController>();
        if (comment != null && comment.treeGraph != null)
        {
            float iconWidth = 15;
            EditorGUIUtility.SetIconSize(new Vector2(iconWidth, iconWidth));
            var padding = new Vector2(5, 0);
            var iconDrawRect = new Rect(
                                   rect.xMax - (iconWidth + padding.x), 
                                   rect.yMin, 
                                   rect.width, 
                                   rect.height);
            var iconGUIContent = new GUIContent(Icon);
            EditorGUI.LabelField(iconDrawRect, iconGUIContent);
            EditorGUIUtility.SetIconSize(Vector2.zero);
        }
    }
}
}