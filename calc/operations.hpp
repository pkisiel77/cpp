#ifndef OPERATIONS_HPP
#define OPERATIONS_HPP

#include <string>

enum class Operation {
	Exit = 0,
	Addition = 1,
	Subtraction = 2,
	Multiplication = 3,
	Division = 4,
	Power = 5,
	Power2 = 6,
	History = 7,
	SaveHistory = 8
};

std::string operationName(Operation operation);
double calculateResult(Operation operation, double firstNumber, double secondNumber);
std::string formatResult(double result);
std::string executeOperation(Operation operation, double firstNumber, double secondNumber);

#endif
