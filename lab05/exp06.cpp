#include <iostream>

class HasId;

template <typename T> long doGetId(const T& t, std::true_type) {  // last argument unused
    return t.getId();
}

template<typename T> long doGetId (const T& t, std::false_type) {  // last argument unused
    return reinterpret_cast<long>(&t);
}

template<typename T> long getId (const T& t) {
    return doGetId(t, typename std::is_base_of<HasId, T>());
}


class HasId {
public:
    explicit HasId (long id) : id (id) {}  // https://en.cppreference.com/w/cpp/language/explicit
    virtual ~HasId () = default;
    [[nodiscard]] long getId () const { return id; }  // https://en.cppreference.com/w/cpp/language/attributes/nodiscard
private:
    long id;
};

struct ClassWithId : public HasId {
    explicit ClassWithId (long id) : HasId (id) {}
};

struct ClassWithoutId { };


int main()
{
    ClassWithId c1(1);
    ClassWithoutId c2;

    std::cout << getId(c1) << std::endl;
    std::cout << getId(c2) << std::endl;
    return 0;
}