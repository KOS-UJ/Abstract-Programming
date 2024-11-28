#include<iostream>

/***
  * Używając variadic temmplates zaimplementować funkcje print_all(...)
 ***/

int main() {
    print_all(std::cout, 4, 5.8f, "str", 1.8, 3, 1.1, 9);
    return 0;
}