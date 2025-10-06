#include <iostream>

/**
 * Zaimplementować bubble sort przy pomocy TMP.
 */

inline void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


void bubbleSort(int* data, int N)
{
    for (int j = 0; j < N - 1; ++j)
    {
        if (data[j] > data[j+1])
            swap(data[j], data[j+1]);
    }

    if (N > 2)
        bubbleSort(data, N-1);
}


int main()
{
    int values[] = { 50, 10, 30, 40, 40 };
    bubbleSort(values, 5);
    for (int n : values) std::cout << n << ' ';
}
