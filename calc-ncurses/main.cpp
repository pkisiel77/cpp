#include <ncurses.h>
#include <string>
#include <stdexcept>
#include "ui.hpp"
#include "calculator.hpp"
#include "app_state.hpp"

std::string readTextInput(const std::string &prompt) {
	char buffer[100];

	echo();
	curs_set(1);

	clear();
	box(stdscr, 0, 0);

	mvprintw(1, 2, "%s", prompt.c_str());
	mvgetnstr(3, 2, buffer, 99);

	noecho();
	curs_set(0);

	return std::string(buffer);
}


int main() {
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, TRUE);
	curs_set(0);

	initColors();

	if(isTerminalTooSmall()) {
		clear();
		mvprintw(1, 2, "Terminal too small");
		refresh();
		getch();
		endwin();
		return 1;
	}

	const char *menuItems[] = {
		"Addition",
		"Subtraction",
		"Multiplication",
		"Division",
		"Exit"
	};

	const int menuSize = 5;

	AppState state;
	int key;

	const int contentHeight = LINES - headerHeight - footerHeight;
	const int contentWidth = COLS - menuWidth;

	WINDOW *headerWindow = newwin(headerHeight, COLS, 0, 0);
	WINDOW *menuWindow = newwin(contentHeight, menuWidth, headerHeight, 0);
	WINDOW *contentWindow = newwin(contentHeight, contentWidth, headerHeight, menuWidth);
	WINDOW *footerWindow = newwin(footerHeight, COLS, LINES - footerHeight, 0);

	while(true) {
		drawHeader(headerWindow);
		drawMenu(menuWindow, menuItems, menuSize, state.selected);
		drawContent(contentWindow, state.statusMessage, state.statusIsError, state.operationsCount, state.history);
		drawFooter(footerWindow);

		key = getch();

		if(key == 'q') {
			break;
		}

		if(key == 'h') {
			showHelpScreen();
		}

		if(key == KEY_UP) {
			state.selected--;

			if(state.selected < 0) {
				state.selected = menuSize - 1;
			}
		}

		if(key == KEY_DOWN) {
			state.selected++;

			if(state.selected >= menuSize) {
				state.selected = 0;
			}
		}

		if(key == '\n') {
			if(state.selected == menuSize - 1) {
				break;
			}

			try {
				std::string firstInput = readTextInput("Enter first number:");
				std::string secondInput = readTextInput("Enter second number:");

				double firstNumber = parseNumber(firstInput);
				double secondNumber = parseNumber(secondInput);
				double result = calculate(state.selected, firstNumber, secondNumber);

				state.statusMessage = calculateStatusMessage(menuItems[state.selected], result);
				state.statusIsError = false;
				state.operationsCount++;
				state.history.push_back(state.statusMessage);

			} catch (const std::exception &error) {
				state.statusMessage = std::string("Error: ") + error.what();
				state.statusIsError = true;
			}
		}
	}

	delwin(headerWindow);
	delwin(menuWindow);
	delwin(contentWindow);
	delwin(footerWindow);

	endwin();

	return 0;
}
