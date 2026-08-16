#include <iostream>
#include <stdexcept>
#include "calc.hpp"
#include <limits>
#include <string>
#include <utility>
#include <vector>
#include <sstream>
#include <iomanip>
#include <fstream>

enum class Operation {
	Exit = 0,
	Addition = 1,
	Subtraction = 2,
	Multiplication = 3,
	Division = 4,
	Power = 5,
	Power2 = 6,
	History = 7,
	SaveHistory = 8
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
		std::cout << "7. History" << std::endl;
		std::cout << "8. Save history" << std::endl;
		std::cout << "0. Exit" << std::endl;

		if(!(std::cin >> operationInput)) {
			std::cout << "Invalid operation" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if(std::cmp_greater(operationInput, static_cast<int>(Operation::SaveHistory)) || 
				std::cmp_less(operationInput, static_cast<int>(Operation::Exit))) {
			std::cout << "Unknown operation" << std::endl;
			continue;
		}

		return static_cast<Operation>(operationInput);
	}
}


std::string operationName(Operation operation);

double calculateResult(Operation operation, double firstNumber, double secondNumber);

std::string formatResult(double result);

std::string executeOperation(Operation operation, double firstNumber, double secondNumber) {
	try {
		double result = calculateResult(operation, firstNumber, secondNumber);
		std::string entry = operationName(operation) + " = " + formatResult(result);

		std::cout << entry << std::endl;

		return entry;
	} catch (const std::runtime_error &error) {
		std::string entry = std::string("Error: ") + error.what();

		std::cout << entry << std::endl;

		return entry;
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
		case Operation::History:
			return "History";
		case Operation::SaveHistory:
			return "Save history";
		case Operation::Exit:
			return "Exit";
		default:
			return "Unknown";
	}
}

void showHistory(const std::vector<std::string> &history) {
	if(history.empty()) {
		std::cout << "History is empty" << std::endl;
		return;
	}

	for(const std::string &entry : history) {
		std::cout << entry << std::endl;
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

std::string formatResult(double result) {
	std::ostringstream stream;
	stream << std::fixed << std::setprecision(2) << result;
	return stream.str();
}

void saveHistory(const std::vector<std::string> &history, const std::string &fileName) {
	std::ofstream file(fileName);

	if(!file) {
		std::cout << "Cannot open file" << std::endl;
		return;
	}

	for(const std::string &entry : history) {
		file << entry << std::endl;
	}

	std::cout << "History saved to " << fileName << std::endl;
}

std::vector<std::string> loadHistory(const std::string &fileName) {
	std::vector<std::string> history;
	std::ifstream file(fileName);

	if(!file) {
		return history;
	}

	std::string entry;

	while(std::getline(file, entry)) {
		history.push_back(entry);
	}

	return history;
}

int main() {
	double firstNumber, secondNumber;
	Operation operation = Operation::Exit;
	std::vector<std::string> history = loadHistory("history.txt");

	while (true) { 

		operation = readOperation();

		if(operation == Operation::History) {
			showHistory(history);
			continue;
		}

		if(operation == Operation::SaveHistory) {
			saveHistory(history, "history.txt");
			continue;
		}

		if(operation == Operation::Exit) {
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		firstNumber = readNumber("Enter first number = ");

		if(operation != Operation::Power2) {
			secondNumber = readNumber("Enter second number = ");
		}

		std::string historyEntry = executeOperation(operation, firstNumber, secondNumber);
		history.push_back(historyEntry);
	}

	return 0;
}
