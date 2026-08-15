# Calc Part 7

## PL

W tej lekcji dodajemy walidację wejścia użytkownika dla wyboru operacji. Sprawdzamy, co dzieje się, gdy użytkownik wpisze tekst zamiast numeru, i zabezpieczamy program przed błędnym stanem `std::cin`. Używamy `std::cin.clear()`, `std::cin.ignore(...)`, `std::numeric_limits` oraz `continue`, żeby po błędnym wejściu wrócić do menu zamiast kończyć program.

### Narracja

W tej części sprawdzamy, co stanie się, gdy użytkownik wpisze tekst zamiast numeru operacji. `std::cin` przechodzi wtedy w stan błędu i kolejne odczyty nie działają poprawnie. Dlatego czyścimy stan strumienia przez `clear`, usuwamy błędne dane przez `ignore` i wracamy do początku pętli przez `continue`.

### Co uczeń poznaje

- walidację wejścia dla menu
- stan błędu `std::cin`
- `std::cin.clear()`
- `std::cin.ignore(...)`
- `std::numeric_limits`
- `continue`

## EN

In this lesson we add input validation for the operation choice. We check what happens when the user types text instead of a number and protect the program from an invalid `std::cin` state. We use `std::cin.clear()`, `std::cin.ignore(...)`, `std::numeric_limits`, and `continue` to return to the menu after invalid input instead of ending the program.

### Narration

In this part, we check what happens when the user types text instead of an operation number. `std::cin` enters an error state, and the next reads no longer work correctly. We clear the stream state with `clear`, remove the invalid input with `ignore`, and return to the start of the loop with `continue`.

### What the student learns

- input validation for a menu
- the error state of `std::cin`
- `std::cin.clear()`
- `std::cin.ignore(...)`
- `std::numeric_limits`
- `continue`
