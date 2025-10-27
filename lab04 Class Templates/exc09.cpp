#include <iostream>
#include <stdexcept>

/***
 * Zadanie wymaga C++ 23!
 * Zaimplementować klasę Matrix, która będzie szablonem z
 * następującymi parametrami/metodami:
 * T - typ danych przechowywanych w macierzy
 * X - liczba wierszy macierzy
 * Y - liczba kolumn macierzy (domyślnie równa X)
 * Konstruktor domyślny, który inicjuje macierz "zerami"
 * Operator [] do pobierania i ustawiania elementów macierzy
 * Operator + do dodawania macierzy o tych samych rozmiarach
 * Operator * do mnożenia macierzy,
 *     gdzie liczba kolumn 1. macierzy = liczbie wierszy 2. macierzy
 *     oraz liczba wierszy 1. macierzy = liczba kolumn 2. macierzy
 * (*) Pełnoprawny operator * do mnożenia macierzy.
 * Zaimplementuj metodę display(), która wyświetli zawartość macierzy
***/


int main() {
    const std::size_t x = 3;  // musi być const!
    const std::size_t y = 4;

    Matrix<int, x> mat1;
    Matrix<int, x, x> mat2;
    Matrix<int, x, y> mat3;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            mat1[i, j] = i * x + j;
            mat2[i, j] = (i * x + j) * 2;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            mat3[i, j] = i * x + j;
        }
    }

    std::cout << "Matrix 1:" << std::endl;
    mat1.display();

    std::cout << "Matrix 2:" << std::endl;
    mat2.display();

    std::cout << "Matrix 3:" << std::endl;
    mat3.display();

    Matrix<int, 3> sum = mat1 + mat2;
    std::cout << "Sum of matrices:" << std::endl;
    sum.display();

    //Matrix<int, 3, 4> forbidden = mat1 + mat3;

    return 0;
}
