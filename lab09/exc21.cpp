template<class T>
constexpr bool is_learnable = true;

template<class T>
constexpr bool is_abstract_programming = true;

template<class T>
concept Learnable = is_learnable<T>;

template<class T>
concept NotReallyLearnableAbstractProgramming = is_learnable<T> && is_abstract_programming<T>;

template<Learnable T>
void concepts_(T) {}; // #1

template<NotReallyLearnableAbstractProgramming T>
void concepts_(T) {}; // #2


int main()
{
    concepts_(0);
    return 0;
}