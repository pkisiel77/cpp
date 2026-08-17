#include <iostream>
#include <limits>
#include <string>
#include <utility>

#include "input.hpp"

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
		std::cout << "7. History" << std::endl;
		std::cout << "8. Save history" << std::endl;
		std::cout << "9. Clear history" << std::endl;
		std::cout << "0. Exit" << std::endl;

		if(!(std::cin >> operationInput)) {
			std::cout << "Invalid operation" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if(std::cmp_greater(operationInput, static_cast<int>(Operation::ClearHistory)) || 
				std::cmp_less(operationInput, static_cast<int>(Operation::Exit))) {
			std::cout << "Unknown operation" << std::endl;
			continue;
		}

		return static_cast<Operation>(operationInput);
	}
}

bool confirmAction(const std::string &message) {
	char answer;

	std::cout << message << " (y/n) " << std::endl;
	std::cin >> answer;

	return answer == 'y' || answer == 'Y';
}
