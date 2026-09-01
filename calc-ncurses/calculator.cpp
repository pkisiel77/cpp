#include "calculator.hpp"

#include <stdexcept>

double parseNumber(const std::string &text) {
	return std::stod(text);
}

double calculate(int selected, double firstNumber, double secondNumber) {
	switch(selected) {
		case 0:
			return firstNumber + secondNumber;
		case 1:
			return firstNumber - secondNumber;
		case 2:
			return firstNumber * secondNumber;
		case 3:
			if(secondNumber == 0) {
				throw std::runtime_error("Division by zero");
			}
			return firstNumber / secondNumber;
		default:
			throw std::runtime_error("Unknown operation");
	}
}

std::string calculateStatusMessage(const char *operationName, double result) {
	return std::string(operationName) + " = " + std::to_string(result);
}

std::string selectedActionMessage(const char *menuItem) {
	return std::string("Selected: ") + menuItem;
}


