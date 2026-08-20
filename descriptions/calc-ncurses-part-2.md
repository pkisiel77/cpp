# Calc-ncurses Part 2

## PL

W tej lekcji budujemy pierwszy prosty layout ekranu w `ncurses`. Zamiast wypisywać tekst tylko w aktualnym miejscu kursora, ustawiamy elementy w konkretnych pozycjach przez `mvprintw`. Dodajemy ramkę, tytuł, menu operacji oraz informację o rozmiarze terminala.

### Narracja

W pierwszej lekcji uruchomiliśmy minimalny program `ncurses`. Teraz zrobimy prosty ekran kalkulatora. Użyjemy `noecho` i `cbreak`, żeby lepiej kontrolować zachowanie terminala, `box`, żeby narysować ramkę, oraz `mvprintw`, żeby wypisać tekst w konkretnym wierszu i kolumnie. Na dole pokażemy też rozmiar terminala przez `LINES` i `COLS`.

### Co uczeń poznaje

- `noecho()`
- `cbreak()`
- `clear()`
- `mvprintw()`
- współrzędne ekranu `y` i `x`
- `box(stdscr, 0, 0)`
- `LINES`
- `COLS`
- prosty layout terminalowy

## EN

In this lesson we build the first simple screen layout in `ncurses`. Instead of printing text only at the current cursor position, we place elements at specific coordinates with `mvprintw`. We add a border, a title, an operation menu, and terminal size information.

### Narration

In the first lesson, we started a minimal `ncurses` program. Now we build a simple calculator screen. We use `noecho` and `cbreak` to control terminal behavior, `box` to draw a border, and `mvprintw` to print text at a specific row and column. At the bottom, we also show the terminal size with `LINES` and `COLS`.

### What the student learns

- `noecho()`
- `cbreak()`
- `clear()`
- `mvprintw()`
- screen coordinates `y` and `x`
- `box(stdscr, 0, 0)`
- `LINES`
- `COLS`
- a simple terminal layout
