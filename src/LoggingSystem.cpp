#include "ConsoleColors.h"
#include "LoggingSystem.h"
#include <fstream>
#include <string>
#include <iostream>


namespace LoggingSystem {

	void Logger::log(enum Level level, const std::string& msg) {
		std::cout << "[ " << colors[level] << levels[level] << RESET << " ] " << msg << "\n";
		
		if (out->is_open())
			out* << "[ " << levels[level] << " ] " << msg << "\n";
	}

	void Logger::log(enum Level level, const char* msg) {
		std::cout << "[ " << colors[level] << levels[level] << RESET << " ] " << msg << "\n";

		if (out->is_open())
			out* << "[ " << levels[level] << " ] " << msg << "\n";
	}

	bool Logger::changeLogFile(const std::string& new_file) {
		out->close();
		out->open(new_file, std::ios::app);
		return out->is_open();
	}

	bool Logger::changeLogFile(const char* new_file) {
		out->close();
		out->open(new_file, std::ios::app);
		return out->is_open();
	}

}