using UnityEngine;

namespace BT
{
    public class DefaultNode : BaseNode
    {
        private void OnGUI()
        {
            GUILayout.Label("Default Node Drawer");
            GUILayout.Label("Please create a Custom Node Drawer and add it with the CustomNodeDrawer attribute");
        }
    }
}