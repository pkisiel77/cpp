# Calc-ncurses Part 9

## PL

W tej lekcji przenosimy kod odpowiedzialny za wygląd interfejsu `ncurses` do osobnego modułu `ui`. Funkcje rysujące nagłówek, menu, obszar statusu i stopkę trafiają do `ui.cpp`, a ich deklaracje do `ui.hpp`. Dzięki temu `main.cpp` jest krótszy i skupia się bardziej na głównej pętli programu.

### Narracja

W poprzedniej lekcji dodaliśmy układ z wieloma oknami: header, menu, content i footer. Kod działa, ale `main.cpp` znowu zaczyna robić za dużo. Ma logikę programu, input, obliczenia, kolory i rysowanie ramek. W tej lekcji przeniesiemy część odpowiedzialną za interfejs do osobnego modułu `ui`. Dzięki temu funkcje `drawHeader`, `drawMenu`, `drawContent`, `drawFooter` oraz `initColors` będą w jednym miejscu.

### Co uczeń poznaje

- tworzenie modułu `ui.hpp` / `ui.cpp`
- przenoszenie funkcji `ncurses` do osobnego pliku
- deklaracje funkcji w pliku nagłówkowym
- `extern const int` dla wartości używanych w kilku plikach
- funkcję `initColors`
- oddzielenie logiki programu od rysowania interfejsu
- aktualizację `Makefile` po dodaniu `ui.cpp`

## EN

In this lesson we move the code responsible for the `ncurses` interface into a separate `ui` module. Functions that draw the header, menu, status/content area, and footer move to `ui.cpp`, while their declarations go into `ui.hpp`. This makes `main.cpp` shorter and more focused on the main program loop.

### Narration

In the previous lesson, we added a multi-window layout: header, menu, content, and footer. The code works, but `main.cpp` is starting to do too much again. It contains program logic, input, calculations, colors, and window drawing. In this lesson, we move the interface-related code into a separate `ui` module. This keeps `drawHeader`, `drawMenu`, `drawContent`, `drawFooter`, and `initColors` in one place.

### What the student learns

- creating a `ui.hpp` / `ui.cpp` module
- moving `ncurses` functions into a separate file
- function declarations in a header file
- `extern const int` for values used in multiple files
- the `initColors` function
- separating program logic from UI drawing
- updating the `Makefile` after adding `ui.cpp`
