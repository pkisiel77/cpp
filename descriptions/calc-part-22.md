# Calc Part 22

## PL

W tej lekcji porządkujemy projekt kalkulatora, bo `main.cpp` urósł za bardzo. Dzielimy kod na moduły: `input`, `operations` i `history`. Dzięki temu `main.cpp` zostaje odpowiedzialny głównie za główną pętlę programu, a szczegóły wczytywania danych, wykonywania operacji i obsługi historii trafiają do osobnych plików `.cpp` i `.hpp`.

### Narracja

Po wielu lekcjach `main.cpp` stał się za duży. To normalne, kiedy projekt rozwijamy krok po kroku. Teraz robimy większy porządek: funkcje związane z wejściem użytkownika przenosimy do `input.cpp`, operacje kalkulatora do `operations.cpp`, a historię do `history.cpp`. Przy okazji aktualizujemy pliki nagłówkowe oraz `Makefile`, żeby kompilator znał wszystkie nowe pliki.

### Co uczeń poznaje

- podział większego pliku na moduły
- pary plików `.hpp` i `.cpp`
- separację odpowiedzialności
- przenoszenie deklaracji do plików nagłówkowych
- includowanie własnych nagłówków
- aktualizację `Makefile` po dodaniu plików
- czytelniejszy `main.cpp`

## EN

In this lesson we clean up the calculator project because `main.cpp` has grown too large. We split the code into modules: `input`, `operations`, and `history`. This keeps `main.cpp` focused mainly on the main program loop, while input handling, operation execution, and history management move into separate `.cpp` and `.hpp` files.

### Narration

After many lessons, `main.cpp` became too large. This is normal when a project grows step by step. Now we make a larger cleanup: functions related to user input move to `input.cpp`, calculator operations move to `operations.cpp`, and history moves to `history.cpp`. We also update header files and the `Makefile` so the compiler knows about all new source files.

### What the student learns

- splitting a larger file into modules
- `.hpp` and `.cpp` file pairs
- separation of responsibilities
- moving declarations into header files
- including custom headers
- updating a `Makefile` after adding files
- a cleaner `main.cpp`
