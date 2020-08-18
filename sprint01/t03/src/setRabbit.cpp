#include "vampireRabbits.h"

void setVampire(std::map<int, int>& c_rbb, std::list<Rabbit>& l_rbb) {
    int count = c_rbb[2];

    for (auto& iter : l_rbb) {
        if (count == 0)
            break;
        if (iter.isVampire == false && iter.age < 4) {
            count--;
            iter.isVampire = true;
            c_rbb[2]++;
            if (iter.gender == Gender::Male) {
                c_rbb[0]--;
            } else {
                c_rbb[1]--;
            }
        }
    }
}

