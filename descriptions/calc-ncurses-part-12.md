# Calc-ncurses Part 12: Result History Panel

## PL

W tej lekcji dodajemy do kalkulatora ncurses panel historii wyników. Aplikacja zaczyna pamiętać wykonane działania w czasie jednego uruchomienia programu.

Do struktury `AppState` dodajemy `std::vector<std::string> history`. Po każdym poprawnym obliczeniu dopisujemy nowy wpis przez `push_back`, a następnie przekazujemy historię do funkcji `drawContent`, która wyświetla ostatnie operacje na ekranie.

## Narracja PL

W poprzedniej lekcji dodaliśmy licznik wykonanych operacji. Teraz idziemy krok dalej: nie tylko liczymy, ile działań zostało wykonanych, ale także zapamiętujemy ich wyniki.

Do stanu aplikacji dodajemy wektor napisów. Wektor jest dobrą strukturą na listę, która może rosnąć w czasie działania programu. Za każdym razem, gdy obliczenie zakończy się sukcesem, dopisujemy aktualny komunikat statusu do historii.

Następnie rozbudowujemy funkcję rysującą główny panel. Pokazuje ona nagłówek `History` oraz wpisy z historii. Dodatkowo ograniczamy liczbę widocznych wierszy, żeby tekst nie wychodził poza okno ncurses.

Historia w tej lekcji działa tylko w pamięci programu. Po zamknięciu kalkulatora znika. To celowe, bo najpierw uczymy się pracy ze stanem aplikacji i kolekcją `std::vector`, a zapis do pliku możemy dodać w kolejnej części.

## Co uczeń poznaje

- jak użyć `std::vector` do przechowywania listy danych,
- jak dodać element do wektora przez `push_back`,
- jak przechowywać historię w strukturze `AppState`,
- jak przekazywać wektor do funkcji przez referencję,
- jak wyświetlać listę tekstów w ncurses,
- jak ograniczyć liczbę widocznych wpisów do rozmiaru okna.

## EN

In this lesson we add a result history panel to the ncurses calculator. The application starts remembering completed operations during a single program run.

We add `std::vector<std::string> history` to the `AppState` structure. After each successful calculation, we append a new entry with `push_back`, then pass the history to `drawContent`, which displays recent operations on the screen.

## Narration EN

In the previous lesson we added an operations counter. Now we go one step further: instead of only counting how many operations were performed, we also remember their results.

We add a vector of strings to the application state. A vector is a good structure for a list that can grow while the program is running. Each time a calculation succeeds, we append the current status message to the history.

Then we extend the function that draws the main content panel. It shows the `History` title and the history entries. We also limit the number of visible rows so the text stays inside the ncurses window.

In this lesson the history exists only in program memory. After closing the calculator, it disappears. This is intentional: first we learn application state and `std::vector`, and saving history to a file can come in a later part.

## What the Student Learns

- how to use `std::vector` to store a list of data,
- how to add an element to a vector with `push_back`,
- how to store history in the `AppState` structure,
- how to pass a vector to a function by reference,
- how to display a list of text lines in ncurses,
- how to limit visible entries to the window size.
