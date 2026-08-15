# Calc Part 11

## PL

W tej lekcji poprawiamy czytelnosc kodu kalkulatora przez dodanie `enum Operation`. Zamiast uzywac magicznych liczb takich jak `0`, `1`, `2`, `3` i `4`, nadajemy im nazwy: `Exit`, `Addition`, `Subtraction`, `Multiplication` oraz `Division`. Dzieki temu warunki, walidacja i instrukcja `switch` sa latwiejsze do zrozumienia i utrzymania.

### Narracja

W tej lekcji poprawiamy czytelność kodu. W programie mamy liczby `0`, `1`, `2`, `3` i `4`, ale sama liczba nie mówi, co oznacza. Dlatego dodajemy `enum Operation` i nadajemy operacjom nazwy. Dzięki temu `switch` i warunki zaczynają czytać się prawie jak zwykły tekst.

### Co uczeń poznaje

- `enum`
- zastępowanie magicznych liczb nazwami
- czytelniejsze warunki
- czytelniejszy `switch`
- lepsze utrzymanie kodu

## EN

In this lesson we improve the readability of the calculator code by adding `enum Operation`. Instead of using magic numbers such as `0`, `1`, `2`, `3`, and `4`, we give them names: `Exit`, `Addition`, `Subtraction`, `Multiplication`, and `Division`. This makes conditions, validation, and the `switch` statement easier to understand and maintain.

### Narration

In this lesson, we improve code readability. The program uses numbers like `0`, `1`, `2`, `3`, and `4`, but a number alone does not explain what it means. We add `enum Operation` and give the operations names. This makes the `switch` and conditions read almost like regular text.

### What the student learns

- `enum`
- replacing magic numbers with names
- clearer conditions
- a clearer `switch`
- easier code maintenance
