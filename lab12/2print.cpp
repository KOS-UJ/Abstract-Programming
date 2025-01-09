#include <iostream>
#include <iomanip>
#include <print>

int main() {
    std::print("Hello, {}!\n", "world");
    int a = 10, b = 20;
    std::print("Sum of {0} and {2} is {1}\n", a, a + b, b);

    // std::print
    std::print("Pi to {:.2f}\n", 3.14159);
    // std::cout
    std::cout << std::fixed << std::setprecision(2) << "Pi to " << 3.14159 << '\n';
    // printf
    printf("Pi to %.2f\n", 3.14159);

    // std::print
    std::print("{:<10} | {:>10}\n", "left", "right");
    // std::cout
    std::cout << std::left << std::setw(10) << "left"
              << " | " << std::right << std::setw(10) << "right" << '\n';
    // printf
    printf("%-10s | %10s\n", "left", "right");

}
