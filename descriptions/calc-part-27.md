# Calc Part 27

## PL

W tej lekcji dodajemy argument wiersza poleceń dla pliku historii. Domyślnie kalkulator używa `history.txt`, ale użytkownik może podać własną nazwę pliku przy uruchomieniu programu. Aktualizujemy też `Makefile`, żeby `make run` mogło przekazywać argumenty przez zmienną `ARGS`.

### Narracja

Do tej pory nazwa pliku historii była zapisana na sztywno w kodzie. Teraz dodamy prostą konfigurację z terminala. Zmienimy `main` na wersję z `argc` i `argv`, sprawdzimy, czy użytkownik podał argument, i jeśli tak, użyjemy go jako nazwy pliku historii. Dzięki temu ten sam program może pracować z różnymi plikami historii.

### Co uczeń poznaje

- `int main(int argc, char *argv[])`
- czym jest `argc`
- czym jest `argv`
- `argv[0]` i `argv[1]`
- domyślną wartość konfiguracji
- nadpisanie konfiguracji argumentem programu
- przekazywanie argumentów przez `make run ARGS=...`

## EN

In this lesson we add a command line argument for the history file. By default, the calculator uses `history.txt`, but the user can provide a custom file name when starting the program. We also update the `Makefile` so `make run` can pass arguments through the `ARGS` variable.

### Narration

Until now, the history file name was hardcoded in the source code. Now we add simple configuration from the terminal. We change `main` to use `argc` and `argv`, check whether the user provided an argument, and if so, use it as the history file name. This lets the same program work with different history files.

### What the student learns

- `int main(int argc, char *argv[])`
- what `argc` is
- what `argv` is
- `argv[0]` and `argv[1]`
- a default configuration value
- overriding configuration with a program argument
- passing arguments through `make run ARGS=...`
