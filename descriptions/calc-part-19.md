# Calc Part 19

## PL

W tej lekcji poprawiamy formatowanie wyników w kalkulatorze. Zamiast używać `std::to_string`, które dla `double` wypisuje wiele zer po przecinku, dodajemy funkcję `formatResult`. Używamy `std::ostringstream`, `std::fixed` i `std::setprecision`, żeby kontrolować sposób zamiany liczby na tekst.

### Narracja

W poprzedniej lekcji dodaliśmy historię obliczeń i zauważyliśmy, że wyniki wyglądają mało czytelnie, na przykład `5.000000`. Teraz rozdzielimy samo obliczenie wyniku od jego prezentacji. Dodamy funkcję `formatResult`, która przyjmie liczbę typu `double` i zwróci gotowy tekst z wynikiem w wybranym formacie.

### Co uczeń poznaje

- `std::ostringstream`
- nagłówek `<sstream>`
- nagłówek `<iomanip>`
- `std::fixed`
- `std::setprecision`
- formatowanie liczb zmiennoprzecinkowych
- różnicę między wartością liczbową a tekstową prezentacją wyniku

## EN

In this lesson we improve result formatting in the calculator. Instead of using `std::to_string`, which prints many trailing zeroes for `double`, we add a `formatResult` function. We use `std::ostringstream`, `std::fixed`, and `std::setprecision` to control how a number is converted to text.

### Narration

In the previous lesson, we added calculation history and noticed that results were not very readable, for example `5.000000`. Now we separate the calculation itself from the way the result is displayed. We add a `formatResult` function that takes a `double` and returns ready-to-print text in the selected format.

### What the student learns

- `std::ostringstream`
- the `<sstream>` header
- the `<iomanip>` header
- `std::fixed`
- `std::setprecision`
- formatting floating-point numbers
- the difference between a numeric value and its text presentation
