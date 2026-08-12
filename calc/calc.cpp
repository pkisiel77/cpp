#include <iostream>
#include <stdexcept>

// correct the names

double addition(double firstNumber, double secondNumber) {
	return firstNumber + secondNumber;
}

double subtraction(double firstNumber, double secondNumber) {
	return firstNumber - secondNumber;
}

double multiplication(double firstNumber, double secondNumber) {
	return firstNumber * secondNumber;
}

double division (double firstNumber, double secondNumber) {
	if( secondNumber == 0) {
		throw std::runtime_error("Division by zero!");
	}

	return firstNumber / secondNumber;
}


int main() {

	double firstNumber, secondNumber, result;

	std::cout << "Enter first number = " << std::endl;
	std::cin >> firstNumber;

	std::cout << "Enter second number = " << std::endl;
	std::cin >> secondNumber;

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

