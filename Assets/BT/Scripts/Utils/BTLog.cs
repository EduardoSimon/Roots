using UnityEngine;

namespace BT.Editor
{
    public static class BTLog
    {
        public enum ELogLevel
        {
            Verbose = 0,
            Log = 1,
            Warning = 2,
            Error = 3,
            Succeded = 4,
        }

        private static ELogLevel _logLevel = ELogLevel.Verbose;

        public static ELogLevel LogLevel
        {
            get { return _logLevel; }
            set
            {
                var eLogLevel = value;

                if (eLogLevel != _logLevel)
                    _logLevel = value;
            }
        }


        public static void Log(object message, ELogLevel level = ELogLevel.Verbose)
        {
            if (_logLevel <= level)
            {
                switch (level)
                {
                    case ELogLevel.Verbose:
                    case ELogLevel.Log:
                        Debug.Log("<color=white><b>BT LOG:</b></color> " + message);
                        break;
                    case ELogLevel.Warning:
                        Debug.LogWarning("<color=yellow><b>BT WARNING:</b></color> " + message);
                        break;
                    case ELogLevel.Error:
                        Debug.LogError("<color=red><b>BT ERROR:</b></color> " + message);
                        break;
                    case ELogLevel.Succeded:
                        Debug.Log("<color=green><b>BT RUNNING:</b></color> " + message);
                        break;
                }
            }
        }
        
    }
}