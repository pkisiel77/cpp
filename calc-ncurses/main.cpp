#include <ncurses.h>
#include <string>
#include <stdexcept>

const int headerHeight = 3;
const int footerHeight = 3;
const int menuWidth = 24;

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

double parseNumber(const std::string &text) {
	return std::stod(text);
}

double calculate(int selected, double firstNumber, double secondNumber) {
	switch(selected) {
		case 0:
			return firstNumber + secondNumber;
		case 1:
			return firstNumber - secondNumber;
		case 2:
			return firstNumber * secondNumber;
		case 3:
			if(secondNumber == 0) {
				throw std::runtime_error("Division by zero");
			}
			return firstNumber / secondNumber;
		default:
			throw std::runtime_error("Unknown operation");
	}
}

std::string calculateStatusMessage(const char *operationName, double result) {
	return std::string(operationName) + " = " + std::to_string(result);
}

std::string selectedActionMessage(const char *menuItem) {
	return std::string("Selected: ") + menuItem;
}

bool isTerminalTooSmall() {
	return LINES < 12;
}

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

	start_color();

	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	init_pair(2, COLOR_BLACK, COLOR_CYAN);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_RED, COLOR_BLACK);

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
	int selected = 0;
	int key;

	bool statusIsError = false;

	std::string statusMessage = "Select operation";

	const int contentHeight = LINES - headerHeight - footerHeight;
	const int contentWidth = COLS - menuWidth;

	WINDOW *headerWindow = newwin(headerHeight, COLS, 0, 0);
	WINDOW *menuWindow = newwin(contentHeight, menuWidth, headerHeight, 0);
	WINDOW *contentWindow = newwin(contentHeight, contentWidth, headerHeight, menuWidth);
	WINDOW *footerWindow = newwin(footerHeight, COLS, LINES - footerHeight, 0);

	while(true) {
		drawHeader(headerWindow);
		drawMenu(menuWindow, menuItems, menuSize, selected);
		drawContent(contentWindow, statusMessage, statusIsError);
		drawFooter(footerWindow);

		key = getch();

		if(key == 'q') {
			break;
		}

		if(key == KEY_UP) {
			selected--;

			if(selected < 0) {
				selected = menuSize - 1;
			}
		}

		if(key == KEY_DOWN) {
			selected++;

			if(selected >= menuSize) {
				selected = 0;
			}
		}

		if(key == '\n') {
			if(selected == menuSize - 1) {
				break;
			}

			try {
				std::string firstInput = readTextInput("Enter first number:");
				std::string secondInput = readTextInput("Enter second number:");

				double firstNumber = parseNumber(firstInput);
				double secondNumber = parseNumber(secondInput);
				double result = calculate(selected, firstNumber, secondNumber);

				statusMessage = calculateStatusMessage(menuItems[selected], result);
				statusIsError = false;
			} catch (const std::exception &error) {
				statusMessage = std::string("Error: ") + error.what();
				statusIsError = true;
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
