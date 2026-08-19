#include "cli.hpp"

#include <iostream>


void printHelp(const std::string &programName) {
	std::cout << "Usage: " << std::endl;
	std::cout << " " << programName << " [history-file] " << std::endl;
	std::cout << std::endl;
	std::cout << "Options:" << std::endl;
	std::cout << " --help    Show help" << std::endl;
	std::cout << " -h        Show help" << std::endl;
	std::cout << std::endl;
	std::cout << "Examples:" << std::endl;
	std::cout << " " << programName << std::endl;
	std::cout << " " << programName << " my-history.txt" << std::endl;
}

bool isHelpOption(const std::string &argument) {
	return argument == "--help" || argument == "-h";
}

bool hasTooManyArguments(int argc) {
	return argc > 2;
}

