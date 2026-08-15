# Calc Part 3

## PL

W tej lekcji dodajemy obsługę dzielenia przez zero. Funkcja `division` sprawdza drugi argument i zgłasza błąd, gdy użytkownik próbuje dzielić przez zero. W `main` używamy `try` / `catch`, żeby przechwycić błąd i wyświetlić czytelny komunikat zamiast kończyć program w niekontrolowany sposób.

### Narracja

Teraz zajmiemy się sytuacją, w której użytkownik próbuje dzielić przez zero. W matematyce takie działanie nie ma poprawnego wyniku, więc program powinien zareagować świadomie. Dodamy sprawdzenie w funkcji `division`, zgłosimy błąd i obsłużymy go w `main` przez `try` oraz `catch`.

### Co uczeń poznaje

- sprawdzanie warunków przez `if`
- zgłaszanie błędu przez `throw`
- `std::runtime_error`
- obsługę błędów przez `try` / `catch`
- bezpieczniejsze dzielenie

## EN

In this lesson we add division-by-zero handling. The `division` function checks the second argument and reports an error when the user tries to divide by zero. In `main`, we use `try` / `catch` to handle the error and display a clear message instead of ending the program unexpectedly.

### Narration

Now we handle the situation where the user tries to divide by zero. In math, this operation has no valid result, so the program should react intentionally. We add a check inside the `division` function, throw an error, and handle it in `main` with `try` and `catch`.

### What the student learns

- checking conditions with `if`
- throwing errors with `throw`
- `std::runtime_error`
- error handling with `try` / `catch`
- safer division logic
