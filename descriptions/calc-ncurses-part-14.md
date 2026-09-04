# Calc-ncurses Part 14: Save History to File

## PL

W tej lekcji dodajemy trwały zapis historii do kalkulatora ncurses. Historia przestaje istnieć tylko w pamięci programu i trafia do pliku `history.txt`.

Tworzymy osobny moduł `history.hpp` i `history.cpp`. Funkcja `loadHistory` wczytuje historię przy starcie programu, a `saveHistory` zapisuje ją po udanym obliczeniu oraz po wyczyszczeniu historii.

## Narracja PL

W poprzednich lekcjach historia działała tylko podczas jednego uruchomienia aplikacji. Po zamknięciu programu wszystkie wpisy znikały.

Teraz dodajemy zapis do pliku. Tworzymy moduł `history`, w którym umieszczamy dwie funkcje: jedną do wczytywania historii, drugą do jej zapisywania.

Przy starcie programu wczytujemy dane z `history.txt` do `state.history`. Ustawiamy też licznik operacji na podstawie liczby wczytanych wpisów.

Po każdym poprawnym obliczeniu dopisujemy nową pozycję do historii i zapisujemy całą listę do pliku. Po naciśnięciu `c` czyścimy stan aplikacji i zapisujemy pustą historię.

Plik `history.txt` jest plikiem roboczym aplikacji, dlatego dodajemy go do `.gitignore`. W repozytorium trzymamy kod, a nie lokalne dane wygenerowane podczas uruchamiania programu.

## Co uczeń poznaje

- jak zapisywać dane do pliku tekstowego,
- jak wczytywać plik linia po linii,
- jak używać `std::ifstream` i `std::ofstream`,
- jak zwracać `std::vector<std::string>` z funkcji,
- jak zapisywać historię po zmianie stanu aplikacji,
- dlaczego pliki runtime warto dodać do `.gitignore`,
- jak wydzielić obsługę plików do osobnego modułu.

## EN

In this lesson we add persistent history storage to the ncurses calculator. The history no longer exists only in program memory; it is saved to a `history.txt` file.

We create a separate `history.hpp` and `history.cpp` module. The `loadHistory` function loads history when the program starts, and `saveHistory` saves it after a successful calculation and after clearing the history.

## Narration EN

In the previous lessons, history worked only during a single application run. After closing the program, all entries disappeared.

Now we add file saving. We create a `history` module with two functions: one for loading history and one for saving it.

When the program starts, we load data from `history.txt` into `state.history`. We also set the operations counter based on the number of loaded entries.

After each successful calculation, we append a new entry to the history and save the whole list to the file. When the user presses `c`, we clear the application state and save an empty history.

The `history.txt` file is application runtime data, so we add it to `.gitignore`. The repository should contain source code, not local data generated while running the program.

## What the Student Learns

- how to save data to a text file,
- how to read a file line by line,
- how to use `std::ifstream` and `std::ofstream`,
- how to return `std::vector<std::string>` from a function,
- how to save history after application state changes,
- why runtime files should be added to `.gitignore`,
- how to move file handling into a separate module.
