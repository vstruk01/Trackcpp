#include "basicStrings.h"

int main() {
    std::cout << "Hello World\n";

    CBL::BasicString<char> s("hello");

    std::cout << s.c_str() << '\n';
}