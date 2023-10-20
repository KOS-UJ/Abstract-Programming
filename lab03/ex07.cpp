/***
  * Proszę zaimplementować szablon funkcji log<a>(b) aby obliczał wartość logarytmu  b o podstawie a.
  * Prosze skorzystać z funkcji log z biblioteki standardowej.
***/

#include <iostream>
#include <cmath>

int main() {
    double b = 8.0;
    double result_10 = log<10.0>(b);
    double result_1 = log<1.0>(b);
    double result_pi = log<M_PI>(b);
    double result_2 = log<>(b);
    std::cout << "Logarytm " << b << " o podstawie 10 wynosi " << result_10 << std::endl;
    std::cout << "Logarytm " << b << " o podstawie 1 wynosi " << result_1 << std::endl;
    std::cout << "Logarytm " << b << " o podstawie PI wynosi " << result_pi << std::endl;
    std::cout << "Logarytm " << b << " o podstawie 2 wynosi " << result_2 << std::endl;
    return 0;
}