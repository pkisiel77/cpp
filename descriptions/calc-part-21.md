# Calc Part 21

## PL

W tej lekcji dodajemy odczyt historii z pliku tekstowego. Po poprzedniej części kalkulator potrafił zapisać historię do `history.txt`, ale po ponownym uruchomieniu programu historia nie była automatycznie ładowana. Teraz dodajemy funkcję `loadHistory`, która używa `std::ifstream`, czyta plik linia po linii i zwraca `std::vector<std::string>` z zapisanymi wpisami.

### Narracja

W poprzedniej lekcji zapisaliśmy historię obliczeń do pliku. Teraz zrobimy drugi krok: wczytamy tę historię przy starcie programu. Dzięki temu kalkulator będzie pamiętał poprzednie obliczenia także po zamknięciu i ponownym uruchomieniu. Użyjemy `std::ifstream`, `std::getline` oraz `push_back`, żeby każdą linię pliku dodać do wektora historii.

### Co uczeń poznaje

- `std::ifstream`
- czytanie pliku linia po linii
- `std::getline`
- zwracanie `std::vector<std::string>` z funkcji
- ładowanie danych przy starcie programu
- różnicę między zapisem i odczytem pliku
- proste utrwalanie danych między uruchomieniami programu

## EN

In this lesson we add loading history from a text file. After the previous part, the calculator could save history to `history.txt`, but after restarting the program the history was not loaded automatically. Now we add a `loadHistory` function that uses `std::ifstream`, reads the file line by line, and returns a `std::vector<std::string>` with saved entries.

### Narration

In the previous lesson, we saved calculation history to a file. Now we take the second step: loading that history when the program starts. This lets the calculator remember previous calculations even after closing and running it again. We use `std::ifstream`, `std::getline`, and `push_back` to add each file line to the history vector.

### What the student learns

- `std::ifstream`
- reading a file line by line
- `std::getline`
- returning `std::vector<std::string>` from a function
- loading data when the program starts
- the difference between writing and reading a file
- simple data persistence between program runs
