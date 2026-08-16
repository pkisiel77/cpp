# Calc Part 17

## PL

W tej lekcji robimy większy refactor funkcji `executeOperation`. Dodajemy `operationName`, która zwraca tekstową nazwę operacji, oraz `calculateResult`, która odpowiada tylko za obliczenie wyniku. Dzięki temu `executeOperation` jest krótsza i zajmuje się głównie połączeniem obliczenia, wypisania wyniku oraz obsługi błędów.

### Narracja

Po dodaniu kilku operacji funkcja `executeOperation` zaczęła mieć za dużo odpowiedzialności. W jednym miejscu wybierała działanie, liczyła wynik, wypisywała nazwę operacji i obsługiwała błędy. W tej lekcji rozdzielamy te zadania na mniejsze funkcje. `operationName` zwraca nazwę działania, `calculateResult` oblicza wynik, a `executeOperation` używa tych funkcji i obsługuje wyjątki.

### Co uczeń poznaje

- refactor bez zmiany zachowania programu
- funkcję zwracającą `std::string`
- funkcję zwracającą `double`
- podział odpowiedzialności między funkcjami
- `return` bezpośrednio z `case`
- prostsze `executeOperation`
- czytelniejszy przepływ programu

## EN

In this lesson we make a larger refactor of the `executeOperation` function. We add `operationName`, which returns the text name of an operation, and `calculateResult`, which is responsible only for calculating the result. This makes `executeOperation` shorter and focused mainly on combining calculation, result output, and error handling.

### Narration

After adding several operations, the `executeOperation` function started to have too many responsibilities. In one place, it selected the operation, calculated the result, printed the operation name, and handled errors. In this lesson, we split these tasks into smaller functions. `operationName` returns the operation name, `calculateResult` calculates the result, and `executeOperation` uses those functions and handles exceptions.

### What the student learns

- refactoring without changing program behavior
- a function returning `std::string`
- a function returning `double`
- splitting responsibilities between functions
- returning directly from a `case`
- a simpler `executeOperation`
- a clearer program flow
