# Calc Part 8

## PL

W tej lekcji dodajemy walidację liczb w formie funkcji `readNumber`. Zamiast kopiować ten sam kod dla pierwszej i drugiej liczby, tworzymy jedną funkcję, która pyta użytkownika tak długo, aż dostanie poprawną wartość typu `double`.

### Narracja

W poprzedniej lekcji zabezpieczyliśmy wybór operacji. Teraz zrobimy to samo dla liczb, ale w lepszej formie: przez osobną funkcję. Dzięki temu nie powtarzamy tego samego kodu dla pierwszej i drugiej liczby, a `main` staje się krótszy i czytelniejszy.

### Co uczeń poznaje

- walidację wejścia dla liczb
- funkcję `readNumber`
- pętlę `while (true)` wewnątrz funkcji
- `return` z funkcji
- usuwanie duplikacji kodu
- użycie `std::string` jako komunikatu

## EN

In this lesson we add number validation through a `readNumber` function. Instead of copying the same code for the first and second number, we create one function that keeps asking the user until it receives a valid `double` value.

### Narration

In the previous lesson, we protected the operation choice. Now we do the same for numbers, but in a better form: with a separate function. This avoids repeating the same code for the first and second number, and it makes `main` shorter and easier to read.

### What the student learns

- input validation for numbers
- the `readNumber` function
- a `while (true)` loop inside a function
- returning from a function
- removing duplicated code
- using `std::string` as a message
