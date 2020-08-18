#include "vampireRabbits.h"

void randRabbit(int count, std::map<int, int>& c_rbb,
                std::list<Rabbit>& l_rbb) {
    Rabbit tmp;

    srand(time(0));
    for (int i = 0; i < count; i++) {
        tmp.isVampire = false;
        if (rand() % 100 == 1) {
            tmp.isVampire = true;
            c_rbb[2]++;
        } else {
            if (rand() % 2 == 1) {
                tmp.gender = Gender::Male;
                c_rbb[0]++;
            } else {
                tmp.gender = Gender::Female;
                c_rbb[1]++;
            }
        }
        tmp.age = 0;
        l_rbb.push_back(tmp);
    }
}
