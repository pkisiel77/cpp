#include <iostream>
#include <stdexcept>
#include "calc.hpp"

int main() {

	double firstNumber, secondNumber, result;
	// int intFirstNumber, intSecondNumber, intResult;
	int operation;

	std::cout << "Enter first number = " << std::endl;
	std::cin >> firstNumber;

	std::cout << "Enter second number = " << std::endl;
	std::cin >> secondNumber;


	std::cout << "Choose operation:" << std::endl;
	std::cout << "1. Addition" << std::endl;
	std::cout << "2. Subtraction" << std::endl;
	std::cout << "3. Multiplication" << std::endl;
	std::cout << "4. Division" << std::endl;

	std::cin >> operation;

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

	return 0;
}

