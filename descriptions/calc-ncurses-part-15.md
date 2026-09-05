# Calc-ncurses Part 15: Clear History Confirmation Window

## PL

W tej lekcji dodajemy okno potwierdzenia przed czyszczeniem historii. Zamiast usuwać dane od razu po naciśnięciu `c`, aplikacja pokazuje małe okno dialogowe i czeka na decyzję użytkownika.

Tworzymy funkcję `confirmDialog`, która buduje osobne okno ncurses, wyświetla tytuł, wiadomość oraz instrukcję `y/n`. Funkcja zwraca `true`, gdy użytkownik potwierdzi operację, albo `false`, gdy ją anuluje.

## Narracja PL

W poprzedniej części dodaliśmy trwały zapis historii do pliku. To oznacza, że czyszczenie historii stało się poważniejszą operacją, bo usuwa dane także z pliku.

Dlatego w tej lekcji dodajemy okno potwierdzenia. Po naciśnięciu `c` nie czyścimy historii od razu. Najpierw wyświetlamy małe okno z pytaniem, czy użytkownik na pewno chce usunąć historię.

Do tego używamy `newwin`, `box`, `mvwprintw` oraz `wgetch`. Dzięki `wgetch` czytamy klawisz bezpośrednio z okna dialogowego. Jeśli użytkownik naciśnie `y`, historia zostaje wyczyszczona i zapisana do pliku. Jeśli wybierze inną odpowiedź, aplikacja pokazuje komunikat o anulowaniu operacji.

To jest ważny krok w stronę prawdziwej aplikacji terminalowej, bo uczymy się tworzyć prosty modalny dialog w ncurses.

## Co uczeń poznaje

- jak utworzyć osobne okno dialogowe przez `newwin`,
- jak narysować ramkę wokół okna przez `box`,
- jak wypisywać tekst w konkretnym oknie przez `mvwprintw`,
- jak czytać klawisz z okna przez `wgetch`,
- jak zwrócić decyzję użytkownika jako `bool`,
- jak zabezpieczyć operację czyszczenia danych,
- jak zaktualizować ekran pomocy po dodaniu nowego zachowania.

## EN

In this lesson we add a confirmation window before clearing history. Instead of deleting data immediately after pressing `c`, the application shows a small dialog window and waits for the user's decision.

We create a `confirmDialog` function that builds a separate ncurses window, displays a title, a message, and a `y/n` instruction. The function returns `true` when the user confirms the action, or `false` when the action is cancelled.

## Narration EN

In the previous part we added persistent history saving to a file. This means that clearing history is now a more serious action, because it also removes data from the file.

That is why in this lesson we add a confirmation window. When the user presses `c`, we do not clear the history immediately. First, we display a small window asking whether the user really wants to remove the history.

We use `newwin`, `box`, `mvwprintw`, and `wgetch` for this. With `wgetch`, we read a key directly from the dialog window. If the user presses `y`, the history is cleared and saved to the file. If the user chooses another answer, the application displays a cancellation message.

This is an important step toward a real terminal application, because we learn how to create a simple modal dialog in ncurses.

## What the Student Learns

- how to create a separate dialog window with `newwin`,
- how to draw a frame around a window with `box`,
- how to print text inside a specific window with `mvwprintw`,
- how to read a key from a window with `wgetch`,
- how to return the user's decision as a `bool`,
- how to protect a data-clearing operation,
- how to update the help screen after adding new behavior.
