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
