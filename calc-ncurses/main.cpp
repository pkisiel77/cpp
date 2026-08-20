#include <ncurses.h>

int main() {
	initscr();
	noecho();
	cbreak();

	clear();

	box(stdscr, 0, 0);

	mvprintw(1, 2, "C++ Calculator ncurses");
	mvprintw(3, 2, "1. Addition");
	mvprintw(4, 2, "2. Subtraction");
	mvprintw(5, 2, "3. Multiplication");
	mvprintw(6, 2, "4. Division");
	mvprintw(8, 2, "Press any key to exit");

	mvprintw(LINES - 2, 2, "Screen size: %d x %d", COLS, LINES);
	
	refresh();
	getch();
	
	endwin();

	return 0;
}
