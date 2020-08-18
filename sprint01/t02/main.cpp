#include "visitAll.h"

static void printRoad(std::deque<Town>& que) {
    for (auto i : que) {
        std::cout << i.n << ". " << i.name << std::endl;
    }
}

int main(int argc, char **argv) {
    std::deque<Town> que;
    std::vector<Town> towns;
    std::deque<Town> best;
    int bestS = -1;
    int s;

    if (argc < 2) {
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]\n";
        return 1;
    }
    parser(towns, argc, argv);
    for (int i = 0; i < argc - 1; i++) {
        s = frontRoad(que, towns, i, argc);
        if (i == 0) {
            que.push_back(towns[argc - 2]);
        } else {
            que.push_back(towns[i - 1]);
        }
        if (que.size() == argc - 1 && s > bestS) {
            bestS = s;
            best = que;
        }
        que.resize(0);
        s = backRoad(que, towns, i, argc);
        if (i == argc - 2) {
            que.push_back(towns[0]);
        } else {
            que.push_back(towns[i + 1]);
        }
        if (que.size() == argc - 1 && s > bestS) {
            bestS = s;
            best = que;
        }
        que.resize(0);
    }
    if (best.size() != 0) {
        printRoad(best);
    } else {
        std::cerr << "Mission: Impossible\n";
    }
}