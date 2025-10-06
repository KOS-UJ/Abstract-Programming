#include <iostream>
#include <vector>
#include <limits>

/**
 * 1. Zaimplementować findMax dla kolekcji
 *    Dla pustej kolekcji zwrócić minimalną wartość
 *    Wskazówka: #include <limits>
 * 2. Samemu zaimplementować klasę cech `numeric_trait` dla int, long, double.
 */

double findMax(const double * data, const size_t numItems) {
    // TODO
}

int main() {
    std::vector<double> double_vec = {2.71, 3.14, 0, -1};
    std::cout << findMax(double_vec.data(), double_vec.size()) << std::endl;
    std::vector<double> double_vec_2 = {};
    std::cout << findMax(double_vec_2.data(), double_vec_2.size()) << std::endl;
    return 0;
}