using UnityEngine;

namespace BT
{
    public class DefaultNodeView : BaseNodeView
    {
        private void OnGUI()
        {
            GUILayout.Label("Default Node Drawer");
            GUILayout.Label("Please create a Custom Node Drawer and add it with the CustomNodeDrawer attribute");
        }
    }
}