# Calc Part 13

## PL

W tej lekcji dodajemy do kalkulatora potęgowanie. Rozszerzamy `calc.hpp`, `calc.cpp` i `main.cpp`, dodając nowe operacje `Power` oraz `Power^2`. Pokazujemy też domyślną wartość argumentu w funkcji `power`, dzięki której `power(firstNumber)` oznacza podniesienie liczby do kwadratu.

### Narracja

Dodamy nową funkcję do kalkulatora i zobaczymy, które miejsca trzeba zmienić w projekcie wieloplikowym. Najpierw dopiszemy deklarację w `calc.hpp`, potem implementację w `calc.cpp`, a na końcu rozszerzymy menu, `enum class` i `switch`. Przy `Power^2` pokażemy, że druga liczba nie jest potrzebna, bo funkcja ma domyślną wartość drugiego argumentu.

### Co uczeń poznaje

- dodawanie nowej funkcji do projektu
- `std::pow`
- `#include <cmath>`
- domyślny argument funkcji
- różnicę między `Power` i `Power^2`
- zmianę menu, enum i switcha przy nowej funkcji

## EN

In this lesson we add exponentiation to the calculator. We extend `calc.hpp`, `calc.cpp`, and `main.cpp` by adding the new `Power` and `Power^2` operations. We also show a default function argument in `power`, where `power(firstNumber)` means squaring the number.

### Narration

We add a new feature to the calculator and see which places must change in a multi-file project. First we add the declaration in `calc.hpp`, then the implementation in `calc.cpp`, and finally we extend the menu, `enum class`, and `switch`. For `Power^2`, we show that the second number is not needed because the function has a default value for its second argument.

### What the student learns

- adding a new function to a project
- `std::pow`
- `#include <cmath>`
- a default function argument
- the difference between `Power` and `Power^2`
- updating the menu, enum, and switch for a new feature
