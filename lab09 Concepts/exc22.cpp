int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    auto isEven = [](int x) { return x % 2 == 0; };
    auto evenNumbers = filterContainer(numbers, isEven);
    std::cout << "Even numbers: ";
    for (int n : evenNumbers) std::cout << n << " ";
    std::cout << std::endl;

    std::list<std::string> words = {"apple", "banana", "cherry", "date"};
    auto startsWithB = [](const std::string& word) { return word.starts_with("b"); };
    auto bWords = filterContainer(words, startsWithB);
    std::cout << "Words starting with 'b': ";
    for (const auto& word : bWords) std::cout << word << " ";
    std::cout << std::endl;

    return 0;
}