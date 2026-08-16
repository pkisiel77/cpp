# Calc Part 18

## PL

W tej lekcji dodajemy historię obliczeń do kalkulatora. Program zapamiętuje wykonane działania w `std::vector<std::string>` i dostaje nową opcję menu `History`, która pokazuje zapisane wyniki. Dzięki temu kalkulator nie tylko liczy, ale też przechowuje informacje o poprzednich operacjach podczas działania programu.

### Narracja

Do tej pory kalkulator wypisywał wynik i od razu o nim zapominał. W tej lekcji dodamy prostą historię obliczeń. Użyjemy `std::vector`, żeby przechowywać wiele wpisów tekstowych, zmienimy `executeOperation`, żeby zwracała tekst z wynikiem, a potem dodamy funkcję `showHistory`, która wypisze wszystkie zapisane działania.

### Co uczeń poznaje

- `std::vector`
- `push_back`
- `empty`
- pętlę range-based `for`
- przekazywanie wektora przez referencję `const`
- funkcję zwracającą `std::string`
- prostą historię działania programu

## EN

In this lesson we add calculation history to the calculator. The program stores completed operations in `std::vector<std::string>` and gets a new `History` menu option that displays saved results. This makes the calculator not only compute values, but also remember previous operations while the program is running.

### Narration

Until now, the calculator printed a result and immediately forgot it. In this lesson, we add a simple calculation history. We use `std::vector` to store multiple text entries, change `executeOperation` so it returns the result text, and then add a `showHistory` function that prints all saved operations.

### What the student learns

- `std::vector`
- `push_back`
- `empty`
- a range-based `for` loop
- passing a vector by `const` reference
- a function returning `std::string`
- a simple program history
