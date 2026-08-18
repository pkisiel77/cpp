# Calc Part 28

## PL

W tej lekcji dodajemy opcję `--help` do programu konsolowego. Po uruchomieniu kalkulatora z argumentem `--help` program wypisuje sposób użycia, dostępne opcje oraz przykłady uruchomienia. Dzięki temu kalkulator zaczyna zachowywać się bardziej jak typowe narzędzie uruchamiane z terminala.

### Narracja

W poprzedniej lekcji dodaliśmy argument z nazwą pliku historii. Teraz dodamy specjalną opcję `--help`, która nie uruchamia kalkulatora, tylko pokazuje krótką pomoc. Stworzymy funkcję `printHelp`, użyjemy `argv[0]` jako nazwy programu i zakończymy działanie wcześniej przez `return 0`, jeśli użytkownik poda `--help`.

### Co uczeń poznaje

- prostą obsługę opcji `--help`
- porównywanie `std::string`
- `argv[0]` jako nazwę programu
- wcześniejsze zakończenie programu przez `return 0`
- funkcję wypisującą pomoc użytkownika
- podstawowy UX programu konsolowego
- różnicę między argumentem danych a opcją programu

## EN

In this lesson we add a `--help` option to the console program. When the calculator is started with the `--help` argument, it prints usage information, available options, and example commands. This makes the calculator behave more like a typical command-line tool.

### Narration

In the previous lesson, we added an argument for the history file name. Now we add a special `--help` option that does not start the calculator, but prints short help text. We create a `printHelp` function, use `argv[0]` as the program name, and exit early with `return 0` when the user passes `--help`.

### What the student learns

- simple handling of the `--help` option
- comparing `std::string`
- `argv[0]` as the program name
- exiting early with `return 0`
- a function that prints user help
- basic console program UX
- the difference between a data argument and a program option
