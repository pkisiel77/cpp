# Calc Part 23

## PL

W tej lekcji dodajemy automatyczny zapis historii przy wyjściu z programu. Żeby nie zapisywać pliku bez potrzeby, używamy flagi `historyChanged`, która informuje, czy od ostatniego zapisu pojawiły się nowe obliczenia. Dzięki temu kalkulator chroni dane użytkownika, ale zapisuje plik tylko wtedy, gdy historia naprawdę się zmieniła.

### Narracja

Do tej pory użytkownik musiał pamiętać o ręcznym wybraniu opcji `Save history`. Jeśli wykonał obliczenia i od razu wybrał `Exit`, nowe wpisy mogły zniknąć. W tej lekcji dodajemy automatyczny zapis przy wyjściu, ale robimy to mądrzej: przez zmienną `historyChanged`. Po dodaniu nowego wyniku ustawiamy ją na `true`, po zapisie na `false`, a przy wyjściu zapisujemy historię tylko wtedy, gdy są niezapisane zmiany.

### Co uczeń poznaje

- typ `bool`
- flagę stanu programu
- pojęcie `dirty flag`
- automatyczny zapis danych przy wyjściu
- unikanie niepotrzebnego zapisu do pliku
- ochronę danych użytkownika
- prostą logikę stanu aplikacji

## EN

In this lesson we add automatic history saving when the program exits. To avoid writing the file unnecessarily, we use a `historyChanged` flag that tells us whether new calculations were added since the last save. This helps the calculator protect user data while saving the file only when the history actually changed.

### Narration

Until now, the user had to remember to choose `Save history` manually. If they performed calculations and then selected `Exit`, new entries could be lost. In this lesson, we add automatic saving on exit, but we do it in a smarter way with a `historyChanged` variable. After adding a new result we set it to `true`, after saving we set it to `false`, and on exit we save history only when there are unsaved changes.

### What the student learns

- the `bool` type
- a program state flag
- the dirty flag concept
- automatic data saving on exit
- avoiding unnecessary file writes
- protecting user data
- simple application state logic
