#ifndef CLI_HPP
#define CLI_HPP

#include <string>

void printHelp(const std::string &programName);
bool isHelpOption(const std::string &argument);
bool hasTooManyArguments(int argc);

#endif
