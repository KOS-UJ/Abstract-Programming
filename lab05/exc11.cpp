#include <cmath>
#include <iostream>
#include <iomanip>

/***
 * Wykorzystując pomysł w poniższym szablonie zaimplementować
 * minimalną klasę A, która ma zaimplementowane wszystkie
 * operatory porównania.
 */

template<typename X>
struct FullyComparable{
    template <typename R>
    friend bool operator>(const R& l, const R& r);
};

template<typename Y>
bool operator>(const Y& l, const Y& r){
    return not (l < r) and not (l == r);
}


class A
{
    int a;
public:
    A(int a): a(a) {}
    // ???
};

int main()
{
    A a1(2);
    A a2(3);

    std::cout << "a1 == a2: " << (a1 == a2) << std::endl;
    std::cout << "a1 < a2: " << (a1 < a2) << std::endl;
    std::cout << "a1 > a2: " << (a1 > a2) << std::endl;
    std::cout << "a1 >= a2: " << (a1 >= a2) << std::endl;
    std::cout << "a1 <= a2: " << (a1 <= a2) << std::endl;
}