// Szablony a dziedziczenie

// (I) szablon -> klasa

class ZZ{};

template<typename T>
class Base: public ZZ
{
    T b;
public:
    Base() { cout<<"Base()"<<"\n";}
    virtual ~Base() {}
    virtual void fun ()
    {
        cout <<"Base::fun(): "<< sizeof(T) <<"\n";
    }
};

// (II) szablon -> specjalizacja

template<typename T> // *
class Der1: virtual public Base <T>
{
    T d1;
public:
    Der1() {cout<<"Der1()"<<"\n"; }
    void fun() {
        cout<< "Der1::fun(): "<<sizeof(T)<<"\n";}
};

template<typename T> // **
class Der2: virtual public Base <T>
{
    T d2;
public:
    Der2() {cout<<"Der2()"<<"\n"; }
    void fun() {
        cout<< "Der2::fun(): "<<sizeof(T)<<"\n";}
};

// (II) szablon -> specjalizacja, specjalizacja

template<typename T>
class Der: public Der1<T>, public Der2<T>
{
public:
    Der() {cout<<"Der()"<<"\n"; }
    void fun()
    {
        cout<< "Der::fun(): "<<sizeof(T)<<"\n";
    }
};

// (III) szablon -> parametr

template<typename T>
struct D: public T {};

template<template<class S> class T>
struct D1: public T<ZZ> {};

// (IV) specjalizacja -> specjalizacja

template<typename T>
class Der2<T*>: virtual public Base<T*>
{
    T d2;
public:
    Der2() {cout<<"Der2<T*>()"<<"\n"; }
    void fun()
    {
        cout<< "Der2<T*>::fun(): "<<sizeof(T)<<"\n";
    }
};

// (V) klasa -> specjalizacja

class Spec: Base <int>
{
public:
    Spec() {cout<<"Spec()"<<"\n"; }
    void fun()
    {
        cout<< "Spec::fun(): "<<sizeof(int)<<"\n";
    }
};