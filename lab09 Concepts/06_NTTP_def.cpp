#include <iostream>

template <int N, int M>
concept DiffOfInts = (N - M == 0);

template <int N, int M>
int sum() requires DiffOfInts<N,M> {
        return N+M;
}

int main() {
    std::cout << sum<7,7>();
    // std::cout << sum<7,8>();
    return 0;
}