#include <iostream>
#include <typeinfo>
#include <string>

// Helper template function to announce the type
template <typename T>
void announce_type(const T& var) {
    std::cout << "Type: " << typeid(var).name() << std::endl;
}

int main() {
    const std::string& str_ref = "Hello"; // constant reference to std::string
    auto hello = str_ref; // deduced as std::string (mutable copy)
    const auto& const_hello_ref = hello; // constant reference to std::string
    auto type_var = decltype(hello){};   // deduced as std::string

    // Announce the types
    announce_type(str_ref);
    announce_type(hello);
    announce_type(const_hello_ref);
    announce_type(type_var);

    return 0;
}
