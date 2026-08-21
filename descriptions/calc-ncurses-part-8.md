# Calc-ncurses Part 8

## PL

W tej lekcji przebudowujemy interfejs `ncurses` na układ z wieloma oknami. Zamiast rysować wszystko bezpośrednio na `stdscr`, tworzymy osobne sekcje: header, menu, content oraz footer. Każda sekcja ma własną ramkę, własną funkcję rysującą i własne odświeżanie.

### Narracja

Do tej pory cały interfejs był rysowany na jednym ekranie. Teraz zrobimy bardziej aplikacyjny layout. Podzielimy terminal na kilka okien `ncurses`: nagłówek, menu, obszar statusu i stopkę. Użyjemy `newwin`, `box`, `mvwprintw`, `wrefresh` i `delwin`. Dzięki temu interfejs będzie czytelniejszy i łatwiejszy do dalszej rozbudowy.

### Co uczeń poznaje

- `WINDOW *`
- `newwin()`
- `delwin()`
- `werase()`
- `box()` dla konkretnego okna
- `mvwprintw()`
- `wrefresh()`
- `wattron()` i `wattroff()`
- różnicę między `stdscr` i własnym oknem
- dzielenie ekranu na sekcje

## EN

In this lesson we rebuild the `ncurses` interface into a multi-window layout. Instead of drawing everything directly on `stdscr`, we create separate sections: header, menu, content, and footer. Each section has its own border, drawing function, and refresh call.

### Narration

Until now, the whole interface was drawn on one screen. Now we build a more application-like layout. We split the terminal into several `ncurses` windows: a header, a menu, a status/content area, and a footer. We use `newwin`, `box`, `mvwprintw`, `wrefresh`, and `delwin`. This makes the interface clearer and easier to extend later.

### What the student learns

- `WINDOW *`
- `newwin()`
- `delwin()`
- `werase()`
- `box()` for a specific window
- `mvwprintw()`
- `wrefresh()`
- `wattron()` and `wattroff()`
- the difference between `stdscr` and a custom window
- splitting the screen into sections
