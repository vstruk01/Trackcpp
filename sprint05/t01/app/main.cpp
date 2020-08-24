#include "lib_draugr.h"

int main(int argc, char **argv) {
    if (argc < 2 || argc > 4) {
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]\n";
        return 1;
    }
    int shout = 0, health = 0, frost = 0;

    validator(shout, health, frost, argv, argc);
    if (argc == 2) {
        Draugr d;
        d.shoutPhrase(shout);
    } else if (argc == 3) {
        Draugr d(health);
        d.shoutPhrase(shout);
    } else {
        Draugr d(health, frost);
        d.shoutPhrase(shout);
    }
}