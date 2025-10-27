/***
 * Prosze zaimplementować fukcje minimum(a, b) która zwraca mniejszy z podanych argumentów.
 * W przypadku równości zwraca pierwszy.
 * W przypadku std::string bierzemy pod uwagę jego długość.
 * W przypadku wskaźnika porównujemy wyłuskane wartości i zwracamy wskaźnik.
 * char* traktujemy tak samo jak string.
***/

#include <iostream>
#include <string>
#include <cstring>


int main() {
    int x = 5, y = 3;
    std::cout << "minimum(" << x << ", " << y << ") = "
              << minimum(x, y) << std::endl;

    std::cout << "minimum(" << &x << "[" << x << "], "
              << &y << "[" << y << "] = "
              << minimum(&x, &y) << std::endl;

    std::string str1 = "cat";
    std::string str2 = "banana";
    std::cout << "minimum(" << str1 << ", " << str2 << ") = "
              << minimum(str1, str2) << std::endl;

    const char* char1 = "pies";
    const char* char2 = "kot";
    std::cout << "minimum(" << char1 << ", " << char2 << ") = "
              << minimum(char1, char2) << std::endl;

    return 0;
}
