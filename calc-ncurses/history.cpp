#include "history.hpp"

#include <fstream>

std::vector<std::string> loadHistory(const std::string &fileName) {
	std::vector<std::string> history;
	std::ifstream file(fileName);
	std::string line;

	while(std::getline(file, line)) {
		history.push_back(line);
	}

	return history;
}

void saveHistory(const std::string &fileName, const std::vector<std::string> &history) {
	std::ofstream file(fileName);

	for(const std::string &line : history) {
		file << line << '\n';
	}
}
