#include "history.hpp"

#include <iostream>
#include <fstream>

void showHistory(const std::vector<std::string> &history) {
	if(history.empty()) {
		std::cout << "History is empty" << std::endl;
		return;
	}

	for(const std::string &entry : history) {
		std::cout << entry << std::endl;
	}
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


void clearHistory(std::vector<std::string> &history, const std::string &fileName) {
	history.clear();

	std::ofstream file(fileName, std::ios::trunc);

	if(!file) {
		std::cout << "Cannot clear history file" << std::endl;
		return;
	}

	std::cout << "History cleared" << std::endl;
}


void appendHistoryEntry(const std::string &entry, const std::string &fileName) {
	std::ofstream file(fileName, std::ios::app);

	if(!file) {
		std::cout << "Cannot open history file" << std::endl;
		return;
	}

	file << entry << std::endl;
}

