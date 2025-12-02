#include <iostream>
#include <deque>
#include <list>

/**
 * Klasy wytycznych (call polices)
 * Poprawić kod aby linia 28 była niedozwolona:
 *      `stack<int, std::list<std::string>> s3;`
 *      W ramach ćwiczeń skorzystać jawnie z std::allocator<T>
 *      Wskazówka: proszę sprawdzić czym jest std::deque<T>
 */

template<typename T, typename Container = std::deque<T> >
class stack {
public:
    T peek () {return c.back();}
    void pop () {c.pop_back();}
    void push (const T& t) {c.push_back(t);}
private:
    Container c;
};


int main()
{
    stack<int> s1;
    stack<int, std::list<int>> s2;
    stack<int, std::list<std::string>> s3;
    s1.push(1);
    s1.push(2);
    s2.push(3);
    s2.push(4);
    std::cout << "Before pop:" << std::endl
    << s1.peek() << std::endl
    << s2.peek() << std::endl;
    s1.pop();
    s2.pop();
    std::cout << "After pop:" << std::endl
    << s1.peek() << std::endl
    << s2.peek() << std::endl;
    return 0;
}