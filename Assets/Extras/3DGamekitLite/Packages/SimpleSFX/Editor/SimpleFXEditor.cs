using UnityEditor;
using UnityEngine;

namespace Gamekit3D.SimpleSFX
{

    [CustomEditor(typeof(SimpleFXSynth))]
    public class SimpleFXEditor : UnityEditor.Editor
    {
        public override void OnInspectorGUI()
        {
            using (var cc = new EditorGUI.ChangeCheckScope())
            {
                base.OnInspectorGUI();
                if (GUILayout.Button("Play"))
                {
                    var s = target as SimpleFXSynth;
                    s.Play();
                }
            }
        }

    }
}