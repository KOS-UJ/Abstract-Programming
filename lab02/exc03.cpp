class A
{
    int a_private_int;
    void a_private_func();
protected:
    int a_protected_int;
    void a_protected_func();
    void a_protected_func_over(int);
public:
    int a_public_int;
    void a_public_func();
};


class B: private A
{
    int b_private_int;
    void b_private_func();
    using A::a_public_int; // 1
protected:
    int b_protected_int;
    void b_protected_func();
    using A::a_protected_int; // 2
public:
    int b_public_int;
    void b_public_func();
    using A::a_public_func; // 3
    using A::a_protected_func; // 4
    using A::a_private_int; // 5
};
