using UnityEditor;
using UnityEngine;

namespace BT.Scripts.Drawers
{
    public class NodeConnection
    {
        private Vector2 _startPoint;
        private Vector2 _endPoint;
        private Color _connectionColor;

        public NodeConnection(Vector2 startPoint, Vector2 endPoint, Color connectionColor)
        {
            _startPoint = startPoint;
            _endPoint = endPoint;
            _connectionColor = connectionColor;
        }

        public void Draw()
        {
            Handles.color = _connectionColor;
            Handles.DrawLine(_startPoint,_endPoint);
        }

        public void Drag(Vector2 drag)
        {
            _startPoint += drag;
            _endPoint += drag;
        }

        public void Drag(Vector2 p1Drag, Vector2 p2Drag)
        {
            _startPoint += p1Drag;
            _endPoint += p2Drag;
        }
    }
}