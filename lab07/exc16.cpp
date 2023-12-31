#include <iostream>

/*
 * Bazując na przykłądzie zaimplementować funkcję liczącą
 * exp(x) z zdaną dokłądnością.
 */

template<int N>
class Factorial {
public:
    enum { value = N * Factorial<N-1>::value };
};

template<>
class Factorial<1> {
public:
    enum { value = 1 };
};

int main()
{
    std::cout << Factorial<5>::value;
    return 0;
}