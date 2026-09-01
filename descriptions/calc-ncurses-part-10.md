# Calc-ncurses Part 10: Application State Struct

## PL

W tej lekcji porządkujemy dane aplikacji ncurses. Dodajemy strukturę `AppState`, która trzyma aktualnie wybraną pozycję menu, komunikat statusu oraz informację, czy status jest błędem.

Dzięki temu `main.cpp` nie musi przechowywać wielu osobnych zmiennych odpowiedzialnych za stan ekranu. Zamiast tego korzysta z jednego obiektu `state`, który można później łatwo rozbudować o kolejne dane programu.

## Narracja PL

W poprzednich częściach nasz kalkulator ncurses dostał menu, kolory, ramki, osobny moduł UI oraz logikę liczenia. Teraz robimy kolejny krok w stronę większej aplikacji.

Tworzymy strukturę `AppState`. To jest miejsce, w którym trzymamy aktualny stan programu: wybraną opcję menu, tekst statusu i informację, czy komunikat oznacza błąd. W `main.cpp` zamiast kilku luźnych zmiennych mamy jeden obiekt `state`.

To podejście będzie bardzo przydatne w następnych lekcjach, bo aplikacja będzie rosła. Jeśli dojdzie historia działań, ostatni wynik, ekran pomocy albo tryby pracy kalkulatora, będziemy mieli przygotowane miejsce na takie dane.

## Co uczeń poznaje

- jak tworzyć prostą strukturę `struct` w C++,
- jak nadać polom struktury wartości domyślne,
- jak przechowywać stan aplikacji w jednym obiekcie,
- jak zastąpić kilka osobnych zmiennych jedną strukturą,
- jak przygotować program ncurses do dalszej rozbudowy.

## EN

In this lesson we organize the ncurses application data. We add an `AppState` structure that stores the currently selected menu item, the status message, and information about whether the current status is an error.

This keeps `main.cpp` cleaner, because the application state is stored in one object instead of several separate variables. It also prepares the project for future features.

## Narration EN

In the previous parts our ncurses calculator received a menu, colors, frames, a separate UI module, and calculation logic. Now we take another step toward a larger application structure.

We create an `AppState` structure. This is the place where we keep the current program state: the selected menu item, the status text, and whether the message is an error. In `main.cpp`, instead of using several loose variables, we use one `state` object.

This approach will be useful in the next lessons, because the application will grow. If we add history, last result, a help screen, or calculator modes, we already have a clear place for that data.

## What the Student Learns

- how to create a simple `struct` in C++,
- how to set default values for struct fields,
- how to store application state in one object,
- how to replace several separate variables with one structure,
- how to prepare an ncurses program for future development.
