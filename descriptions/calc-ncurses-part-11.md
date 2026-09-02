# Calc-ncurses Part 11: Help Screen and Operations Counter

## PL

W tej lekcji rozbudowujemy kalkulator ncurses o ekran pomocy oraz licznik wykonanych operacji. Po naciśnięciu klawisza `h` użytkownik widzi osobny ekran z listą dostępnych skrótów klawiszowych.

Dodatkowo rozwijamy strukturę `AppState`. Dodajemy pole `operationsCount`, które zlicza poprawnie wykonane działania. Licznik jest wyświetlany w panelu z wynikiem, dzięki czemu aplikacja zaczyna pokazywać więcej informacji o aktualnym stanie pracy.

## Narracja PL

W poprzedniej lekcji dodaliśmy strukturę `AppState`, czyli jedno miejsce na stan aplikacji. Teraz wykorzystujemy tę strukturę w praktyce i dodajemy do niej licznik wykonanych operacji.

Po każdym poprawnym obliczeniu zwiększamy `operationsCount`. Następnie przekazujemy tę wartość do funkcji rysującej główny panel treści i wyświetlamy ją na ekranie.

Drugą częścią lekcji jest ekran pomocy. Dodajemy obsługę klawisza `h`, funkcję `showHelpScreen()` oraz opis skrótów klawiszowych. Dzięki temu program jest wygodniejszy w użyciu i bardziej przypomina prawdziwą aplikację terminalową.

## Co uczeń poznaje

- jak dodać licznik do struktury `AppState`,
- jak zwiększać wartość licznika po udanej operacji,
- jak przekazywać dodatkowe dane do funkcji UI,
- jak dodać ekran pomocy w ncurses,
- jak obsługiwać kolejny skrót klawiszowy w pętli programu,
- jak poprawić czytelność aplikacji przez stopkę z podpowiedziami.

## EN

In this lesson we extend the ncurses calculator with a help screen and an operations counter. When the user presses `h`, the application shows a separate screen with available keyboard shortcuts.

We also continue using the `AppState` structure. We add an `operationsCount` field that counts successful calculations. The counter is displayed in the result panel, so the application starts showing more information about its current state.

## Narration EN

In the previous lesson we added the `AppState` structure, which gives us one place for application state. Now we use it in practice by adding an operations counter.

After each successful calculation, we increment `operationsCount`. Then we pass this value to the function that draws the main content panel and display it on the screen.

The second part of the lesson is the help screen. We add support for the `h` key, create the `showHelpScreen()` function, and display keyboard shortcuts. This makes the program easier to use and closer to a real terminal application.

## What the Student Learns

- how to add a counter to the `AppState` structure,
- how to increment a value after a successful operation,
- how to pass additional data to a UI function,
- how to add a help screen in ncurses,
- how to handle another keyboard shortcut in the program loop,
- how to improve usability with footer hints.
