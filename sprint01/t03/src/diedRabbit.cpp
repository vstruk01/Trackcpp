#include "vampireRabbits.h"

void diedRabbit(std::map<int, int> &c_rbb, std::list<Rabbit>& l_rbb) {
    for (auto &iter : l_rbb) {
        if ((iter.age == 4 && iter.isVampire == false)
            || (iter.age == 9 && iter.isVampire == true)) {
            if (iter.isVampire == true) {
                c_rbb[2]--;
            } else {
                if (iter.gender == Gender::Male) {
                    c_rbb[0]--;
                } else {
                    c_rbb[1]--;
                }
            }
        }
    }
}

