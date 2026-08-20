# Calc-ncurses Part 5

## PL

W tej lekcji porządkujemy kod interfejsu ncurses przez podział rysowania ekranu na mniejsze funkcje. Zamiast trzymać cały layout, menu, status i sprawdzanie rozmiaru terminala bezpośrednio w głównej pętli, tworzymy funkcje `drawLayout`, `drawMenu`, `drawStatus` oraz `isTerminalTooSmall`.

### Narracja

Po kilku lekcjach `main.cpp` w projekcie ncurses zaczyna rosnąć. To dobry moment, żeby zrobić refactor bez zmiany zachowania programu. Przenosimy rysowanie layoutu do osobnej funkcji, menu do osobnej funkcji, status do osobnej funkcji i sprawdzenie rozmiaru terminala do osobnej funkcji. Dzięki temu główna pętla programu staje się krótsza i łatwiej będzie dodawać kolejne funkcje.

### Co uczeń poznaje

- refactor bez zmiany działania programu
- funkcje pomocnicze dla UI
- podział rysowania ekranu na mniejsze części
- przekazywanie tablicy napisów do funkcji
- przekazywanie `std::string` przez referencję `const`
- czytelniejszą pętlę interfejsu
- przygotowanie kodu pod kolejne funkcje ncurses

## EN

In this lesson we clean up the ncurses UI code by splitting screen drawing into smaller functions. Instead of keeping the layout, menu, status, and terminal size check directly inside the main loop, we create `drawLayout`, `drawMenu`, `drawStatus`, and `isTerminalTooSmall`.

### Narration

After a few lessons, `main.cpp` in the ncurses project starts to grow. This is a good moment to refactor without changing program behavior. We move layout drawing into one function, menu drawing into another function, status drawing into another function, and terminal size checking into its own function. This makes the main loop shorter and prepares the code for adding more ncurses features.

### What the student learns

- refactoring without changing program behavior
- helper functions for UI code
- splitting screen drawing into smaller parts
- passing an array of strings to a function
- passing `std::string` by `const` reference
- a clearer UI loop
- preparing the code for more ncurses features
