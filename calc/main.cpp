#include <iostream>
#include <string>
#include <vector>

#include "history.hpp"
#include "input.hpp"
#include "operations.hpp"

int main() {
	double firstNumber, secondNumber;
	Operation operation = Operation::Exit;
	std::vector<std::string> history = loadHistory("history.txt");
	bool historyChanged = false;

	while (true) { 

		operation = readOperation();

		if(operation == Operation::History) {
			showHistory(history);
			continue;
		}

		if(operation == Operation::SaveHistory) {
			saveHistory(history, "history.txt");
			historyChanged = false;
			continue;
		}

		if(operation == Operation::Exit) {
			if(historyChanged) {
				saveHistory(history, "history.txt");
			}
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		firstNumber = readNumber("Enter first number = ");

		if(operation != Operation::Power2) {
			secondNumber = readNumber("Enter second number = ");
		}

		std::string historyEntry = executeOperation(operation, firstNumber, secondNumber);
		history.push_back(historyEntry);
		historyChanged = true;
	}

	return 0;
}
