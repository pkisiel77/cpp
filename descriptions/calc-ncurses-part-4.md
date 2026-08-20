# Calc-ncurses Part 4

## PL

W tej lekcji dodajemy reakcję programu na wybraną opcję menu. Po naciśnięciu Enter kalkulator pokazuje komunikat statusu z nazwą wybranej operacji. Dodajemy też prostą funkcję `selectedActionMessage` oraz zabezpieczenie dla zbyt małego terminala.

### Narracja

W poprzedniej lekcji dodaliśmy poruszanie się po menu strzałkami. Teraz Enter nie będzie już tylko zamykał programu przez opcję `Exit`. Gdy użytkownik wybierze operację, pokażemy komunikat na dole ekranu. Dzięki temu interfejs zaczyna reagować na akcje użytkownika i przygotowuje nas do późniejszego uruchamiania prawdziwych działań kalkulatora.

### Co uczeń poznaje

- komunikat statusu w interfejsie ncurses
- `std::string` w programie ncurses
- `.c_str()` przy `mvprintw`
- reakcję na Enter dla opcji menu
- aktualizowanie UI po akcji użytkownika
- funkcję pomocniczą `selectedActionMessage`
- prostą obsługę zbyt małego terminala

## EN

In this lesson we add a program reaction to the selected menu option. After pressing Enter, the calculator shows a status message with the selected operation name. We also add a simple `selectedActionMessage` function and a guard for a terminal that is too small.

### Narration

In the previous lesson, we added arrow-key menu navigation. Now Enter no longer only exits the program through the `Exit` option. When the user selects an operation, we show a message at the bottom of the screen. This makes the interface react to user actions and prepares us for running real calculator operations later.

### What the student learns

- a status message in an ncurses interface
- `std::string` in an ncurses program
- `.c_str()` with `mvprintw`
- reacting to Enter for menu options
- updating the UI after user actions
- the `selectedActionMessage` helper function
- simple handling for a terminal that is too small
