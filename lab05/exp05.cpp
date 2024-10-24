// Curiously recurring template pattern (CRTP)

template <typename T>
struct Base
{
    void func()
    {
        static_cast<T*>(this)->implementation();
    }

    static void static_func()
    {
        T::static_sub_func();
    }
};

struct Derived : Base<Derived>
{
    void implementation();
    static void static_sub_func();
};

