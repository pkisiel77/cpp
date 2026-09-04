# Calc-ncurses Part 13: Last Result and History Reset

## PL

W tej lekcji rozbudowujemy stan kalkulatora ncurses o ostatni wynik oraz możliwość czyszczenia historii. Aplikacja pokazuje teraz nie tylko listę poprzednich działań, ale także ostatni obliczony rezultat.

Dodajemy pola `lastResult` i `hasLastResult` do struktury `AppState`. Dzięki fladze `hasLastResult` program wie, czy ostatni wynik już istnieje, czy powinien jeszcze pokazać komunikat `none`.

Dodajemy też funkcję `clearHistory`, która czyści historię, zeruje licznik operacji, resetuje ostatni wynik i ustawia komunikat statusu. Funkcja jest wywoływana po naciśnięciu klawisza `c`.

## Narracja PL

W poprzedniej części dodaliśmy historię wyników w pamięci programu. Teraz rozbudowujemy ten mechanizm o ostatni wynik i reset stanu aplikacji.

Do `AppState` trafiają dwa nowe pola. `lastResult` przechowuje wartość ostatniego działania, a `hasLastResult` mówi, czy taki wynik jest już dostępny. To ważne, bo na starcie programu nie mamy jeszcze żadnego obliczenia.

Następnie aktualizujemy panel treści. Jeśli wynik istnieje, pokazujemy go na ekranie. Jeśli nie, wyświetlamy `Last result: none`.

Na końcu dodajemy skrót `c`, który czyści historię, zeruje licznik i usuwa ostatni wynik. Dzięki temu aplikacja ma już prosty mechanizm resetowania swojego stanu.

## Co uczeń poznaje

- jak przechowywać ostatni wynik działania,
- po co używać flagi logicznej `hasLastResult`,
- jak zresetować kilka pól struktury w jednej funkcji,
- jak działa `vector.clear()`,
- jak przekazywać strukturę przez referencję,
- jak dodać nowy skrót klawiszowy w ncurses,
- jak aktualizować ekran pomocy i stopkę po dodaniu funkcji.

## EN

In this lesson we extend the ncurses calculator state with the last result and the ability to clear history. The application now shows not only previous operations, but also the most recent calculated value.

We add `lastResult` and `hasLastResult` fields to the `AppState` structure. The `hasLastResult` flag tells the program whether a result already exists or whether it should still display `none`.

We also add the `clearHistory` function, which clears the history, resets the operations counter, resets the last result, and updates the status message. The function is called when the user presses `c`.

## Narration EN

In the previous part we added an in-memory result history. Now we extend that mechanism with the last result and application state reset.

Two new fields are added to `AppState`. `lastResult` stores the value from the most recent calculation, and `hasLastResult` tells us whether such a value is available. This matters because when the program starts, no calculation has been performed yet.

Then we update the content panel. If a result exists, we display it on the screen. If not, we show `Last result: none`.

Finally, we add the `c` shortcut, which clears the history, resets the counter, and removes the last result. The application now has a simple way to reset its state.

## What the Student Learns

- how to store the last calculation result,
- why a boolean flag like `hasLastResult` is useful,
- how to reset several struct fields in one function,
- how `vector.clear()` works,
- how to pass a structure by reference,
- how to add a new keyboard shortcut in ncurses,
- how to update the help screen and footer after adding a feature.
