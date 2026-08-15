# Calc Part 9

## PL

W tej lekcji wyciągamy menu i wybór operacji do funkcji `readOperation`. Funkcja pokazuje menu, wczytuje wybór użytkownika, sprawdza poprawność danych i zwraca wybraną operację do `main`.

### Narracja

Skoro mamy już funkcję do wczytywania liczb, zrobimy podobny porządek z menu. `main` nie musi znać wszystkich szczegółów wczytywania operacji. Przeniesiemy menu, walidację i zwracanie poprawnego wyboru do funkcji `readOperation`.

### Co uczeń poznaje

- funkcję zwracającą operację
- przeniesienie menu poza `main`
- walidację zakresu wyboru
- `return` z pętli
- dalsze porządkowanie programu

## EN

In this lesson we extract the menu and operation choice into a `readOperation` function. The function displays the menu, reads the user's choice, validates the input, and returns the selected operation to `main`.

### Narration

Since we already have a function for reading numbers, we apply the same cleanup to the menu. `main` does not need to know every detail of reading the operation. We move the menu, validation, and returning a valid choice into the `readOperation` function.

### What the student learns

- a function that returns an operation
- moving the menu out of `main`
- validating the selected range
- returning from a loop
- further program cleanup
