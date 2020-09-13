# LoggingSystem
Very basic, C++ Logging System.

## How To Used
You can use macros to create logs.
- ```LOG_INFO``` to create an ```Info``` log;
- ```LOG_DEBUG``` to create an ```Debug``` log;
- ```LOG_WARNING``` to create an ```Warning``` log;
- ```LOG_ERROR``` to create an ```Error``` log;
- ```LOG_FATAL``` to create an ```Fatal``` log.

You can change the default log file (```log.txt```) using ```CHANGE_LOG_FILE``` macro.

## Important
Logs are show only if ```DEBUG``` is defined.