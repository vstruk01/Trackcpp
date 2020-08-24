#include "lib_draugr.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./draugr [shoutNumber]\n";
        return 1;
    }
    int shout = 0;

    try {
        size_t idx = 0;
        shout = stoi(std::string(argv[1]), &idx);
        if (idx != std::string(argv[1]).size())
            throw false;
    }
    catch (...) {
        std::cerr << "Invalid shoutNumber\n";
        exit(1);
    }
    Draugr d;
    d.shoutPhrase(shout);
}