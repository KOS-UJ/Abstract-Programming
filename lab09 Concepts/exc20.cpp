#include <concepts>

/*
 * Zaimplemenować koncept Addable, który opisuje typy które można dodawać.
 * Zaimplementować koncept Transformator, który opisuje fukcję typu `T f(T)`.
 */

int call_twice(std::function<int(int)> callable, int argument) {
    return callable(argument) + callable(argument);
}

int main() {
    auto my_lambda = [](auto x) {return x+5;};
    return call_twice(my_lambda, 10);
}