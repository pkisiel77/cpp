# Calc Part 10

## PL

W tej lekcji wyciągamy wykonywanie działania do funkcji `executeOperation`. `main` wybiera operację, wczytuje liczby i przekazuje dane dalej, a szczegóły instrukcji `switch` są zamknięte w osobnej funkcji.

### Narracja

W poprzednich lekcjach przenieśliśmy wczytywanie danych do funkcji. Teraz zrobimy to samo z wykonywaniem operacji. Dzięki temu `main` pokazuje główny przepływ programu: wybierz operację, wczytaj liczby, wykonaj operację. Szczegóły `switch` przenosimy do `executeOperation`.

### Co uczeń poznaje

- funkcję typu `void`
- przekazywanie kilku argumentów
- przeniesienie `switch` do funkcji
- oddzielanie przepływu programu od szczegółów działania
- czytelniejszy `main`

## EN

In this lesson we extract operation execution into an `executeOperation` function. `main` selects the operation, reads the numbers, and passes the data forward, while the details of the `switch` statement are kept inside a separate function.

### Narration

In previous lessons, we moved input reading into functions. Now we do the same with executing an operation. This makes `main` show the main program flow: choose an operation, read the numbers, execute the operation. The details of the `switch` move into `executeOperation`.

### What the student learns

- a `void` function
- passing multiple arguments
- moving a `switch` into a function
- separating program flow from implementation details
- a cleaner `main`
