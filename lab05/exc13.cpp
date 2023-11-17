#include <iostream>
#include <vector>
#include <list>

/**
 * Zaimplementować odwaracnie kolekcji
 * 1. dla tablicy
 * 2. dla dowolnej kolekcji
 *      std::iterator_traits<T>::difference_type
 *      std::iterator_traits<T>::value_type
 */


void my_reverse(int* first, int* last)
{
    int n = std::distance(first, last);
}

int main()
{
//    std::vector<int> v{1, 2, 3, 4, 5};
//    my_reverse(v.begin(), v.end());
//    for (int n : v) std::cout << n << ' ';
//    std::cout << '\n';
//
//    std::list<int> l{1, 2, 3, 4, 5};
//    my_reverse(l.begin(), l.end());
//    for (auto n : l) std::cout << n << ' ';
//    std::cout << '\n';

    int a[] = {1, 2, 3, 4, 5};
    my_reverse(a, a+5);
    for (int i : a) std::cout << i << ' ';
    std::cout << '\n';

    return 0;
}