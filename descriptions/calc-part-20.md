# Calc Part 20

## PL

W tej lekcji dodajemy zapis historii obliczeń do pliku tekstowego. Historia była już przechowywana w `std::vector`, ale znikała po zamknięciu programu. Teraz dodajemy opcję `Save history`, używamy `std::ofstream` i zapisujemy każdy wpis historii w osobnej linii pliku `history.txt`.

### Narracja

W poprzednich lekcjach kalkulator nauczył się zapamiętywać historię obliczeń, ale ta historia istniała tylko w pamięci programu. Po zamknięciu aplikacji wszystko znikało. W tej lekcji pokażemy, jak zapisać dane do pliku. Dodamy nową opcję menu, otworzymy plik przez `std::ofstream`, sprawdzimy, czy plik udało się otworzyć, i zapiszemy wszystkie wpisy z wektora historii.

### Co uczeń poznaje

- nagłówek `<fstream>`
- `std::ofstream`
- otwieranie pliku do zapisu
- sprawdzanie, czy plik został otwarty
- zapis tekstu do pliku
- zapis danych z `std::vector`
- różnicę między pamięcią programu a plikiem na dysku

## EN

In this lesson we add saving calculation history to a text file. The history was already stored in a `std::vector`, but it disappeared when the program closed. Now we add a `Save history` option, use `std::ofstream`, and write each history entry as a separate line in `history.txt`.

### Narration

In previous lessons, the calculator learned how to remember calculation history, but that history existed only in program memory. After closing the application, everything disappeared. In this lesson, we show how to save data to a file. We add a new menu option, open a file with `std::ofstream`, check whether it opened successfully, and write all entries from the history vector.

### What the student learns

- the `<fstream>` header
- `std::ofstream`
- opening a file for writing
- checking whether a file was opened
- writing text to a file
- saving data from `std::vector`
- the difference between program memory and a file on disk
