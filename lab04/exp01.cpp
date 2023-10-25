template<typename T, typename U, int n>
struct A {};

template<typename T, int n>
struct A<T, T*, n> {};

template<typename T>
struct A<T, T*, 10> {};

template<typename J>
struct A<J*, J**, sizeof(int)> {};

template<typename T>
struct A<int, A<T, T, 1>, 5> {};

template<>
struct A<int, int, 1> {};