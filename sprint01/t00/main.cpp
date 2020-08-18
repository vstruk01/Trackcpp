#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <array>

int main(int argc, char **argv) {
    if (argc != 6) {
        std::cerr << "usage: ./simpleSort arg1 arg2 arg3 arg4 arg5\n";
        return 1;
    }
    std::array<std::string, 5> arg;
    for (int i = 1; i < 6; i++) {
        arg[i - 1] = std::string(argv[i]);
    }
    std::sort(arg.begin(), arg.end());
    for (int i = 0; i < 5; i++) {
        std::cout << arg[i] << ' ';
    }
    std::cout << '\n';
}