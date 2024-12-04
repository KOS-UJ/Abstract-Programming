template <typename T>
concept superfluous = true;

template <typename T>
concept ConceptName = OtherC<T> || trait<T>::value;

template <typename T>
concept Recursion = Recursion<T>;  // :(

template <typename T> requires SomeConcept<T>  // :(
concept MyConcept = OtherConcept<T>;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
concept Addable = requires (T a, T b) {
    a + b;
};

template <typename T>
concept HasNestedType = requires {
        typename T::value_type;
        typename T::size_type;
};

template<typename T> concept AddableLikeFloats =
        requires (T a, T b) {
{a + b} noexcept -> std::convertible_to<float>;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename X, typename Y>
concept they_are_mathsy = requires(X x, Y y)
{
{ x * y };
{ x / y };
{ x + y };
{ x - y };
{ x++ };
{ y++ };
};