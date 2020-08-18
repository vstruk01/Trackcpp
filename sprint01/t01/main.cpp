#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv) {
    std::string s, print;
    std::vector<std::string> names = {"jim", "emer", "mercer"};

    if (argc < 2) {
        std::cerr << "usage: ./moveAlong [args]\n";
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        s = std::string(argv[i]);
        print = s;

        for (int j = 0; s[j]; j++)
            s[j] = tolower(s[j]);
        for (std::string i : names) {
            if (s.find(i) != std::string::npos) {
                std::cout << print << ", move along!\n";
                break;
            }
        }
    }
}