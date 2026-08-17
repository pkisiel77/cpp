
#include "operations.hpp"
#include "calc.hpp"

#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdexcept>

std::string operationName(Operation operation) {
	switch(operation) {
		case Operation::Addition:
			return "Addition";
		case Operation::Subtraction:
			return "Subtraction";
		case Operation::Multiplication:
			return "Multiplication";
		case Operation::Division:
			return "Division";
		case Operation::Power:
			return "Power";
		case Operation::Power2:
			return "Power^2";
		case Operation::History:
			return "History";
		case Operation::SaveHistory:
			return "Save history";
		case Operation::ClearHistory:
			return "Clear history";
		case Operation::Exit:
			return "Exit";
		default:
			return "Unknown";
	}
}

double calculateResult(Operation operation, double firstNumber, double secondNumber) {
	switch(operation) {
		case Operation::Addition:
			return addition(firstNumber, secondNumber);
		case Operation::Subtraction:
			return subtraction(firstNumber, secondNumber);
		case Operation::Multiplication:
			return multiplication(firstNumber, secondNumber);
		case Operation::Division:
			return division(firstNumber, secondNumber);
		case Operation::Power:
			return power(firstNumber, secondNumber);
		case Operation::Power2:
			return power(firstNumber);

		default:
			throw std::runtime_error("Unknown operation");
	}
}

std::string formatResult(double result) {
	std::ostringstream stream;
	stream << std::fixed << std::setprecision(2) << result;
	return stream.str();
}

std::string executeOperation(Operation operation, double firstNumber, double secondNumber) {
	try {
		double result = calculateResult(operation, firstNumber, secondNumber);
		std::string entry = operationName(operation) + " = " + formatResult(result);

		std::cout << entry << std::endl;

		return entry;
	} catch (const std::runtime_error &error) {
		std::string entry = std::string("Error: ") + error.what();

		std::cout << entry << std::endl;

		return entry;
	}
}
