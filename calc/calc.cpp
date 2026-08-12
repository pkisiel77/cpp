#include <iostream>
#include <stdexcept>


int addition(int firstNumber, int secondNumber) {
	std::cout << "INT ADD" << std::endl;
	return firstNumber + secondNumber;
}

double addition(double firstNumber, double secondNumber) {
	std::cout << "DOUBLE ADD" << std::endl;
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

