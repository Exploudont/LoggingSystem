#ifndef _LOGGING_SYSTEM_H
    #define _LOGGING_SYSTEM_H

#include "ConsoleColors.h"
#include <fstream>
#include <string>
#include <iostream>

/*
Namespace to create logs.
*/
namespace LoggingSystem {

    static const char *levels[] = {
            "Info",
            "Debug",
            "Warning",
            "Error",
            "Fatal"
    };

    static const char* colors[] = {
        WHITE,
        BRIGHT_GREEN,
        YELLOW,
        MAGENTA,
        RED
    };


    #define DEFAULT_FILE "log.txt"
    static const char* file_path = DEFAULT_FILE ;
    static std::ofstream* out = new std::ofstream(file_path, std::ios::app);

    /*
    Internal class that create the log.
    */
    class Logger {

    public:

        /*
        Descrive the level of the log.
        */
        enum Level {
            Info,
            Debug,
            Warning,
            Error,
            Fatal
        };

        /*
        Create a Log specifyng the level and the message.
        */
        static void log(enum Level level, const std::string& msg);

        /*
        Create a Log specifyng the level and the message.
        */
        static void log(enum Level level, const char* msg);

        /*
        Change the default log file.
        */
        static bool changeLogFile(const std::string& new_file);

        /*
        Change the default log file.
        */
        static bool changeLogFile(const char* new_file);

        /*
        Delete previus log in file.
        */
        //static void deletePreviudLog();
    };

}

#define DEBUG true
#ifdef DEBUG
    #define LOG_INFO(msg) LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Info, msg)
    #define LOG_DEBUG(msg) LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Debug, msg)
    #define LOG_WARNING(msg) LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Warning, msg)
    #define LOG_ERROR(msg) LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Error, msg)
    #define LOG_FATAL(msg) LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Fatal, msg)
    #define CHANGE_LOG_FILE(file) LoggingSystem::Logger::changeLogFile(file)
#else
    #define LOG_INFO(msg)
    #define LOG_DEBUG(msg)
    #define LOG_WARNING(msg)
    #define LOG_ERROR(msg)
    #define LOG_FATAL(msg)
    #define CHANGE_LOG_FILE(file)
#endif

#endif