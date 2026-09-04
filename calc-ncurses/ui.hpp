#ifndef UI_HPP
#define UI_HPP

#include <ncurses.h>
#include <string>
#include <vector>

extern const int headerHeight;
extern const int footerHeight;
extern const int menuWidth;

void initColors();

void drawHeader(WINDOW *window);
void drawFooter(WINDOW *window);
void drawMenu(WINDOW *window, const char *menuItems[], int menuSize, int selected);
void drawContent(
	WINDOW *window,
	const std::string &statusMessage,
	bool isError,
	int operationsCount,
	const std::vector<std::string> &history,
	bool hasLastResult,
	double lastResult
);

bool isTerminalTooSmall();

void showHelpScreen();

#endif
