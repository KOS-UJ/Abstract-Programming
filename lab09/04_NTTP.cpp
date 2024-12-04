#include <array>

// Non-Type Template Parameter

template <typename T, std::size_t N>
requires (N > 2)
auto third_element(std::array<T, N> my_array) {
    return my_array[2];
}

int main() {
    auto my_array = std::array<int, 3>({1,2,3});
    return third_element(my_array);
}