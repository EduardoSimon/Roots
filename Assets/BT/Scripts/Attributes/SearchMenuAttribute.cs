using System;
using System.Text;

namespace BT
{
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false,Inherited = false)]
    public class SearchMenuAttribute : Attribute
    {
        private string _menuPath;
        private char _separator;

        public SearchMenuAttribute(string menuPath, char separator = '/')
        {
            this._menuPath = menuPath;
            this._separator = separator;
        }

        public string[] GetMenuPathSplit()
        {
            return _menuPath.Split(new []{_separator}, StringSplitOptions.RemoveEmptyEntries);
        }
    }
}