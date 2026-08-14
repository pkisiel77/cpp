# Calc Part 12

## PL

W tej lekcji zamieniamy zwykly `enum` na nowoczesniejsze `enum class`. Dzieki temu wartosci operacji sa zapisane jako `Operation::Addition`, `Operation::Subtraction`, `Operation::Multiplication`, `Operation::Division` i `Operation::Exit`, co sprawia, ze kod jest bardziej jednoznaczny. Pokazujemy tez, jak wczytac wybor uzytkownika jako `int`, sprawdzic zakres i zamienic go na `Operation` przez `static_cast`.

## EN

In this lesson we replace a regular `enum` with the more modern `enum class`. This makes operation values explicit as `Operation::Addition`, `Operation::Subtraction`, `Operation::Multiplication`, `Operation::Division`, and `Operation::Exit`, which makes the code clearer. We also show how to read the user's choice as an `int`, validate the range, and convert it to `Operation` with `static_cast`.
