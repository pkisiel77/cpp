# Calc Part 12

## PL

W tej lekcji zamieniamy zwykly `enum` na nowoczesniejsze `enum class`. Dzieki temu wartosci operacji sa zapisane jako `Operation::Addition`, `Operation::Subtraction`, `Operation::Multiplication`, `Operation::Division` i `Operation::Exit`, co sprawia, ze kod jest bardziej jednoznaczny. Pokazujemy tez, jak wczytac wybor uzytkownika jako `int`, sprawdzic zakres i zamienic go na `Operation` przez `static_cast`.

### Narracja

W poprzedniej lekcji dodaliśmy zwykły `enum`. Teraz pokażemy nowszą i bezpieczniejszą wersję, czyli `enum class`. Kod jest trochę dłuższy, bo piszemy `Operation::Addition` zamiast samego `Addition`, ale dzięki temu dokładnie widać, skąd pochodzi dana wartość. Pokażemy też, dlaczego przy wczytywaniu z konsoli potrzebny jest `static_cast`.

### Co uczeń poznaje

- `enum class`
- różnicę między `enum` i `enum class`
- zapis `Operation::Value`
- `static_cast`
- konwersję z `int` na typ operacji
- bardziej jednoznaczny kod

## EN

In this lesson we replace a regular `enum` with the more modern `enum class`. This makes operation values explicit as `Operation::Addition`, `Operation::Subtraction`, `Operation::Multiplication`, `Operation::Division`, and `Operation::Exit`, which makes the code clearer. We also show how to read the user's choice as an `int`, validate the range, and convert it to `Operation` with `static_cast`.

### Narration

In the previous lesson, we added a regular `enum`. Now we show a newer and safer version: `enum class`. The code is a little longer because we write `Operation::Addition` instead of just `Addition`, but it clearly shows where each value comes from. We also show why `static_cast` is needed when reading from the console.

### What the student learns

- `enum class`
- the difference between `enum` and `enum class`
- the `Operation::Value` syntax
- `static_cast`
- converting from `int` to an operation type
- more explicit code
