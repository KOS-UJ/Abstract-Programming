#include <iostream>

/***
 * Zaimplementować metody print w strukturach oraz uzupełnić kod w main tak, aby:
 *  - Został wypisany numer porządkowy struktury
 *    (widoczny w komentarzu przy każdej strukturze)
 *  - następnie została wypidana *w ładnej postaci* nazwa struktury
 *  - każda struktura została użyta
 *  Np. dla ostatniej struktury print ma wypisać "6. A<i, i, 1>"
***/

template<typename T, typename U, int n> // 1
struct A {};

template<typename T, int n> // 2
struct A<T, T*, n> {};

template<typename T> // 3
struct A<T, T*, 10> {};

template<typename J> // 4
struct A<J*, J**, sizeof(int)> {};

template<typename T> // 5
struct A<int, A<T, T, 1>, 5> {};

template<> // 6
struct A<int, int, 1> {};


int main() {
    A<>::print();
    A<>::print();
    A<>::print();
    A<>::print();
    A<>::print();
    A<>::print();

    return 0;
}