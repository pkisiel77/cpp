#include <ncurses.h>

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

	while(true) {
		clear();
		box(stdscr, 0,0);

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
		}
	}
	
	mvprintw(LINES - 2, 2, "Screen size: %d x %d", COLS, LINES);

	endwin();

	return 0;
}

