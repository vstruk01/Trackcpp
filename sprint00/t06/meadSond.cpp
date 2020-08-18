#include "meadSond.h"

void meadException(int i) {
    if (i == -1)
        i = 99;
    if (i == 1) {
        std::cout << "1 bottle";
    } else if (i == 0) {
        std::cout << "No more bottles";
    } else {
        std::cout << i << " bottles";
    }
    std::cout << " of mead";
}

void meadSond() {
    for (int i = 99; i >= 0; i--) {
        meadException(i);
        std::cout << " on the wall, ";
        meadException(i);
        std::cout << ".\nTake one down and pass it around, ";
        meadException(i - 1);
        std::cout << " on the wall.\n";
        if (i != 0)
            std::cout << '\n';
    }
}