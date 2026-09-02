#ifndef APP_STATE_HPP
#define APP_STATE_HPP

#include <string>
#include <vector>

struct AppState {
	int selected = 0;
	std::string statusMessage = "Select operation";
	bool statusIsError = false;
	int operationsCount = 0;
	std::vector<std::string> history;
};

#endif
