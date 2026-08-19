#ifndef CLI_HPP
#define CLI_HPP

#include <string>

struct AppConfig {
	std::string historyFileName = "history.txt";
};

void printHelp(const std::string &programName);
bool isHelpOption(const std::string &argument);
bool hasTooManyArguments(int argc);
AppConfig parseArguments(int argc, char *argv[]);

#endif
