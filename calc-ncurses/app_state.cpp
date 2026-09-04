#include "app_state.hpp"

void clearHistory(AppState &state) {
	state.history.clear();
	state.operationsCount = 0;
	state.lastResult = 0;
	state.hasLastResult = false;
	state.statusMessage = "History cleared";
	state.statusIsError = false;
}
