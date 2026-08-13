#include <iostream>
#include <stdexcept>
#include "calc.hpp"

int main() {

	double firstNumber, secondNumber, result;
	int intFirstNumber, intSecondNumber, intResult;

	std::cout << "Enter first number = " << std::endl;
	std::cin >> firstNumber;

	std::cout << "Enter second number = " << std::endl;
	std::cin >> secondNumber;

	std::cout << "Enter INT first number = " << std::endl;
	std::cin >> intFirstNumber;

	std::cout << "Enter INT scond number = " << std::endl;
	std::cin >> intSecondNumber;

	result  = addition(intFirstNumber, intSecondNumber);
	std::cout << "INT Addition = " << result << std::endl;	
	
	result = addition(firstNumber, secondNumber);
	std::cout << "Addition = " << result << std::endl;

	result = subtraction(firstNumber, secondNumber);
	std::cout << "Subtraction = " << result << std::endl;

	result = multiplication(firstNumber, secondNumber);
	std::cout << "Multiplication = " << result << std::endl;

	try {
		result  = division(firstNumber, secondNumber);
		std::cout << "Division = " << result << std::endl;
	} catch (const std::runtime_error &error) {
		std::cout << "Error: " << error.what() << std::endl;
	}

	return 0;
}

