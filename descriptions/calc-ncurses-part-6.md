# Calc-ncurses Part 6

## PL

W tej lekcji dodajemy pierwszy ekran wczytywania danych w wersji `ncurses`. Po wybraniu operacji użytkownik może wpisać pierwszą liczbę, a program pokazuje ją później w komunikacie statusu. Używamy `echo`, `noecho`, `curs_set` oraz `mvgetnstr`, żeby przełączać się między trybem menu i trybem wpisywania tekstu.

### Narracja

Do tej pory interfejs `ncurses` reagował na wybór menu, ale nie pobierał jeszcze danych od użytkownika. Teraz dodamy funkcję `readTextInput`, która pokaże osobny ekran z promptem i wczyta tekst. Na czas wpisywania włączymy echo oraz pokażemy kursor, a po zakończeniu wrócimy do trybu menu z ukrytym kursorem.

### Co uczeń poznaje

- `echo()`
- `noecho()`
- `curs_set(1)`
- `curs_set(0)`
- `mvgetnstr()`
- bufor `char`
- konwersję `char[]` do `std::string`
- osobny ekran wejścia tekstowego
- różnicę między trybem menu a trybem wpisywania danych

## EN

In this lesson we add the first input screen in the `ncurses` version. After selecting an operation, the user can enter the first number, and the program later shows it in the status message. We use `echo`, `noecho`, `curs_set`, and `mvgetnstr` to switch between menu mode and text input mode.

### Narration

Until now, the `ncurses` interface reacted to menu selection, but it did not collect user data yet. Now we add a `readTextInput` function that shows a separate prompt screen and reads text. While typing, we enable echo and show the cursor; after input is finished, we return to menu mode with the cursor hidden.

### What the student learns

- `echo()`
- `noecho()`
- `curs_set(1)`
- `curs_set(0)`
- `mvgetnstr()`
- a `char` buffer
- converting `char[]` to `std::string`
- a separate text input screen
- the difference between menu mode and data entry mode
