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
	mvwprintw(window, 1, 2, "Use arrows to navigate | Enter: select | h: help | q: quit");
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

void drawContent(
	WINDOW *window,
	const std::string &statusMessage,
	bool isError,
	int operationsCount,
	const std::vector<std::string> &history
) {
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

	mvwprintw(window, 5, 2, "Operations count: %d", operationsCount);

	mvwprintw(window, 7, 2, "History:");
	int maxRows = getmaxy(window) - 10;
	int start = 0;

	if(static_cast<int>(history.size()) > maxRows) {
		start = static_cast<int>(history.size()) - maxRows;
	}

	int row = 8;

	for(int i = start; i < static_cast<int>(history.size()); i++) {
		mvwprintw(window, row, 2, "%s", history[i].c_str());
		row++;
	}

	wrefresh(window);
}

bool isTerminalTooSmall() {
	return LINES < 12;
}

void showHelpScreen() {
	clear();
	box(stdscr, 0, 0);

	attron(COLOR_PAIR(1) | A_BOLD);
	mvprintw(1, 2, "Help");
	attroff(COLOR_PAIR(1) | A_BOLD);

	mvprintw(3, 2, "Arrow Up / Arrow Down - select operation");
	mvprintw(4, 2, "Enter - run selected operation");
	mvprintw(5, 2, "h - show this help screen");
	mvprintw(6, 2, "q - quit application");

	attron(COLOR_PAIR(3));
	mvprintw(LINES - 2, 2, "Press any key to return");
	attroff(COLOR_PAIR(3));

	refresh();
	getch();
}
