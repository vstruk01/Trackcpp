#include "dragonborn.h"
#include "algorithmUtils.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./dragonborn [action]\n";
        return 1;
    }

    Dragonborn drb;
    Dragonborn::Actions act;
    std::map<std::string, Dragonborn::Actions> acts = {
        {"magic", Dragonborn::Actions::Magic},
        {"woapon", Dragonborn::Actions::Weapon},
        {"shout", Dragonborn::Actions::Shout}
    };
    try {
        act = acts.at(std::string(argv[1]));
    }
    catch(...) {
        std::cout << "Invalid actions\n";
        return 1;
    }
    drb.executeAction(act);
}
