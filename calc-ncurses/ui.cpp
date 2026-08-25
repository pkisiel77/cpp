#include "ui.hpp"

const int headerHeight = 3;
const int footerHeight = 3;
const int menuWidth = 24;


void initColors() {
	start_color();

	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	init_pair(2, COLOR_BLACK, COLOR_CYAN);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_RED, COLOR_BLACK);
}

void drawHeader(WINDOW *window) {
	werase(window);
	box(window, 0, 0);
	mvwprintw(window, 1, 2, "C++ Calculator ncurses");
	wrefresh(window);
}

void drawFooter(WINDOW *window) {
	werase(window);
	box(window, 0, 0);
	mvwprintw(window, 1, 2, "Arrows: move | Enter: select | q: quit");
	wrefresh(window);
}

void drawMenu(WINDOW *window, const char *menuItems[], int menuSize, int selected) {
	werase(window);
	box(window, 0, 0);
	mvwprintw(window, 1, 2, "Menu");

	for(int i = 0; i < menuSize; i++) {
		if(i == selected) {
			wattron(window, COLOR_PAIR(2));
		}

		mvwprintw(window, 3 + i, 2, "%s", menuItems[i]);

		if(i == selected) {
			wattroff(window, COLOR_PAIR(2));
		}
	}

	wrefresh(window);
}

void drawContent(WINDOW *window, const std::string &statusMessage, bool isError) {
	werase(window);
	box(window, 0, 0);
	mvwprintw(window, 1, 2, "Result / Status");

	if(isError) {
		wattron(window, COLOR_PAIR(4));
	} else {
		wattron(window, COLOR_PAIR(3));
	}

	mvwprintw(window, 3, 2, "Status: %s", statusMessage.c_str());

	if(isError) {
		wattroff(window, COLOR_PAIR(4));
	} else {
		wattroff(window, COLOR_PAIR(3));
	}

	wrefresh(window);
}

bool isTerminalTooSmall() {
	return LINES < 12;
}
