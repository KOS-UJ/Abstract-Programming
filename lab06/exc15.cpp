#include <iostream>
#include <cassert>

/***
 * Zaimplementować funkcję "sum" która sumuje wszystkie elementy tablicy.
 * Proszę wykorzystać klasy cech (traits).
 * @param begin
 * @param end
 * @returntype short for (const) char*, int for (const) short*, long for (const) int*, long for (const) long*
 */

template<typename T>
struct sum_traits;

int main() {
    const char tab1[] = {0x10, 0x20, 0x30, 0x40};
    const int tab1_size = sizeof(tab1) / sizeof(tab1[0]);
    assert(sizeof(sum(tab1, tab1+tab1_size)) == sizeof(short));
    return 0;
}
