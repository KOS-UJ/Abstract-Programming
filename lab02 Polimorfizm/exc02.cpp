struct A { A(int); };
struct B : A { using A::A; };
struct C1 : B { using B::B; };
struct C2 : B { using B::B; };

struct D1 : C1, C2
{
    using C1::C1;
    using C2::C2;
};

int main()
{
    D1 d1(0);  // :(
    // oczekujemy na wyjściu wypisania podanej wartości przy tworzeniu obiektu.
} 