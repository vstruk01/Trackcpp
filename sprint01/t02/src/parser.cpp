#include "visitAll.h"

void parser(std::vector<Town>& towns, int argc, char **argv) {
    Town tmp;

    if (argc < 2) {
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]\n";
        exit(1);
    }
    for (int i = 0; i < argc - 1; i++) {
        std::vector<std::string> ss = split(std::string(argv[i + 1]), ',');
        try {
            if (ss.size() != 3)
                throw false;
            tmp.n = i;
            tmp.name = ss[0];
            size_t idx;
            int s = stoi(ss[1], &idx);
            if (ss[1].size() != idx)
                throw false;
            int d = stoi(ss[2], &idx);
            if (ss[2].size() != idx)
                throw false;
            tmp.stamina = s;
            tmp.distance = d;
        }
        catch(...) {
            std::cout << "Argument " << argv[i + 1] << " is not valid" << std::endl;
            exit(1);
        }
        towns.push_back(tmp);
    }
}
