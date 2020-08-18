#include "vampireRabbits.h"

void oldRabbit(std::list<Rabbit>& l_rbb) {
    for (auto &iter : l_rbb) {
        iter.age++;
    }
}

int main() {
    std::map<int, int> c_rbb;
    std::list<Rabbit> l_rbb;
    int sum = 10;

    randRabbit(sum, c_rbb, l_rbb);
    for (; sum < 1000;) {
        std::cout << "Males: " << c_rbb[0] << std::endl;
        std::cout << "Females: " << c_rbb[1] << std::endl;
        std::cout << "Vampires: " << c_rbb[2] << "\n";
        sleep(1);
        diedRabbit(c_rbb, l_rbb);
        if (c_rbb[0] >= c_rbb[1]) {
            randRabbit(c_rbb[1], c_rbb, l_rbb);
        } else {
            randRabbit(c_rbb[0], c_rbb, l_rbb);
        }
        setVampire(c_rbb, l_rbb);
        if (c_rbb[1] <= 0 || c_rbb[1] <= 0)
            break;
        sum = c_rbb[0] + c_rbb[1] + c_rbb[2];
        if (sum < 1000) {
            std::cout << '\n';
            oldRabbit(l_rbb);
        }
    }
}