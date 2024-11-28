/***
 * Zaprojektuj funkcję szablonową `processNumber`, która:
 * - Akceptuje tylko liczby całkowite (int, long, itp.) i zwraca ich podwojoną wartość.
 * - Akceptuje tylko liczby zmiennoprzecinkowe (float, double, itp.) i zwraca ich wartość zaokrągloną w dół.
 * - Jeśli typ nie jest liczbą, funkcja nie powinna się kompilować.
 * (i)  Użyj mechanizmu SFINAE z std::enable_if.
 * (ii) W wersji v2, użyj if constexpr.
*/

#include <iostream>
#include <type_traits>
#include <cmath>

namespace v1 {
}

namespace v2 {
}


int main() {
    std::cout << "v1::processNumber(10): " << v1::processNumber(10) << std::endl;         // 20
    std::cout << "v1::processNumber(3.14): " << v1::processNumber(3.14) << std::endl;     // 3
    // std::cout << "v1::processNumber('A'): " << v1::processNumber('A') << std::endl;    // Błąd kompilacji

    std::cout << "v2::processNumber(10): " << v2::processNumber(10) << std::endl;         // 20
    std::cout << "v2::processNumber(3.14): " << v2::processNumber(3.14) << std::endl;     // 3
    // std::cout << "v2::processNumber('A'): " << v2::processNumber('A') << std::endl;    // Błąd kompilacji

    return 0;
}
