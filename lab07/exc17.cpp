#include <iostream>
#include <cassert>

/***
 * "Scalić" klasy "ArrayFast" i "ArraySafe" w klasę "Array" tak aby:
 * Array<int, 44> - bezpieczna tablica 44 intów
 * Array<int, 44, AccessSafe> - bezpieczna tablica 44 intów
 * Array<double, 100000, AccessFast> - szybka tablica 100tys. doubli
 * Wykorzystaj klasy wytycznych (call policies).
 */

template<typename T, int size> class ArrayFast {
public:
    T& operator[](int index) {return tab[index];}
private:
    T tab[size];
};

template<typename T, int size> class ArraySafe {
public:
    T &operator[](int index) {
        if (index < 0 || index > size)
            throw std::out_of_range("ArraySave range");
        return tab[index];
    }

private:
    T tab[size];
};
