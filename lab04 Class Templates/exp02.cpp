// Szablony a przyjaźń

class A {
    friend void f(); //1-->1
    template <typename T> friend void g(); //1-->*
};

template<typename T> void h();
template<typename T> class B;
template<typename T> class BB { void fun(); };
template<typename T> class C {
    friend void h<T>(); //1-->1
    friend void p(); //*-->1
    template<typename V> friend void q(); //*-->*

    friend B<T>; //1-->1

    template<typename Z> friend class BB; //*-->*

    template<typename Z> friend void BB::fun();//*-->*
};