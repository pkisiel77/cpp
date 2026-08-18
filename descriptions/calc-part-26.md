# Calc Part 26

## PL

W tej lekcji dodajemy datę i godzinę do wpisów historii kalkulatora. Historia nie zapisuje już tylko samego wyniku, ale także informację, kiedy dana operacja została wykonana. Używamy `std::chrono::system_clock`, `std::time_t`, `std::localtime` oraz `std::put_time`, żeby pobrać aktualny czas i sformatować go jako tekst.

### Narracja

W poprzedniej lekcji zaczęliśmy dopisywać nowe wpisy historii do pliku. Teraz dodamy do każdego wpisu znacznik czasu. Dzięki temu w historii będzie widać nie tylko, co zostało policzone, ale też kiedy to się stało. Stworzymy funkcję `currentTimestamp`, która zwraca aktualną datę i godzinę, oraz `withTimestamp`, która dokleja ten czas do wpisu historii.

### Co uczeń poznaje

- `std::chrono::system_clock`
- `std::time_t`
- `std::localtime`
- `std::put_time`
- formatowanie daty i czasu
- dodawanie metadanych do wpisów historii
- różnicę między wynikiem wypisanym na ekran a wpisem zapisanym w historii

## EN

In this lesson we add date and time to calculator history entries. The history no longer stores only the result, but also information about when the operation was performed. We use `std::chrono::system_clock`, `std::time_t`, `std::localtime`, and `std::put_time` to get the current time and format it as text.

### Narration

In the previous lesson, we started appending new history entries to the file. Now we add a timestamp to each entry. This lets the history show not only what was calculated, but also when it happened. We create a `currentTimestamp` function that returns the current date and time, and `withTimestamp`, which adds that timestamp to a history entry.

### What the student learns

- `std::chrono::system_clock`
- `std::time_t`
- `std::localtime`
- `std::put_time`
- formatting date and time
- adding metadata to history entries
- the difference between a result printed on the screen and an entry saved in history
