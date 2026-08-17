# Calc Part 24

## PL

W tej lekcji dodajemy czyszczenie historii obliczeń z potwierdzeniem użytkownika. Kalkulator dostaje nową opcję `Clear history`, która usuwa wpisy z `std::vector` oraz czyści plik `history.txt`. Ponieważ jest to operacja usuwająca dane, dodajemy funkcję `confirmAction`, która pyta użytkownika, czy na pewno chce wykonać akcję.

### Narracja

W poprzednich lekcjach nauczyliśmy kalkulator zapisywać i odczytywać historię. Teraz dodamy możliwość jej wyczyszczenia. To jest operacja, która usuwa dane, więc nie powinna wykonywać się przypadkiem. Dlatego tworzymy funkcję `confirmAction`, dodajemy opcję `Clear history` w menu, a potem czyścimy historię tylko wtedy, gdy użytkownik potwierdzi wybór.

### Co uczeń poznaje

- `std::vector::clear`
- czyszczenie pliku przez `std::ios::trunc`
- funkcję zwracającą `bool`
- prostą funkcję potwierdzenia akcji
- przekazywanie wektora przez referencję bez `const`
- rozszerzanie menu o kolejną operację
- bezpieczniejsze podejście do operacji usuwających dane

## EN

In this lesson we add clearing calculation history with user confirmation. The calculator gets a new `Clear history` option that removes entries from the `std::vector` and clears the `history.txt` file. Because this operation deletes data, we add a `confirmAction` function that asks the user to confirm the action first.

### Narration

In previous lessons, the calculator learned how to save and load history. Now we add the ability to clear it. This operation deletes data, so it should not happen accidentally. We create a `confirmAction` function, add the `Clear history` menu option, and clear the history only when the user confirms the choice.

### What the student learns

- `std::vector::clear`
- clearing a file with `std::ios::trunc`
- a function returning `bool`
- a simple action confirmation function
- passing a vector by non-const reference
- extending the menu with another operation
- a safer approach to data-deleting actions
