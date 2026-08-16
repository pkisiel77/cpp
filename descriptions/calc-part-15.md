# Calc Part 15

## PL

W tej lekcji dodajemy `Makefile`, żeby nie kompilować kalkulatora ręcznie przez długą komendę `g++`. Projekt `calc` dostaje własny `calc/Makefile` z poleceniami `make`, `make run` i `make clean`, a katalog główny dostaje prosty `Makefile`, który potrafi uruchomić kompilację wszystkich projektów.

### Narracja

Do tej pory kompilowaliśmy program ręcznie, wpisując całą komendę `g++`. Przy kilku plikach zaczyna być to niewygodne i łatwo się pomylić. Dlatego dodajemy `Makefile` w katalogu `calc`, który zna pliki źródłowe, nazwę programu i komendy potrzebne do budowania, uruchamiania oraz sprzątania. Dodatkowo dodajemy prosty `Makefile` w katalogu głównym, żeby później można było kompilować wszystkie projekty z jednego miejsca.

### Co uczeń poznaje

- czym jest `Makefile`
- targety `all`, `run` i `clean`
- zmienne `CXX`, `CXXFLAGS`, `TARGET` i `SOURCES`
- kompilację przez `make`
- uruchamianie programu przez `make run`
- sprzątanie pliku wynikowego przez `make clean`
- użycie `$(MAKE) -C calc` z katalogu głównego
- znaczenie tabulatora w komendach `Makefile`

## EN

In this lesson we add a `Makefile` so the calculator does not need to be compiled manually with a long `g++` command. The `calc` project gets its own `calc/Makefile` with `make`, `make run`, and `make clean`, while the root directory gets a simple `Makefile` that can build all projects.

### Narration

Until now, we compiled the program manually by typing the full `g++` command. With multiple files, this becomes inconvenient and easy to mistype. We add a `Makefile` inside the `calc` directory, which knows the source files, target name, and commands needed to build, run, and clean the project. We also add a simple root `Makefile`, so later we can build all projects from one place.

### What the student learns

- what a `Makefile` is
- the `all`, `run`, and `clean` targets
- the `CXX`, `CXXFLAGS`, `TARGET`, and `SOURCES` variables
- compiling with `make`
- running the program with `make run`
- cleaning the output file with `make clean`
- using `$(MAKE) -C calc` from the root directory
- why command lines in a `Makefile` need tabs
