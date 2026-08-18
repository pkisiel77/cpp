#include <iostream>
#include <string>
#include <vector>

#include "history.hpp"
#include "input.hpp"
#include "operations.hpp"

int main() {

	const std::string historyFileName = "history.txt";
	double firstNumber, secondNumber;
	Operation operation = Operation::Exit;
	std::vector<std::string> history = loadHistory(historyFileName);
	bool historyChanged = false;

	while (true) { 

		operation = readOperation();

		if(operation == Operation::History) {
			showHistory(history);
			continue;
		}

		if(operation == Operation::SaveHistory) {
			saveHistory(history, historyFileName);
			historyChanged = false;
			continue;
		}

		if(operation == Operation::ClearHistory) {
			if(confirmAction("Clear history?")) {
				clearHistory(history, historyFileName);
				historyChanged = false;
			}
			continue;
		}

		if(operation == Operation::Exit) {
			if(historyChanged) {
				saveHistory(history, historyFileName);
			}
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		firstNumber = readNumber("Enter first number = ");

		if(operation != Operation::Power2) {
			secondNumber = readNumber("Enter second number = ");
		}

		std::string historyEntry = withTimestamp(executeOperation(operation, firstNumber, secondNumber));
		history.push_back(historyEntry);
		appendHistoryEntry(historyEntry, historyFileName);
		historyChanged = false;
	}

	return 0;
}
