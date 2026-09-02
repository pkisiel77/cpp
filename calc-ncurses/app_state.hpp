#ifndef APP_STATE_HPP
#define APP_STATE_HPP

#include <string>

struct AppState {
	int selected = 0;
	std::string statusMessage = "Select operation";
	bool statusIsError = false;
	int operationsCount = 0;
};

#endif
