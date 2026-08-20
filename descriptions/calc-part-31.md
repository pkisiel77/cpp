# Calc Part 31

## PL

W tej lekcji przygotowujemy repozytorium do pracy dwutorowej. Klasyczny kalkulator zostaje w katalogu `calc`, a nowa wersja z interfejsem `ncurses` trafia do katalogu `calc-ncurses`. Aktualizujemy główny `Makefile`, żeby potrafił budować oba projekty oraz uruchamiać wersję ncurses osobnym targetem.

### Narracja

Do tej pory rozwijaliśmy jeden projekt: kalkulator konsolowy. Teraz zaczynamy równoległą ścieżkę z `ncurses`, ale nie chcemy mieszać obu wersji w jednym katalogu. Dlatego `calc` zostaje jako stabilna wersja terminalowa, a `calc-ncurses` będzie osobnym projektem. Dzięki temu możemy rozwijać interfejs ncurses bez psucia istniejącego kalkulatora.

### Co uczeń poznaje

- prowadzenie dwóch projektów w jednym repo
- oddzielenie wersji terminalowej od wersji ncurses
- target `calc-ncurses` w głównym `Makefile`
- target `run-ncurses`
- target `clean` sprzątający oba projekty
- porządek w repo przy rozwoju kilku ścieżek

## EN

In this lesson we prepare the repository for two parallel tracks. The classic calculator stays in the `calc` directory, and the new version with an `ncurses` interface goes into `calc-ncurses`. We update the root `Makefile` so it can build both projects and run the ncurses version with a separate target.

### Narration

Until now, we developed one project: the console calculator. Now we start a parallel `ncurses` track, but we do not want to mix both versions in one directory. The `calc` directory stays as the stable terminal version, while `calc-ncurses` becomes a separate project. This lets us develop the ncurses interface without breaking the existing calculator.

### What the student learns

- keeping two projects in one repository
- separating the terminal version from the ncurses version
- the `calc-ncurses` target in the root `Makefile`
- the `run-ncurses` target
- a `clean` target that cleans both projects
- keeping the repository organized while developing multiple tracks
