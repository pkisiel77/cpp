# Calc-ncurses Part 17: Mouse Support and Clickable Menu

## PL

W tej lekcji dodajemy do kalkulatora ncurses obsługę myszy. Użytkownik może teraz kliknąć wybraną operację w menu, a aplikacja przelicza współrzędne kursora na indeks elementu i aktualizuje zaznaczenie.

Przy okazji poprawiamy pierwsze renderowanie interfejsu. Ustawiamy wspólne tło dla głównego ekranu i wszystkich okien oraz wymuszamy właściwe odświeżenie po zamknięciu pomocy i okien modalnych.

## Narracja PL

Do tej pory kalkulator obsługiwaliśmy wyłącznie za pomocą klawiatury. W tej części włączamy raportowanie zdarzeń myszy przy użyciu `mousemask` i ustawiamy sposób rozpoznawania kliknięcia lewym przyciskiem.

W głównej pętli programu obsługujemy zdarzenie `KEY_MOUSE`. Funkcja `getmouse` zapisuje szczegóły kliknięcia w strukturze `MEVENT`, dzięki czemu możemy odczytać pozycję kursora oraz rodzaj zdarzenia.

Następnie sprawdzamy, czy kliknięcie znajduje się wewnątrz okna menu. Pozycję pionową przeliczamy na indeks operacji, uwzględniając wysokość nagłówka, ramkę i wiersze zajmowane przez tytuł menu. Jeśli indeks jest poprawny, aktualizujemy zaznaczoną pozycję i komunikat statusu. Kliknięcie opcji `Exit` kończy program.

Aktualizujemy również stopkę i ekran pomocy, aby pokazać nowy sposób sterowania. Na końcu ustawiamy jednolite tło wszystkich okien za pomocą `bkgd` i `wbkgd` oraz odświeżamy ekran po zamknięciu okien modalnych. Dzięki temu cały interfejs jest poprawnie widoczny już po pierwszym uruchomieniu.

## Co uczeń poznaje

- jak włączyć obsługę myszy w ncurses za pomocą `mousemask`,
- jak obsługiwać zdarzenie `KEY_MOUSE`,
- jak odczytać dane kliknięcia przez `getmouse` i strukturę `MEVENT`,
- jak sprawdzić pozycję oraz przycisk myszy,
- jak przeliczyć współrzędne ekranu na indeks pozycji menu,
- jak uniknąć błędu przesunięcia o jeden w obliczeniach wierszy,
- jak ustawić tło dla głównego ekranu i okien ncurses,
- jak poprawnie odświeżyć ekran po zamknięciu okna modalnego.

## EN

In this lesson, we add mouse support to the ncurses calculator. The user can now click an operation in the menu, while the application converts the cursor coordinates into an item index and updates the selection.

We also improve the initial interface rendering. A shared background is applied to the main screen and every window, and the screen is properly refreshed after closing the help screen or a modal window.

## Narration EN

Until now, the calculator was controlled entirely with the keyboard. In this part, we enable mouse event reporting with `mousemask` and configure the application to recognize left-button clicks.

Inside the main program loop, we handle the `KEY_MOUSE` event. The `getmouse` function stores the event details in an `MEVENT` structure, allowing us to read the cursor position and the type of mouse action.

Next, we check whether the click occurred inside the menu window. We convert its vertical position into an operation index while accounting for the header height, border, and menu title rows. When the index is valid, the selected item and status message are updated. Clicking the `Exit` option closes the application.

We also update the footer and help screen to show the new control method. Finally, we apply a consistent background with `bkgd` and `wbkgd`, and refresh the screen after modal windows are closed. This makes the complete interface visible immediately after the application starts.

## What the Student Learns

- how to enable mouse support in ncurses with `mousemask`,
- how to handle the `KEY_MOUSE` event,
- how to read click details with `getmouse` and the `MEVENT` structure,
- how to check the mouse position and button state,
- how to convert screen coordinates into a menu item index,
- how to avoid an off-by-one error when calculating rows,
- how to set the background of the main screen and ncurses windows,
- how to refresh the screen correctly after closing a modal window.
