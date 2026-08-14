# Calc Part 7

## PL

W tej lekcji dodajemy walidację wejścia użytkownika dla wyboru operacji. Sprawdzamy, co dzieje się, gdy użytkownik wpisze tekst zamiast numeru, i zabezpieczamy program przed błędnym stanem `std::cin`. Używamy `std::cin.clear()`, `std::cin.ignore(...)`, `std::numeric_limits` oraz `continue`, żeby po błędnym wejściu wrócić do menu zamiast kończyć program.

## EN

In this lesson we add input validation for the operation choice. We check what happens when the user types text instead of a number and protect the program from an invalid `std::cin` state. We use `std::cin.clear()`, `std::cin.ignore(...)`, `std::numeric_limits`, and `continue` to return to the menu after invalid input instead of ending the program.
