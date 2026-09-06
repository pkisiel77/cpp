# Calc-ncurses Part 18: Clickable Action Buttons

## PL

W tej lekcji rozwijamy obsługę myszy i zamieniamy tekstową stopkę kalkulatora na pasek klikalnych przycisków. Użytkownik może uruchomić pomoc, informacje o programie, czyszczenie historii oraz zakończenie aplikacji za pomocą myszy.

Kliknięcie operacji w bocznym menu nie tylko zmienia zaznaczenie, ale również uruchamia wybraną operację. Poprawiamy też kolejność inicjalizacji kolorów i odświeżania ekranu, dzięki czemu cały interfejs jest widoczny od razu po uruchomieniu.

## Narracja PL

W poprzedniej części dodaliśmy możliwość wybierania pozycji bocznego menu za pomocą myszy. Teraz rozszerzamy ten mechanizm i tworzymy prawdziwy pasek akcji w dolnej części aplikacji.

Najpierw dodajemy `enum class FooterAction`, który opisuje wszystkie możliwe akcje stopki: pomoc, informacje o programie, czyszczenie historii, wyjście oraz brak akcji. Dzięki temu nie musimy rozpoznawać przycisków za pomocą przypadkowych liczb lub napisów.

Funkcja `drawButton` odpowiada za jednolity wygląd przycisków, a `isInsideButton` sprawdza, czy współrzędna myszy mieści się w ich poziomym obszarze. Funkcja `getFooterAction` łączy pozycję kliknięcia z odpowiednią wartością `FooterAction`.

W pliku głównym dodajemy funkcję `handleFooterAction`. Obsługuje ona te same działania niezależnie od tego, czy użytkownik nacisnął skrót klawiszowy, czy kliknął przycisk. Do wyboru właściwej akcji wykorzystujemy instrukcję `switch`.

Zmieniamy również sposób raportowania kliknięcia na `BUTTON1_CLICKED`, aby akcja wykonywała się po pełnym kliknięciu. Kliknięcie pozycji bocznego menu ustawia klawisz na wartość odpowiadającą Enterowi, dlatego od razu rozpoczyna wykonywanie operacji.

Na końcu poprawiamy kolejność `initColors`, `clear` i `refresh`. Zapobiega to przykrywaniu narysowanych okien przez pusty ekran główny przy pierwszym uruchomieniu programu.

## Co uczeń poznaje

- jak narysować klikalne przyciski w oknie ncurses,
- jak sprawdzać, czy kliknięcie znajduje się w obszarze przycisku,
- jak zamienić współrzędne myszy na akcję programu,
- jak używać `enum class` do opisywania możliwych akcji,
- jak obsługiwać wartości wyliczeniowe za pomocą `switch`,
- jak współdzielić logikę między klawiaturą i myszą,
- jak uruchomić operację bezpośrednio po kliknięciu pozycji menu,
- jak poprawna kolejność odświeżania wpływa na renderowanie ncurses,
- jak kontrolować minimalną szerokość i wysokość terminala.

## EN

In this lesson, we extend mouse support and replace the calculator's text footer with a row of clickable buttons. The user can open help, display application information, clear history, and quit the program with the mouse.

Clicking an operation in the side menu now does more than update the selection: it immediately starts the selected operation. We also fix the order of color initialization and screen refresh calls so the complete interface is visible as soon as the application starts.

## Narration EN

In the previous part, we added the ability to select side menu items with the mouse. Now we extend that mechanism and create a real action bar at the bottom of the application.

First, we add the `FooterAction` enum class, which describes every possible footer action: help, about, clear history, quit, and no action. This means we do not have to identify buttons using unrelated numbers or strings.

The `drawButton` function gives every button a consistent appearance, while `isInsideButton` checks whether the mouse coordinate is inside its horizontal area. The `getFooterAction` function maps the click position to the appropriate `FooterAction` value.

In the main file, we add the `handleFooterAction` function. It performs the same actions regardless of whether the user presses a keyboard shortcut or clicks a button. A `switch` statement is used to select the correct action.

We also change mouse reporting to `BUTTON1_CLICKED`, so an action is executed after a complete click. Clicking a side menu item sets the key to the Enter value, which immediately starts the selected operation.

Finally, we correct the order of `initColors`, `clear`, and `refresh`. This prevents an empty main screen from covering the application windows during the first render.

## What the Student Learns

- how to draw clickable buttons in an ncurses window,
- how to detect whether a click is inside a button area,
- how to map mouse coordinates to an application action,
- how to use `enum class` to describe available actions,
- how to handle enum values with a `switch` statement,
- how to share logic between keyboard and mouse controls,
- how to start an operation directly after clicking a menu item,
- how refresh order affects ncurses rendering,
- how to validate the terminal's minimum width and height.
