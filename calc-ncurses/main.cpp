#include <ncurses.h>

int main() {
	initscr();

	printw("C++ Calculator ncurses");
	refresh();

	getch();
	endwin();

	return 0;
}

