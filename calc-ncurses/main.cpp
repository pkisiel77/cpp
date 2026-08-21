#include <ncurses.h>
#include <string>
#include <stdexcept>

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

void drawLayout() {
	clear();
	box(stdscr, 0,0);

	attron(COLOR_PAIR(1));
	mvprintw(1, 2, "C++ Calculator ncurses");
	attroff(COLOR_PAIR(1));
	mvprintw(2, 2, "Use arrows and Enter. Press q to quit.");
}

void drawMenu(const char *menuItems[], int menuSize, int selected) {
	for(int i=0; i<menuSize; i++) {
		if(i==selected) {
			attron(COLOR_PAIR(2));
		}

		mvprintw(4 + i, 4, "%s", menuItems[i]);

		if(i == selected) {
			attroff(COLOR_PAIR(2));
		}
	}
}

void drawStatus(const std::string &statusMessage, bool isError) {
	if(isError) {
		attroff(COLOR_PAIR(4));
	} else {
		attroff(COLOR_PAIR(3));
	}

	mvprintw(LINES - 4, 2, "Status: %s", statusMessage.c_str());


	if(isError) {
		attron(COLOR_PAIR(4));
	} else {
		attron(COLOR_PAIR(3));
	}

	mvprintw(LINES - 3, 2, "Screen size: %d x %d", COLS, LINES);
	mvprintw(LINES - 2, 2, "Press q to quit");
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

	while(true) {
		if(isTerminalTooSmall()) {
			clear();
			mvprintw(1, 2, "Terminal too small");
			refresh();
			getch();
			break;
		}

		drawLayout();
		drawMenu(menuItems, menuSize, selected);
		drawStatus(statusMessage, statusIsError);

		refresh();

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

	endwin();

	return 0;
}
