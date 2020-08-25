#include "lib_draugr.h"

int main(int argc, char **argv) {
    if (argc < 2 || argc > 4) {
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]\n";
        return 1;
    }
    int shout = 0, frost = 0;
    double health = 0;

    validator(shout, health, frost, argv, argc);
    if (argc == 2) {
        Draugr d;
        d.shoutPhrase(shout);
    } else if (argc == 3) {
        size_t idx;
        int i = stoi(std::string(argv[2]), &idx);
        if (idx != std::string(argv[2]).size()) {
            Draugr d(stod(std::string(argv[2]), &idx));
            d.shoutPhrase(shout);
        } else {
            Draugr d(i);
            d.shoutPhrase(shout);
        }
    } else {
        Draugr d(health, frost);
        d.shoutPhrase(shout);
    }
}