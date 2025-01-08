#include <ranges>
#include <iostream>
int main() {
    auto data = std::views::iota(1, 11);
    for (auto chunk : data | std::views::chunk(3)) {
        for (int val : chunk) {
            std::cout << val << ' ';
        }
        std::cout << '\n';
    }
}
