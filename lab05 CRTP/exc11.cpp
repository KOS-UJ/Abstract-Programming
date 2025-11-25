#include <cmath>
#include <iostream>
#include <iomanip>

/***
 * Wykorzystując pomysł w poniższym szablonie zaimplementować
 * minimalną klasę A, która ma zaimplementowane wszystkie
 * operatory porównania.
 */

template<typename Derived>
struct FullyComparable {
    bool operator>(const Derived& rhs) const {
        // ...
        return rhs < lhs;
    }
};


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
    std::cout << "a1 != a2: " << (a1 != a2) << std::endl;
}