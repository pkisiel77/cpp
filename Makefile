.PHONY: all calc calc-ncurses run run-ncurses clean

all: calc calc-ncurses

calc:
	$(MAKE) -C calc

calc-ncurses:
	$(MAKE) -C calc-ncurses

run:
	$(MAKE) -C calc run ARGS="$(ARGS)"

run-ncurses:
	$(MAKE) -C calc-ncurses run
clean:
	$(MAKE) -C calc clean
	$(MAKE) -C calc-ncurses clean

