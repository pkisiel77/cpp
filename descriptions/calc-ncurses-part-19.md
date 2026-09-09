# Calc-ncurses Part 19: Dynamic Terminal Resize

## PL

W tej lekcji dodajemy obsługę dynamicznej zmiany rozmiaru terminala. Okna nagłówka, menu, zawartości i stopki są teraz przechowywane razem w strukturze `AppWindows`, dzięki czemu można nimi zarządzać jako jednym układem interfejsu.

Po odebraniu zdarzenia `KEY_RESIZE` aplikacja usuwa stare okna i tworzy je ponownie z wykorzystaniem aktualnych wartości `LINES` oraz `COLS`. Jeśli terminal jest za mały, zamiast niepoprawnie narysowanego interfejsu wyświetlany jest czytelny komunikat.

## Narracja PL

Do tej pory rozmiary wszystkich okien były obliczane tylko raz podczas uruchamiania programu. Po zmianie rozmiaru terminala ncurses aktualizował wartości `LINES` i `COLS`, ale istniejące okna nadal miały stare wymiary i położenie.

Zaczynamy od utworzenia struktury `AppWindows`. Przechowuje ona cztery wskaźniki `WINDOW`: nagłówek, boczne menu, główną zawartość oraz stopkę. Każdy wskaźnik otrzymuje początkową wartość `nullptr`, co pozwala bezpiecznie sprawdzać, czy dane okno już istnieje.

Następnie przenosimy tworzenie okien do funkcji `createWindows`. Funkcja oblicza dostępną wysokość i szerokość na podstawie bieżącego rozmiaru terminala, tworzy wszystkie elementy układu i zwraca gotową strukturę.

Funkcja `destroyWindows` sprawdza każdy wskaźnik, wywołuje `delwin`, a następnie ustawia wskaźnik ponownie na `nullptr`. Dzięki temu można bezpiecznie wywołać ją zarówno podczas zmiany rozmiaru, jak i przed zakończeniem programu.

Dodajemy również `redrawWindows`, która oznacza okna jako wymagające ponownego narysowania i odświeża ich zawartość. W głównej pętli korzystamy już z pól struktury zamiast czterech osobnych zmiennych.

Na końcu obsługujemy `KEY_RESIZE`. Stary układ jest niszczony, a następnie tworzony ponownie według aktualnych wymiarów. Gdy dostępne miejsce jest zbyt małe, aplikacja pokazuje komunikat i czeka na zmianę rozmiaru albo zakończenie programu.

## Co uczeń poznaje

- jak ncurses zgłasza zmianę rozmiaru przez `KEY_RESIZE`,
- jak używać wartości `LINES` i `COLS`,
- jak grupować wskaźniki `WINDOW *` w strukturze,
- jak inicjalizować wskaźniki wartością `nullptr`,
- jak zwracać strukturę z funkcji,
- jak bezpiecznie niszczyć okna za pomocą `delwin`,
- jak przekazywać strukturę przez referencję,
- jak odtworzyć układ po zmianie rozmiaru terminala,
- jak zabezpieczyć interfejs przed zbyt małym rozmiarem ekranu.

## EN

In this lesson, we add dynamic terminal resize handling. The header, menu, content, and footer windows are now stored together in an `AppWindows` structure, allowing the complete interface layout to be managed as a single unit.

When the application receives a `KEY_RESIZE` event, it removes the old windows and creates them again using the current `LINES` and `COLS` values. If the terminal is too small, a clear message is displayed instead of a broken interface.

## Narration EN

Until now, all window dimensions were calculated only once when the program started. After resizing the terminal, ncurses updated the `LINES` and `COLS` values, but the existing windows still used their old sizes and positions.

We begin by creating the `AppWindows` structure. It stores four `WINDOW` pointers: the header, side menu, main content area, and footer. Every pointer starts as `nullptr`, allowing the program to check safely whether a window already exists.

Next, we move window creation into the `createWindows` function. It calculates the available height and width from the current terminal dimensions, creates every layout element, and returns the completed structure.

The `destroyWindows` function checks every pointer, calls `delwin`, and then resets the pointer to `nullptr`. This makes it safe to use during a resize and before the application exits.

We also add `redrawWindows`, which marks the windows for repainting and refreshes their content. The main loop now uses the structure fields instead of four separate variables.

Finally, we handle `KEY_RESIZE`. The old layout is destroyed and then recreated using the current dimensions. When there is not enough space, the application displays a message and waits for another resize or for the user to quit.

## What the Student Learns

- how ncurses reports terminal resizing with `KEY_RESIZE`,
- how to use the `LINES` and `COLS` values,
- how to group `WINDOW *` pointers in a structure,
- how to initialize pointers with `nullptr`,
- how to return a structure from a function,
- how to destroy windows safely with `delwin`,
- how to pass a structure by reference,
- how to rebuild a layout after the terminal size changes,
- how to protect the interface from an insufficient screen size.
