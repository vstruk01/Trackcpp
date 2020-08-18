#include "inventory.h"

void inventory::remove() {
    char s;
    std::cin >> s;
    if (check_andline()) {
        return;
    } else if (std::find(invents.begin(), invents.end(), s) == invents.end()
               || std::find(invent.begin(), invent.end(), s) == invent.end()) {
       invalid("Invalid item.");
    } else {
        for (int i = 0; i < 12; i++) {
            if (invent[i] == s) {
                invent[i] = '-';
                for (int j = i + 1, n = i; j < 11; j++, n++)
                    invent[n] = invent[j];
                invent[11] = '-';
                countInvent--;
                i--;
            }
        }
        std::cout << s << " was removed.\n";
    }
}
