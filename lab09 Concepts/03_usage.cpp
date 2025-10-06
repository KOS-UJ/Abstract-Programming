template<typename T>
T f(T x) requires Concept<T> {return x;}

template<typename T> requires SomeConcept<T>
T f(T x) {return x;}

template<typename T>
requires SomeConcept<T> && AnotherConcept<T>
T f(T x) {return x;}

template<typename T>
requires SomeConcept<T> || AnotherConcept<T>
T f(T x) {return x;}

template<typename T>
requires (any constexpr)
T f(T x) {return x;}

// https://en.cppreference.com/w/cpp/named_req
// https://en.cppreference.com/w/cpp/header/concepts
