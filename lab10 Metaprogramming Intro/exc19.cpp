#include<iostream>

/***
  * Używając variadic temmplates zaimplementować funkcje min_(...)
 ***/

int main() {
    auto minimum = min_(4, 5.8f, 3, 1.8, 3, 1.1, 9);
    std::cout << minimum;
    return 0;
}