using System;

namespace BT
{
    [AttributeUsage(AttributeTargets.Class, Inherited = false)]
    public class SearchMenuAttribute : Attribute
    {
        private readonly string _menuPath;
        private readonly char _separator;

        public SearchMenuAttribute(string menuPath, char separator = '/')
        {
            _menuPath = menuPath;
            _separator = separator;
        }

        public string[] GetMenuPathSplit()
        {
            return _menuPath.Split(new[] {_separator}, StringSplitOptions.RemoveEmptyEntries);
        }
    }
}