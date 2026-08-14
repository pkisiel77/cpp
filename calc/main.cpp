#include <iostream>
#include <stdexcept>
#include "calc.hpp"
#include <limits>
#include <string>

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

int readOperation() {
	int operation;

	while(true) {

		std::cout << "Choose operation:" << std::endl;
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Subtraction" << std::endl;
		std::cout << "3. Multiplication" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "0. Exit" << std::endl;

		if(!(std::cin >> operation)) {
			std::cout << "Invalid operation" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if(operation > 4 || operation < 0) {
			std::cout << "Unknown operation" << std::endl;
			continue;
		}

		return operation;
	}
}

void executeOperation(int operation, double firstNumber, double secondNumber) {
	double result;

	try {
		switch(operation) {
			case 1:	
				result = addition(firstNumber, secondNumber);
				std::cout << "Addition = " << result << std::endl;
				break;

			case 2:
				result = subtraction(firstNumber, secondNumber);
				std::cout << "Subtraction = " << result << std::endl;
				break;

			case 3:
				result = multiplication(firstNumber, secondNumber);
				std::cout << "Multiplication = " << result << std::endl;
				break;

			case 4:
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
	int operation = -1;

	while (true) { 

		operation = readOperation();

		if(operation == 0) {
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		firstNumber = readNumber("Enter first number = ");
		secondNumber = readNumber("Enter second number = ");

		executeOperation(operation, firstNumber, secondNumber);
	}

	return 0;
}

