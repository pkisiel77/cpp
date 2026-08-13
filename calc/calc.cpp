#include "calc.hpp"
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

