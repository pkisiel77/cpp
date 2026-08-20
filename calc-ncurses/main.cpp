#include <ncurses.h>
#include <string>

std::string selectedActionMessage(const char *menuItem) {
	return std::string("Selected: ") + menuItem;
}

int main() {
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, TRUE);

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

	std::string statusMessage = "Select operation";

	while(true) {
		clear();
		box(stdscr, 0,0);

		if(LINES < 12) {
			clear();
			mvprintw(1, 2, "Terminal too small");
			refresh();
			getch();
			break;
		}

		mvprintw(1, 2, "C++ Calculator ncurses");
		mvprintw(2, 2, "Use arrows and Enter. Press q to quit.");

		for(int i=0; i<menuSize; i++) {
			if(i==selected) {
				attron(A_REVERSE);
			}

			mvprintw(4 + i, 4, "%s", menuItems[i]);

			if(i == selected) {
				attroff(A_REVERSE);
			}
		}


		mvprintw(LINES - 4, 2, "Status: %s", statusMessage.c_str());
		mvprintw(LINES - 3, 2, "Screen size: %d x %d", COLS, LINES);
		mvprintw(LINES - 2, 2, "Press q to quit");

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

			statusMessage = selectedActionMessage(menuItems[selected]); 
		}
	}

	endwin();

	return 0;
}

