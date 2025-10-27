#include <iostream>
#include <string>

template <typename T1, typename T2>
class Pair {
public:
    static void print() {
        std::cout << "General template: Pair<T1, T2>\n";
    }
};

template <typename T>
class Pair<T, T> {
public:
    static void print() {
        std::cout << "Partial specialization: Pair<T, T>\n";
    }
};

template <typename T>
class Pair<T*, int> {
public:
    static void print() {
        std::cout << "Partial specialization: Pair<T*, int>\n";
    }
};

int main() {
    Pair<double, std::string>::print();
    Pair<int, int>::print();
    Pair<int*, int>::print();
}