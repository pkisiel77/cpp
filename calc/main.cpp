#include <iostream>
#include <stdexcept>
#include "calc.hpp"
#include <limits>
#include <string>
#include <utility>

enum class Operation {
	Exit = 0,
	Addition = 1,
	Subtraction = 2,
	Multiplication = 3,
	Division = 4,
	Power = 5,
	Power2 = 6
};

double readNumber(const std::string &message) {
	double number;

	while(true) {
		std::cout << message << std::endl;

		if (std::cin >> number) {
			return number;
		}

		std::cout << "Invalid number" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

Operation readOperation() {
	int operationInput;

	while(true) {

		std::cout << "Choose operation:" << std::endl;
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Subtraction" << std::endl;
		std::cout << "3. Multiplication" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "5. Power" << std::endl;
		std::cout << "6. Power^2" << std::endl;
		std::cout << "0. Exit" << std::endl;

		if(!(std::cin >> operationInput)) {
			std::cout << "Invalid operation" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if(std::cmp_greater(operationInput, static_cast<int>(Operation::Power2)) || 
				std::cmp_less(operationInput, static_cast<int>(Operation::Exit))) {
			std::cout << "Unknown operation" << std::endl;
			continue;
		}

		return static_cast<Operation>(operationInput);
	}
}


std::string operationName(Operation operation);

double calculateResult(Operation operation, double firstNumber, double secondNumber);


void executeOperation(Operation operation, double firstNumber, double secondNumber) {
	try {
		double result = calculateResult(operation, firstNumber, secondNumber);
		std::cout << operationName(operation) << " = " << result << std::endl;
	} catch (const std::runtime_error &error) {
		std::cout << "Error: " << error.what() << std::endl;
	}
}

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

int main() {

	double firstNumber, secondNumber;
	Operation operation = Operation::Exit;

	while (true) { 

		operation = readOperation();

		if(operation == Operation::Exit) {
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		firstNumber = readNumber("Enter first number = ");

		if(operation != Operation::Power2) {
			secondNumber = readNumber("Enter second number = ");
		}

		executeOperation(operation, firstNumber, secondNumber);
	}

	return 0;
}
