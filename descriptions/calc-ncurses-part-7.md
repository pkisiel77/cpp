# Calc-ncurses Part 7

## PL

W tej lekcji dodajemy kolory do interfejsu `ncurses` i wykonujemy pierwsze prawdziwe obliczenia. Program pobiera dwie liczby, zamienia tekst na `double`, wykonuje wybraną operację i pokazuje wynik w statusie. Dodajemy też obsługę błędnego wejścia oraz dzielenia przez zero.

### Narracja

W poprzedniej lekcji nauczyliśmy się wczytywać tekst w `ncurses`. Teraz użyjemy tego do realnego działania kalkulatora. Po wybraniu operacji program zapyta o dwie liczby, przekonwertuje je przez `std::stod`, obliczy wynik i pokaże go w statusie. Przy okazji dodamy kolory: tytuł, zaznaczone menu, poprawny status i błąd dostaną osobne pary kolorów.

### Co uczeń poznaje

- `start_color()`
- `init_pair()`
- `COLOR_PAIR`
- kolorowanie tytułu, menu i statusu
- `std::stod`
- konwersję tekstu na `double`
- `try` / `catch`
- `std::exception`
- obsługę dzielenia przez zero
- pierwsze realne obliczenia w wersji ncurses

## EN

In this lesson we add colors to the `ncurses` interface and perform the first real calculations. The program reads two numbers, converts text to `double`, executes the selected operation, and displays the result in the status area. We also add handling for invalid input and division by zero.

### Narration

In the previous lesson, we learned how to read text in `ncurses`. Now we use that to make the calculator actually work. After selecting an operation, the program asks for two numbers, converts them with `std::stod`, calculates the result, and shows it in the status area. We also add colors: the title, selected menu item, normal status, and error status each get their own color pair.

### What the student learns

- `start_color()`
- `init_pair()`
- `COLOR_PAIR`
- coloring the title, menu, and status
- `std::stod`
- converting text to `double`
- `try` / `catch`
- `std::exception`
- handling division by zero
- the first real calculations in the ncurses version
