#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <string>

double parseNumber(const std::string &text);
double calculate(int selected, double firstNumber, double secondNumber);
std::string calculateStatusMessage(const char *operationName, double result);
std::string selectedActionMessage(const char *menuItem);

#endif
