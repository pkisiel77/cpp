# Calc Part 16

## PL

W tej lekcji przełączamy projekt kalkulatora z C++17 na C++20 i od razu używamy małej funkcji dostępnej w tym standardzie. Zmieniamy flagę kompilatora w `Makefile` na `-std=c++20`, dodajemy nagłówek `<utility>` i używamy `std::cmp_greater` oraz `std::cmp_less` do sprawdzania zakresu wybranej operacji.

### Narracja

Sama zmiana standardu na C++20 byłaby za mała na osobną lekcję, więc od razu pokażemy praktyczne użycie nowego narzędzia. Najpierw zmieniamy konfigurację kompilatora w `Makefile` z `-std=c++17` na `-std=c++20`. Potem w kodzie używamy `std::cmp_greater` i `std::cmp_less`, żeby sprawdzać, czy numer operacji mieści się w poprawnym zakresie.

### Co uczeń poznaje

- zmianę standardu z C++17 na C++20
- flagę `-std=c++20`
- nagłówek `<utility>`
- `std::cmp_greater`
- `std::cmp_less`
- bezpieczniejsze porównywanie wartości liczbowych
- różnicę między zmianą konfiguracji a zmianą kodu programu

## EN

In this lesson we switch the calculator project from C++17 to C++20 and immediately use a small function available in that standard. We change the compiler flag in the `Makefile` to `-std=c++20`, add the `<utility>` header, and use `std::cmp_greater` and `std::cmp_less` to validate the selected operation range.

### Narration

Changing the standard to C++20 alone would be too small for a separate lesson, so we also show a practical use of a new tool. First, we change the compiler configuration in the `Makefile` from `-std=c++17` to `-std=c++20`. Then, in the code, we use `std::cmp_greater` and `std::cmp_less` to check whether the operation number is inside the valid range.

### What the student learns

- switching from C++17 to C++20
- the `-std=c++20` flag
- the `<utility>` header
- `std::cmp_greater`
- `std::cmp_less`
- safer numeric comparisons
- the difference between changing build configuration and changing program code
