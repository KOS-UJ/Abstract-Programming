/***
 * Napisz klasy szablonowe, które wykorzystują mechanizm SFINAE, aby podczas kompilacji sprawdzać:
 * (1) Czy dany typ T ma metodę begin() (np. kontenery STL).
 * (2) Czy dany typ T ma zagnieżdżony typ mapped_type (np. w mapach std::map lub std::unordered_map).

std::cout << hasBegin<int>::value << std::endl; // false
std::cout << hasBegin<std::vector<int>>::value << std::endl; // true
std::cout << hasMappedType<int>::value << std::endl; // false
std::cout << hasMappedType<std::map<int, int>>::value << std::endl; // true
*/

#include <iostream>
#include <vector>
#include <map>
#include <type_traits>

int main() {
    std::cout << std::boolalpha; // Format output as true/false

    // Check for begin()
    std::cout << "hasBegin<int>::value: " << hasBegin<int>::value << std::endl;               // false
    std::cout << "hasBegin<std::vector<int>>::value: " << hasBegin<std::vector<int>>::value << std::endl; // true
    std::cout << "hasBegin<std::map<int, int>>::value: " << hasBegin<std::map<int, int>>::value << std::endl; // true

    // Check for mapped_type
    std::cout << "hasMappedType<int>::value: " << hasMappedType<int>::value << std::endl;     // false
    std::cout << "hasMappedType<std::map<int, int>>::value: " << hasMappedType<std::map<int, int>>::value << std::endl; // true
    std::cout << "hasMappedType<std::vector<int>>::value: " << hasMappedType<std::vector<int>>::value << std::endl; // false

    return 0;
}
