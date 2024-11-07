#include <iostream>
#include <vector>
#include <limits>

/**
 * Zaimplementować findMax dla kolekcji
 * Dla pustej kolekcji zwrócić minimalną wartość
 */

double findMax(const double * data, const size_t numItems) {
    // TODO
}

int main() {
    std::vector<double> double_vec = {2.71, 3.14, 0, -1};
//    std::vector<double> double_vec = {};
    std::cout << findMax(double_vec.data(), double_vec.size()) << std::endl;
    return 0;
}