#include "basicStrings.h"

int main() {
    // CBL::String s0("hello");
    // CBL::String s1(s0, 2);
    // CBL::String s2(15, 'f');
    // CBL::String s3(s0);
    // CBL::String s4("omay wa mo shindairy", 10);

    CBL::String s0("hello");
    // CBL::BasicString s1(s0, 2);
    // CBL::BasicString s2(15, 'f');
    // CBL::BasicString s3(s0);
    // CBL::BasicString s4("omay wa mo shindairy", 10);

    std::cout << s0.c_str() << '\n';
    // std::cout << s1.c_str() << '\n';
    // std::cout << s2.c_str() << '\n';
    // std::cout << s3.c_str() << '\n';
    // std::cout << s4.c_str() << '\n';
    // std::cout << "[] = " << s0[0] << '\n';
    // std::cout << "at = " << s0.at(0) << '\n';
    // std::cout << "front = " << s0.front() << '\n';
    // std::cout << "back = " << s0.back() << '\n';
}