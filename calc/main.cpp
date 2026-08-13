#include <iostream>
#include <stdexcept>
#include "calc.hpp"

int main() {

	double firstNumber, secondNumber, result;
	int operation = -1;

	while (operation != 0) {
		std::cout << "Choose operation:" << std::endl;
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Subtraction" << std::endl;
		std::cout << "3. Multiplication" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "0. Exit" << std::endl;

		std::cin >> operation;

		if(operation == 0) {
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		if(operation > 4 || operation < 0) {
			std::cout << "Unknown operation" << std::endl;
			continue;
		}

		std::cout << "Enter first number = " << std::endl;
		std::cin >> firstNumber;
		std::cout << "Enter second number = " << std::endl;
		std::cin >> secondNumber;

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

	return 0;
}

