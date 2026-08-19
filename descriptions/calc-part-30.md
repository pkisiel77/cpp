# Calc Part 30

## PL

W tej lekcji dodajemy strukturę `AppConfig`, która przechowuje ustawienia programu. Zamiast trzymać nazwę pliku historii jako osobną zmienną w `main.cpp`, przenosimy konfigurację do modułu `cli` i tworzymy funkcję `parseArguments`, która zwraca gotową konfigurację aplikacji.

### Narracja

W poprzednich lekcjach dodaliśmy argumenty programu i osobny moduł `cli`. Teraz zrobimy kolejny krok: zbierzemy ustawienia aplikacji w jednej strukturze. Na razie mamy tylko `historyFileName`, ale w przyszłości może dojść więcej opcji. Dzięki `AppConfig` funkcja `main` nie musi samodzielnie zarządzać każdą zmienną konfiguracyjną.

### Co uczeń poznaje

- `struct`
- domyślną wartość pola w strukturze
- funkcję zwracającą strukturę
- prostą konfigurację aplikacji
- funkcję `parseArguments`
- dalszą rozbudowę modułu `cli`
- czytelniejsze zarządzanie ustawieniami programu

## EN

In this lesson we add an `AppConfig` struct that stores program settings. Instead of keeping the history file name as a separate variable in `main.cpp`, we move configuration into the `cli` module and create a `parseArguments` function that returns a ready-to-use application configuration.

### Narration

In previous lessons, we added program arguments and a separate `cli` module. Now we take the next step: collecting application settings in one structure. For now, we only have `historyFileName`, but more options can be added later. With `AppConfig`, the `main` function no longer needs to manage every configuration variable directly.

### What the student learns

- `struct`
- a default member value in a struct
- a function returning a struct
- simple application configuration
- the `parseArguments` function
- further development of the `cli` module
- clearer management of program settings
