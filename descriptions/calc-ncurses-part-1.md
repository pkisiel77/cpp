# Calc-ncurses Part 1

## PL

W tej lekcji zaczynamy drugą ścieżkę projektu: kalkulator z interfejsem `ncurses`. Tworzymy osobny katalog `calc-ncurses`, dodajemy własny `Makefile` i uruchamiamy pierwszy minimalny ekran ncurses. Program przechodzi w tryb ncurses, wypisuje tekst, czeka na klawisz i przywraca normalny terminal.

### Narracja

Do tej pory rozwijaliśmy klasyczny kalkulator terminalowy w katalogu `calc`. Teraz zaczynamy drugi tor: wersję z interfejsem `ncurses`. Nie usuwamy starego projektu, tylko dodajemy nowy katalog `calc-ncurses`. W pierwszej lekcji uruchomimy minimalny program: `initscr` startuje tryb ncurses, `printw` wypisuje tekst, `refresh` odświeża ekran, `getch` czeka na klawisz, a `endwin` przywraca terminal.

### Co uczeń poznaje

- czym jest `ncurses`
- `#include <ncurses.h>`
- linkowanie przez `-lncurses`
- `initscr()`
- `printw()`
- `refresh()`
- `getch()`
- `endwin()`
- osobny `Makefile` dla drugiego projektu

## EN

In this lesson we start the second project track: a calculator with an `ncurses` interface. We create a separate `calc-ncurses` directory, add its own `Makefile`, and run the first minimal ncurses screen. The program enters ncurses mode, prints text, waits for a key, and restores the normal terminal.

### Narration

Until now, we developed the classic terminal calculator in the `calc` directory. Now we start a second track: a version with an `ncurses` interface. We do not remove the old project; we add a new `calc-ncurses` directory. In the first lesson, we run a minimal program: `initscr` starts ncurses mode, `printw` prints text, `refresh` updates the screen, `getch` waits for a key, and `endwin` restores the terminal.

### What the student learns

- what `ncurses` is
- `#include <ncurses.h>`
- linking with `-lncurses`
- `initscr()`
- `printw()`
- `refresh()`
- `getch()`
- `endwin()`
- a separate `Makefile` for the second project
