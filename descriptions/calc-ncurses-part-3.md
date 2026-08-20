# Calc-ncurses Part 3

## PL

W tej lekcji dodajemy pierwszą interakcję do interfejsu `ncurses`. Zamiast statycznego menu, użytkownik może poruszać się po opcjach strzałkami w górę i w dół. Aktualnie wybrana opcja jest podświetlona przez `A_REVERSE`, a program obsługuje wyjście przez `q` albo wybór opcji `Exit` klawiszem Enter.

### Narracja

W poprzedniej lekcji zrobiliśmy prosty layout ekranu. Teraz dodamy interaktywne menu. Włączymy obsługę klawiszy specjalnych przez `keypad`, będziemy odczytywać klawisze przez `getch`, a wybraną pozycję menu zapiszemy w zmiennej `selected`. Kiedy użytkownik naciśnie strzałkę w górę albo w dół, zmienimy zaznaczoną opcję i odświeżymy ekran.

### Co uczeń poznaje

- `keypad(stdscr, TRUE)`
- `KEY_UP`
- `KEY_DOWN`
- `A_REVERSE`
- `attron()`
- `attroff()`
- pętlę interfejsu
- nawigację po menu
- obsługę `q` jako wyjścia
- wybór opcji przez Enter

## EN

In this lesson we add the first interaction to the `ncurses` interface. Instead of a static menu, the user can move through options with the up and down arrow keys. The currently selected option is highlighted with `A_REVERSE`, and the program handles exit through `q` or by selecting `Exit` with Enter.

### Narration

In the previous lesson, we created a simple screen layout. Now we add an interactive menu. We enable special key handling with `keypad`, read keys with `getch`, and store the selected menu item in the `selected` variable. When the user presses the up or down arrow, we change the selected option and refresh the screen.

### What the student learns

- `keypad(stdscr, TRUE)`
- `KEY_UP`
- `KEY_DOWN`
- `A_REVERSE`
- `attron()`
- `attroff()`
- the UI loop
- menu navigation
- handling `q` as exit
- selecting an option with Enter
