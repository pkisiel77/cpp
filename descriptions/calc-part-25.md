# Calc Part 25

## PL

W tej lekcji dodajemy dopisywanie pojedynczego wpisu historii do pliku. Zamiast za każdym razem zapisywać cały wektor historii od początku, tworzymy funkcję `appendHistoryEntry`, która otwiera `history.txt` w trybie `std::ios::app` i dopisuje nowy wynik na końcu pliku.

### Narracja

Do tej pory zapisywaliśmy całą historię do pliku przez `saveHistory`. To działa, ale przy każdym zapisie cały plik jest tworzony od nowa. W tej lekcji dodamy drugi sposób zapisu: dopisywanie jednej nowej linii na końcu pliku. Użyjemy `std::ios::app`, czyli trybu append, i po każdej operacji od razu dopiszemy nowy wpis historii do `history.txt`.

### Co uczeń poznaje

- `std::ios::app`
- różnicę między nadpisywaniem pliku a dopisywaniem
- zapis pojedynczego wpisu historii
- aktualizowanie pliku po każdej operacji
- relację między auto-save i dirty flag
- dalsze rozwijanie modułu `history`

## EN

In this lesson we add appending a single history entry to the file. Instead of saving the whole history vector from the beginning every time, we create an `appendHistoryEntry` function that opens `history.txt` in `std::ios::app` mode and writes the new result at the end of the file.

### Narration

Until now, we saved the entire history to the file with `saveHistory`. That works, but every save recreates the whole file. In this lesson, we add a second way of saving: appending one new line at the end of the file. We use `std::ios::app`, the append mode, and after each operation we immediately add the new history entry to `history.txt`.

### What the student learns

- `std::ios::app`
- the difference between overwriting and appending to a file
- saving a single history entry
- updating a file after each operation
- the relationship between auto-save and a dirty flag
- further development of the `history` module
