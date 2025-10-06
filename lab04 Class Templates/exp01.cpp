template<typename T, int N>
struct A {
    template<typename R>
    struct B {void func_b(const R& r);};

    const char* func_a() {
        return typeid(*this).name();
    }

    template<typename P> P templ_func_a();

    void over(int a);
    template<typename F> void over(F);

    T t[N];
    B<T> b;
    static int stat_a;
};

template<>
struct A<int, 44> {
    int x, y;

    A(int arg_x=1, int arg_y=1)
    {
        x = arg_x;
        y = arg_y;
    }

    int dist()
    {
        return x * x + y * y;
    }

    static const char* stat_a;
};


template<typename T, int N>
int A<T, N>::stat_a = 0;

template<typename T, int N>
template<typename R>
void A<T, N>::B<R>::func_b(const R& r) {
    std::cout<<"B<R>::func_b(const R &r): "<<r<<"\n";}

template<typename T, int N>
template<typename P>
P A<T, N>::templ_func_a() {return P(t[0]);}

template<typename T, int N>
void A<T, N>::over(int a) {std::cout<<a<<" expl\n";}

template<typename T, int N>
template<typename G>
void A<T, N>::over(G a) {std::cout<< a << " templ\n";}

const char* A<int, 44>::stat_a = "ADAM";


#define print(x) std::cout<< #x" = " << (x) << "\n"

int main() {
    /*
    Ograniczenia:
    - nie można ich definiować w klasach lokalnych
    - klasy lokalne nie mogą być argumentami konkretyzacji
      szablonów
    - nie można zdefiniować szablonu dla destruktora i funkcji
      wirtualnych
    - nie działa polimorfizm dynamiczny (szablon i jego
      konkretyzacja nie nadpisze metody wirtualnej)
    */
}