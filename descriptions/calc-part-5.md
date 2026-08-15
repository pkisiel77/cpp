# Calc Part 5

## PL

W tej lekcji rozwijamy kalkulator w C++ o menu wyboru operacji. Program pobiera dwie liczby, pokazuje dostępne działania, a następnie wykonuje tylko tę operację, którą wybierze użytkownik. W praktyce używamy instrukcji `switch`, bloków `case`, `default` oraz `break`, a także zostawiamy obsługę błędu dzielenia przez zero przez `try` / `catch`.

### Narracja

W poprzedniej wersji kalkulator wykonywał wszystkie działania po kolei. Teraz dodamy menu, żeby użytkownik sam wybrał operację. W tym celu użyjemy zmiennej `operation` oraz instrukcji `switch`, która pozwala wykonać inny fragment kodu dla każdej opcji menu.

### Co uczeń poznaje

- menu w programie konsolowym
- instrukcję `switch`
- bloki `case`
- `default`
- `break`
- wybór działania przez użytkownika

## EN

In this lesson we extend the C++ calculator with an operation menu. The program reads two numbers, displays the available operations, and then executes only the operation selected by the user. In practice, we use the `switch` statement, `case` blocks, `default`, and `break`, while keeping division-by-zero handling with `try` / `catch`.

### Narration

In the previous version, the calculator executed every operation one after another. Now we add a menu so the user can choose the operation. To do that, we use an `operation` variable and a `switch` statement, which lets us run a different block of code for each menu option.

### What the student learns

- a console menu
- the `switch` statement
- `case` blocks
- `default`
- `break`
- choosing an operation from user input
