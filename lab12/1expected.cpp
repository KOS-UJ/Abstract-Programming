#include <expected>
#include <string>
#include <iostream>

std::expected<int, std::string> parse_number(const std::string& str) {
    try {
        return std::stoi(str);
    } catch (...) {
        return std::unexpected("Invalid number format");
    }
}

int main() {
    auto result = parse_number("a123");
    if (result) {
        std::cout << "Parsed number: " << *result << '\n';
    } else {
        std::cerr << "Error: " << result.error() << '\n';
    }
}
