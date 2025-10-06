#include <iostream>
#include <iostream>
#include <cmath>

/**
 * Dokończyć implementację liczenia średniej:
 * Wynik będzie zależał od danych w następujący sposób: (typ danych -> typ wyniku)
 * char -> int
 * short -> int
 * int -> long
 * float -> double
 */

template<typename T>
class MeanTraits;

template<typename T,
        template<typename, typename> class Policy=ArithmeticMeanPolicy,
        typename AccuT=typename MeanTraits<T>::AccuType
>
struct Mean {
    static T mean(T const *beg, T const *end) {
        AccuT total = Policy<T, AccuT>::neutral_element();
        int cnt = 0;
        while (beg != end) {
            Policy<T, AccuT>::accum(total, *beg);
            ++beg;
            ++cnt;
        }
        Policy<T, AccuT>::balance(total, cnt);
        return (T) total;
    }
};

int main() {
    int num[] = {2, 3, 5, 7, 11};
    std::cout << "średnia arytmetyczna z liczb 2,3,5,7,11 wynosi "
              << Mean<int>::mean(&num[0], &num[5])
              << '\n';

    int num2[] = {2, 6, 19};
    std::cout << "średnia geometryczna z liczb 2,6,19 wynosi "
              << Mean<int, GeometricMeanPolicy, double>::mean(&num2[0], &num2[3])
              //            << Mean<int,GeometricMeanPolicy>::mean(&num2[0], &num2[3])
              << '\n';


    int num3[] = {2, 6, 18};
    std::cout << "średnia harmoniczna z liczb 2,6,18 wynosi "
              << Mean<int, HarmonicMeanPolicy, double>::mean(&num3[0], &num3[3])
              << '\n';


    char name[] = "szablony";
    int length = sizeof(name) - 1;
    std::cout << "średnia arytmetyczna ze znaków w napisie \""
              << name << "\" wynosi "
              << Mean<char>::mean(&name[0], &name[length])
              << '\n';
}