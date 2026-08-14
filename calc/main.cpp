#include <iostream>
#include <stdexcept>
#include "calc.hpp"
#include <limits>
#include <string>

enum class Operation {
	Exit = 0,
	Addition = 1,
	Subtraction = 2,
	Multiplication = 3,
	Division = 4
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
		std::cout << "0. Exit" << std::endl;

		if(!(std::cin >> operationInput)) {
			std::cout << "Invalid operation" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if(operationInput > static_cast<int>(Operation::Division) || 
				operationInput < static_cast<int>(Operation::Exit)) {
			std::cout << "Unknown operation" << std::endl;
			continue;
		}

		return static_cast<Operation>(operationInput);
	}
}

void executeOperation(Operation operation, double firstNumber, double secondNumber) {
	double result;

	try {
		switch(operation) {
			case Operation::Addition:	
				result = addition(firstNumber, secondNumber);
				std::cout << "Addition = " << result << std::endl;
				break;

			case Operation::Subtraction:
				result = subtraction(firstNumber, secondNumber);
				std::cout << "Subtraction = " << result << std::endl;
				break;

			case Operation::Multiplication:
				result = multiplication(firstNumber, secondNumber);
				std::cout << "Multiplication = " << result << std::endl;
				break;

			case Operation::Division:
				result  = division(firstNumber, secondNumber);
				std::cout << "Division = " << result << std::endl;
				break;

			default:
				std::cout << "Unknown operation" << std::endl;
				break;
		}
	} catch (const std::runtime_error &error) {
		std::cout << "Error: " << error.what() << std::endl;
	}
}

int main() {

	double firstNumber, secondNumber, result;
	Operation operation = Operation::Exit;

	while (true) { 

		operation = readOperation();

		if(operation == Operation::Exit) {
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		firstNumber = readNumber("Enter first number = ");
		secondNumber = readNumber("Enter second number = ");

		executeOperation(operation, firstNumber, secondNumber);
	}

	return 0;
}

