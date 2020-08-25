#include "lib_draugr.h"

static void draugrShout(std::string name, std::string name2, Draugr d, int shout) {
    d.setName(std::move(name));
    d.shoutPhrase(shout);
    Draugr d2(d);
    d2.setName(std::move(name2));
    d2.shoutPhrase(shout);
}

static void validNamesShout(int shout, std::vector<std::string> names) {
    if (shout > 8) {
        std::cerr << "Invalid shoutNumber\n";
        exit(1);
    }
    if (names.size() != 2) {
        std::cerr << "Invalid names\n";
        exit(1);
    }
}

int main(int argc, char **argv) {
    if (argc < 3 || argc > 5) {
        std::cerr << "usage: ./draugr [shoutNumber] [name1,name2] [health] [frostResist]\n";
        return 1;
    }

    int shout = 0, frost = 0;
    double health = 0;

    std::vector<std::string> names = validator(shout, health, frost, argv, argc);
    validNamesShout(shout, names);
    if (argc == 3) {
        Draugr d;
        draugrShout(names[0], names[1], d, shout);
    } else if (argc == 4) {
        size_t idx;
        int i = stoi(std::string(argv[3]), &idx);
        if (idx != std::string(argv[3]).size()) {
            Draugr d(stod(std::string(argv[3]), &idx));
            draugrShout(names[0], names[1], d, shout);
        } else {
            Draugr d(i);
            draugrShout(names[0], names[1], d, shout);
        }
    } else {
        Draugr d(health, frost);
        draugrShout(names[0], names[1], d, shout);
    }
}