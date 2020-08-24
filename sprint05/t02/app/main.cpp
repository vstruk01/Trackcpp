#include "lib_draugr.h"

int main(int argc, char **argv) {
    if (argc < 3 || argc > 5) {
        std::cerr << "usage: ./draugr [shoutNumber] [name1,name2] [health] [frostResist]\n";
        return 1;
    }
    int shout = 0, frost = 0;
    double health = 0;

    std::vector<std::string> names = validator(shout, health, frost, argv, argc);
    if (shout > 8) {
        std::cerr << "Invalid shoutNumber\n";
        exit(1);
    }
    if (names.size() != 2) {
        std::cerr << "Invalid names\n";
        exit(1);
    }
    if (argc == 3) {
        Draugr d;
        d.setName(std::move(names[0]));
        d.shoutPhrase(shout);
        Draugr d2(d);
        d2.setName(std::move(names[1]));
        d2.shoutPhrase(shout);
    } else if (argc == 4) {
        Draugr d(health);
        d.setName(std::move(names[0]));
        d.shoutPhrase(shout);
        Draugr d2(d);
        d2.setName(std::move(names[1]));
        d2.shoutPhrase(shout);
    } else {
        Draugr d(health, frost);
        d.setName(std::move(names[0]));
        d.shoutPhrase(shout);
        Draugr d2(std::move(d));
        d2.setName(std::move(names[1]));
        d2.shoutPhrase(shout);
    }
}