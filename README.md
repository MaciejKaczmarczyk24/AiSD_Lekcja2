# AiSD_Lekcja2
AiSD (2) - sortowanie
# Sortowanie w C++

Projekt zawiera implementację dwóch algorytmów sortowania:
1. Insert Sort (algorytm prosty) - `insertsort.h`
2. Quick Sort (algorytm zaawansowany) - `quicksort.h`

Oba algorytmy zostały zaimplementowane jako szablony obsługujące interfejs tablicowy. Poprawność sortowania jest weryfikowana w pliku `main.cpp` za pomocą funkcji `std::is_sorted()` oraz `assert()`.

## Zawartość
* `insertsort.h` - szablon sortowania przez wstawianie.
* `quicksort.h` - szablon sortowania szybkiego.
* `main.cpp` - program testujący działanie algorytmów.
* `Makefile` - skrypt ułatwiający kompilację.

## Jak uruchomić?

Wymagany jest system z zainstalowanym kompilatorem `g++` oraz programem `make`. W terminalu wpisać jedną z poniższych komend:

* `make run` – kompiluje program i od razu go uruchamia.
* `make` – tylko kompiluje program (tworzy plik `main.out`).
* `make clean` – usuwa pliki binarne i obiektowe wygenerowane podczas kompilacji.
