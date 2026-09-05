# Calc-ncurses Part 16: About Window

## PL

W tej lekcji dodajemy do kalkulatora ncurses okno `About`. Po naciśnięciu klawisza `a` aplikacja otwiera osobne okno informacyjne z nazwą programu, wersją, informacją o C++20 oraz ncurses.

To rozwija temat okien modalnych z poprzedniej lekcji. Tym razem okno nie służy do potwierdzania decyzji, tylko do pokazania informacji o aplikacji.

## Narracja PL

W poprzedniej lekcji dodaliśmy okno potwierdzenia przed czyszczeniem historii. Teraz tworzymy drugie okno, ale o innym przeznaczeniu.

Dodajemy funkcję `showAboutDialog`, która buduje małe okno na środku ekranu. W środku pokazujemy nazwę aplikacji, wersję, informację o tym, że projekt używa C++20, oraz bibliotekę ncurses.

Następnie podpinamy nowe okno pod klawisz `a`. Aktualizujemy też stopkę i ekran pomocy, żeby użytkownik widział dostępny skrót.

Dzięki temu uczeń widzi, że ten sam mechanizm `newwin`, `box`, `mvwprintw`, `wrefresh`, `wgetch` i `delwin` można wykorzystać do różnych typów okien.

## Co uczeń poznaje

- jak stworzyć okno informacyjne w ncurses,
- jak używać `WINDOW *` do kolejnego typu dialogu,
- jak wyświetlić dane o aplikacji,
- jak zamknąć okno dowolnym klawiszem,
- jak dodać nowy skrót klawiszowy `a`,
- jak aktualizować stopkę i ekran pomocy,
- jak budować aplikację z kilkoma typami okien.

## EN

In this lesson we add an `About` window to the ncurses calculator. When the user presses `a`, the application opens a separate information window with the program name, version, C++20 information, and ncurses information.

This continues the modal window topic from the previous lesson. This time the window is not used to confirm a decision, but to display application information.

## Narration EN

In the previous lesson we added a confirmation window before clearing history. Now we create a second window, but with a different purpose.

We add the `showAboutDialog` function, which builds a small centered window. Inside it we display the application name, version, information that the project uses C++20, and the ncurses library.

Then we connect the new window to the `a` key. We also update the footer and help screen so the user can see the new shortcut.

This shows that the same `newwin`, `box`, `mvwprintw`, `wrefresh`, `wgetch`, and `delwin` mechanism can be used for different types of windows.

## What the Student Learns

- how to create an information window in ncurses,
- how to use `WINDOW *` for another dialog type,
- how to display application information,
- how to close a window with any key,
- how to add the `a` keyboard shortcut,
- how to update the footer and help screen,
- how to build an application with multiple window types.
