#include <iostream>
#include <string>
#include <vector>

#include "history.hpp"
#include "input.hpp"
#include "operations.hpp"


void printHelp(const std::string &programName) {
	std::cout << "Usage: " << std::endl;
	std::cout << " " << programName << " [history-file] " << std::endl;
	std::cout << std::endl;
	std::cout << "Options:" << std::endl;
	std::cout << " --help    Show help" << std::endl;
	std::cout << std::endl;
	std::cout << "Examples:" << std::endl;
	std::cout << " " << programName << std::endl;
	std::cout << " " << programName << " my-history.txt" << std::endl;
}

int main(int argc, char *argv[]) {
	if(argc > 1 && std::string(argv[1]) == "--help") {
		printHelp(argv[0]);
		return 0;
	}

	std::string historyFileName = "history.txt";

	double firstNumber, secondNumber;
	Operation operation = Operation::Exit;

	if (argc > 1) {
		historyFileName = argv[1];
	}

	std::cout << "History file name is " << historyFileName << std::endl;

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
