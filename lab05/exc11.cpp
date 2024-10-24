#include <iostream>

/***
 * Zaimplementować klasę SuperClass oraz podklasy Specific1 i Specific2,
 * tak aby poniższa funkcja wypisała nazwę podklasy.
 * Dopuszczalne są zmiany w kodzie, ale poza main.
 */



void speak(SuperClass super_class) {
    super_class.who();
}

int main() {
    Specific1 s1;
    speak(s1); // Specific1
    Specific2 s2;
    speak(s2); // Specific2
}