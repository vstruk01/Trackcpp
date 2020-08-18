#include "visitAll.h"

static void printRoad(std::deque<Town>& que) {
    for (auto i : que) {
        std::cout << i.n << ". " << i.name << std::endl;
    }
}

int main(int argc, char **argv) {
    std::deque<Town> que;
    std::vector<Town> towns;

    parser(towns, argc, argv);
    for (int i = 0; i < argc - 1; i++) {
        frontRoad(que, towns, i, argc);
        if (que.size() == argc - 1) {
            printRoad(que);
            return 0;
        }
        backRoad(que, towns, i, argc);
        if (que.size() == argc - 1) {
            printRoad(que);
            return 0;
        }
    }
    std::cerr << "Mission: Impossible\n";
}