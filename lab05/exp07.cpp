#include <iostream>

template <typename T> struct call_traits
{
    typedef T value_type;
    typedef T& reference;
    typedef const T& param_type;
};

template <> struct call_traits <int>
{
    typedef int value_type;
    typedef int& reference;
    typedef int param_type;
};

template <typename T> struct call_traits <T*>
{
    typedef T value_type;
    typedef T& reference;
    typedef T param_type;
};

template <typename T> struct call_traits<T&>
{
    typedef T value_type;
    typedef T reference;
    typedef T param_type;
};

template<typename T> void fun(typename call_traits<T>::param_type value)
{
    std::cout << value << std::endl;
}

int main()
{
    fun<int>(5);
    return 0;
}