#include "Player.h"
#include "Map.h"
#include "MoveManager.h"
#include "algorithmUtils.h"

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "usage: ./smartPointers [width] [height]\n";
        exit(1);
    }
    size_t higth;
    size_t width;

    try {
        size_t idx;

        higth = std::stoi(argv[1], &idx);
        if (argv[1][idx] != '\0')
            throw false;
        width = std::stoi(argv[2], &idx);
        if (argv[2][idx] != '\0')
            throw false;
    }
    catch(...) {
        std::cerr << "invalid input\n";
        exit(1);
    }
    if (!IsInRange(int(higth), 5, 20) || !IsInRange(int(width), 5, 20)) {
        std::cerr << "Invalid map size\n";
        exit(1);
    }
    std::shared_ptr<Player> p(new Player);
    std::shared_ptr<Map> m(new Map(higth, width, p));
    std::string s;
    MoveManager mm(p, m);
    while(true) {
        m.get()->outputMap();
        std::cout << ":> ";
        std::getline(std::cin, s);
        mm.processInputAndMove(s);
    }
}

