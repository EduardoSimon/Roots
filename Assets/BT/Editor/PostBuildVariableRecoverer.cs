using UnityEditor;
using UnityEditor.Callbacks;

namespace BT.Editor
{
    public class PostBuildVariableRecoverer
    {
        [PostProcessBuild]
        static void Recover(BuildTarget target, string pathToBuildProject)
        {
            var editor = EditorWindow.GetWindow<BtEditor>();

            BehaviorTreeGraph graph = null;
            if (editor.currentGraph != null)
                graph = editor.currentGraph;
            
            editor.Close();

            editor = BtEditor.Init();
        }
    }
}