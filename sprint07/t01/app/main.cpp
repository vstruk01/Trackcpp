#include "basicStrings.h"

int main() {
    std::cout << "Hello World\n";

    CBL::String s("hello");

    std::cout << s.c_str() << '\n';
}