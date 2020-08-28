#include "Player.h"
#include "Map.h"
#include "MoveManager.h"

int main() {
    std::cout << "Hello World\n";

    std::shared_ptr<Player> p(new Player);

    size_t higth = 60;
    size_t width = 30;
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

