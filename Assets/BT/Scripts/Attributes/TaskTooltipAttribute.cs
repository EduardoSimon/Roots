using System;

namespace BT
{
    [AttributeUsage(AttributeTargets.Class)]
    public class TaskTooltipAttribute : Attribute
    {
        public string Tooltip { get; }

        public TaskTooltipAttribute(string tooltip)
        {
            Tooltip = tooltip;
        }
    }
}