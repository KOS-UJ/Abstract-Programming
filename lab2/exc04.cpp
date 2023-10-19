/*
Zaimplementować A z metodą f która nie pobiera ani nie zwaca żadnej wartości.
Wywołanie konstruktora ma wypisać "A()\n", metody f "A::f()\n", desruktora "~A()\n".
Zaimplementować B jako pochodną od A, która robi to samo *analogicznie*, tj. wypisuje odpowiednio "B()", "B::f()", "~B()".

Dla poniższej funkcji main() oczekiwane wyjście to:

A()
A()
B()
A::f()
~A() //???
B::f()
~A() //???
A::f()
B::f()
~B()
~A()
~A()

Dodać konstruktory kopiujące tak aby wypisywały "coping A()\n" i "coping B()\n"

*/


A ptr_fun(A *ptr) {ptr->f(); return *ptr;}

A& ref_fun(A &ref) {ref.f(); return ref;}

int main() {
    A a, *a_ptr =&a;
    B b, *b_ptr =&b;
    ptr_fun(a_ptr); ptr_fun(b_ptr);
    ref_fun(*a_ptr); ref_fun(*b_ptr);
}
