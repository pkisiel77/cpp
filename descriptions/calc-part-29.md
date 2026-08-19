# Calc Part 29

## PL

W tej lekcji przenosimy obsługę pomocy i argumentów programu do osobnego modułu `cli`. Funkcja `printHelp` znika z `main.cpp` i trafia do `cli.cpp`, a deklaracje trafiają do `cli.hpp`. Dodajemy też krótką opcję `-h` oraz walidację zbyt wielu argumentów.

### Narracja

W poprzedniej lekcji dodaliśmy opcję `--help`, ale kod pomocy trafił bezpośrednio do `main.cpp`. Teraz robimy porządek i tworzymy moduł `cli`, który będzie odpowiadał za sprawy związane z uruchamianiem programu z terminala. Dodamy funkcję `isHelpOption`, obsłużymy zarówno `--help`, jak i `-h`, a gdy użytkownik poda za dużo argumentów, pokażemy komunikat błędu oraz instrukcję użycia.

### Co uczeń poznaje

- tworzenie modułu `cli.hpp` / `cli.cpp`
- przenoszenie funkcji z `main.cpp`
- funkcję `isHelpOption`
- obsługę `--help` i `-h`
- walidację liczby argumentów
- `return 1` przy błędnym użyciu programu
- aktualizację `Makefile` po dodaniu nowego pliku
- podstawy projektowania programu CLI

## EN

In this lesson we move help and program argument handling into a separate `cli` module. The `printHelp` function is removed from `main.cpp` and moved to `cli.cpp`, while declarations go into `cli.hpp`. We also add the short `-h` option and validation for too many arguments.

### Narration

In the previous lesson, we added the `--help` option, but the help code went directly into `main.cpp`. Now we clean this up by creating a `cli` module responsible for command-line behavior. We add an `isHelpOption` function, support both `--help` and `-h`, and when the user provides too many arguments, we print an error message and usage instructions.

### What the student learns

- creating a `cli.hpp` / `cli.cpp` module
- moving a function out of `main.cpp`
- the `isHelpOption` function
- handling `--help` and `-h`
- validating the number of arguments
- `return 1` for incorrect program usage
- updating the `Makefile` after adding a new file
- basics of CLI program design
