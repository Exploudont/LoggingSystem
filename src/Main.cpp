#define DEBUG

#include "LoggingSystem.h"
//#include <iostream>

int main() {
	/*
	std::ofstream ofs("Log.log", std::ofstream::out);

	ofs << "lorem ipsum";
	*/

	//std::cout << BRIGHT_GREEN << "Green" << RESET << "\n";


	/*
	LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Info, "test");
	LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Debug, "test");
	LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Warning, "test");
	LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Error, "test");
	LoggingSystem::Logger::log(LoggingSystem::Logger::Level::Fatal, "test");
	*/

	LOG_INFO("Info");
	LOG_DEBUG("Debug");
	LOG_WARNING("Warning");
	LOG_ERROR("Error");
	LOG_FATAL("Fatal");


	return 0;
}