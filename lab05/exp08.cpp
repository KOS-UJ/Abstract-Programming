#include <iostream>
#include <vector>

/**
 * Klasy wytycznych (call polices)
 */

template<typename T> struct ShallowCopy {
    static T* copy(const T* t) {return (T*)(t);}
};

template<typename T> struct DeepCopy {
    static T* copy(const T* t) {return new T(*t);}
};

template<typename T, template<typename> class Copy = DeepCopy>
void algo(std::vector<T*> input) {
    typedef typename std::vector<T*>::iterator Iterator;
    std::vector<T*> working_copy;
    for (Iterator it = input.begin(); it != input.end(); ++it)
        working_copy.push_back(Copy<T>::copy(*it));
    working_copy[0]->a = 3;
};

struct Foo {
    int a = 0;
    Foo() {this->a = 5;}
    Foo(const Foo & other){this->a = other.a;}
};

int main() {
    std::vector<Foo*> v;
    v.push_back(new Foo());
    algo<Foo, DeepCopy>(v);
    std::cout << v[0]->a << std::endl;
    algo<Foo, ShallowCopy>(v);
    std::cout << v[0]->a << std::endl;
    return 0;
}