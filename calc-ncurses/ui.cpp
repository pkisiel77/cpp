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
	init_pair(5, COLOR_WHITE, COLOR_BLACK);

	bkgd(COLOR_PAIR(5));
}

void drawHeader(WINDOW *window) {
	wbkgd(window, COLOR_PAIR(5));
	werase(window);
	box(window, 0, 0);
	mvwprintw(window, 1, 2, "C++ Calculator ncurses");
	wrefresh(window);
}

void drawButton(WINDOW *window, int x, const char *label) {
	wattron(window, COLOR_PAIR(2) | A_BOLD);
	mvwprintw(window, 1, x, "[%s]", label);
	wattroff(window, COLOR_PAIR(2) | A_BOLD);
}

bool isInsideButton(int mouseX, int buttonX, int buttonWidth) {
	return mouseX >= buttonX && mouseX < buttonX + buttonWidth;
}

void drawFooter(WINDOW *window) {
	wbkgd(window, COLOR_PAIR(5));
	werase(window);
	box(window, 0, 0);

	drawButton(window, 2, "Help");

	drawButton(window, 10, "About");
	drawButton(window, 20, "Clear");
	drawButton(window, 30, "Quit");
	// mvwprintw(window, 1, 2, "Arrows/Mouse navigate | Enter select | h help | a about | c clear | q quit");

	wrefresh(window);
}

void drawMenu(WINDOW *window, const char *menuItems[], int menuSize, int selected) {
	wbkgd(window, COLOR_PAIR(5));
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
	const std::vector<std::string> &history,
	bool hasLastResult,
	double lastResult
) {
	wbkgd(window, COLOR_PAIR(5));
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

	if(hasLastResult) {
		mvwprintw(window, 6, 2, "Last result: %.2f", lastResult);
	} else {
		mvwprintw(window, 6, 2, "Last result: none");
	}

	mvwprintw(window, 8, 2, "History:");
	int maxRows = getmaxy(window) - 11;
	int start = 0;

	if(static_cast<int>(history.size()) > maxRows) {
		start = static_cast<int>(history.size()) - maxRows;
	}

	int row = 9;

	for(int i = start; i < static_cast<int>(history.size()); i++) {
		mvwprintw(window, row, 2, "%s", history[i].c_str());
		row++;
	}

	wrefresh(window);
}

bool isTerminalTooSmall() {
	return LINES < 12 || COLS < 40;
}

void showHelpScreen() {
	clear();
	box(stdscr, 0, 0);

	attron(COLOR_PAIR(1) | A_BOLD);
	mvprintw(1, 2, "Help");
	attroff(COLOR_PAIR(1) | A_BOLD);

	int row = 3;
	int col = 2;
	mvprintw(row++, col, "Arrow Up / Arrow Down - select operation");
	mvprintw(row++, col, "Mouse click - select menu item");
	mvprintw(row++, col, "Enter - run selected operation");
	mvprintw(row++, col, "h - show this help screen");
	mvprintw(row++, col, "c - clear history with confirmation and reset state");
	mvprintw(row++, col, "a - show about window");
	mvprintw(row  , col, "q - quit application");

	attron(COLOR_PAIR(3));
	mvprintw(LINES - 2, 2, "Press any key to return");
	attroff(COLOR_PAIR(3));

	refresh();
	getch();
	clear();
	refresh();
}

bool confirmDialog(const std::string &title, const std::string &message) {
	const int height = 7;
	const int width = 50;
	const int startY = (LINES - height) / 2;
	const int startX = (COLS - width) / 2;

	WINDOW *dialogWindow = newwin(height, width, startY, startX);
	keypad(dialogWindow, TRUE);

	werase(dialogWindow);
	box(dialogWindow, 0, 0);

	wattron(dialogWindow, COLOR_PAIR(1) | A_BOLD);
	mvwprintw(dialogWindow, 1, 2, "%s", title.c_str());
	wattroff(dialogWindow, COLOR_PAIR(1) | A_BOLD);

	mvwprintw(dialogWindow, 3, 2, "%s", message.c_str());
	mvwprintw(dialogWindow, 5, 2, "Press y to confirm, n to cancel");

	wrefresh(dialogWindow);

	int key = wgetch(dialogWindow);

	delwin(dialogWindow);
	touchwin(stdscr);
	refresh();

	return key == 'y' || key == 'Y';
}

void showAboutDialog() {
	const int height = 9;
	const int width = 52;
	const int startY = (LINES - height) / 2;
	const int startX = (COLS - width) / 2;

	WINDOW *aboutWindow = newwin(height, width, startY, startX);
	keypad(aboutWindow, TRUE);

	werase(aboutWindow);
	box(aboutWindow, 0, 0);

	wattron(aboutWindow, COLOR_PAIR(1) | A_BOLD);
	mvwprintw(aboutWindow, 1, 2, "Calc Ncurses");
	wattroff(aboutWindow, COLOR_PAIR(1) | A_BOLD);

	mvwprintw(aboutWindow, 3, 2, "Version: 0.1");
	mvwprintw(aboutWindow, 4, 2, "Terminal calculator built with C++20");
	mvwprintw(aboutWindow, 5, 2, "UI library: ncurses");

	wattron(aboutWindow, COLOR_PAIR(3));
	mvwprintw(aboutWindow, 7, 2, "Press any key to close");
	wattroff(aboutWindow, COLOR_PAIR(3));

	wrefresh(aboutWindow);
	wgetch(aboutWindow);

	delwin(aboutWindow);
	touchwin(stdscr);
	refresh();
}

FooterAction getFooterAction(int mouseX, int mouseY) {
	int footerRow = LINES - footerHeight + 1;

	if(mouseY != footerRow) {
		return FooterAction::None;
	}

	if(isInsideButton(mouseX, 2, 6)) {
		return FooterAction::Help;
	}

	if(isInsideButton(mouseX, 10, 7)) {
		return FooterAction::About;
	}

	if(isInsideButton(mouseX, 20, 7)) {
		return FooterAction::Clear;
	}

	if(isInsideButton(mouseX, 30, 6)) {
		return FooterAction::Quit;
	}

	return FooterAction::None;
}
