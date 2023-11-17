#include <iostream>
#include <string>

template <typename OutputPolicy, typename LanguagePolicy>
class HelloWorld : private OutputPolicy, private LanguagePolicy {
public:
    // Behavior method.
    void operator()() const {
        // Two policy methods.
        print(message());
    }

private:
    using LanguagePolicy::message;
    using OutputPolicy::print;
};

class OutputPolicyWriteToCerr {
protected:
    template <typename MessageType>
    void print(MessageType&& message) const {
        std::cerr << message << std::endl;
    }
};

class OutputPolicyWriteToCout {
protected:
    template <typename MessageType>
    void print(MessageType&& message) const {
        std::cout << message << std::endl;
    }
};

class LanguagePolicyEnglish {
protected:
    std::string message() const { return "Hello, World!"; }
};

class LanguagePolicySpanish {
protected:
    std::string message() const { return "¡Hola Mundo!"; }
};

int main() {
    // english
    using HelloWorldEnglish = HelloWorld<OutputPolicyWriteToCout, LanguagePolicyEnglish>;

    HelloWorldEnglish hello_world;
    hello_world();  // prints "Hello, World!" to stdout

    // spanish
    using HelloWorldSpanish = HelloWorld<OutputPolicyWriteToCerr, LanguagePolicySpanish>;

    HelloWorldSpanish hello_world_argentina;
    hello_world_argentina();  // prints "Hola Mundo!" to stderr
}