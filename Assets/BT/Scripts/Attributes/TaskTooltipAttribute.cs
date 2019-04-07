using System;

namespace BT
{
    [AttributeUsage(AttributeTargets.Class)]
    public class TaskTooltipAttribute : Attribute
    {
        public TaskTooltipAttribute(string tooltip)
        {
            Tooltip = tooltip;
        }

        public string Tooltip { get; }
    }
}