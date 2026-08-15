# Calc Part 14

## PL

W tej lekcji porządkujemy wypisywanie wyników przez dodanie funkcji zwracającej nazwę operacji. Zamiast powtarzać `std::cout` w każdym `case`, funkcja oblicza wynik, a wspólne wypisanie rezultatu może zostać wykonane raz na końcu.

### Narracja

Po dodaniu kolejnych operacji widać, że w `executeOperation` zaczyna powtarzać się podobny kod. Każdy `case` liczy wynik i wypisuje nazwę działania. W tej lekcji zrobimy funkcję, która zwróci nazwę operacji, dzięki czemu `switch` będzie odpowiadał głównie za obliczenie wyniku, a wypisanie rezultatu zrobimy w jednym miejscu.

### Co uczeń poznaje

- funkcję zwracającą `std::string`
- mapowanie operacji na nazwę tekstową
- zmniejszanie duplikacji kodu
- prostsze wypisywanie wyników
- dalsze porządkowanie `executeOperation`

## EN

In this lesson we clean up result printing by adding a function that returns the operation name. Instead of repeating `std::cout` in every `case`, the function calculates the result, and the shared result output can happen once at the end.

### Narration

After adding more operations, `executeOperation` starts to contain repeated code. Each `case` calculates a result and prints the operation name. In this lesson, we create a function that returns the operation name, so the `switch` is mostly responsible for calculating the result, while printing happens in one place.

### What the student learns

- a function returning `std::string`
- mapping an operation to a text name
- reducing duplicated code
- simpler result output
- further cleanup of `executeOperation`
