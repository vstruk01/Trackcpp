#include "inventory.h"

void inventory::insert() {
    char s;
    std::cin >> s;
    if (check_andline()) {
        return;
    } else if (find(invents.begin(), invents.end(), s) == invents.end()) {
        invalid("Invalid item.");
    } else if (countInvent > 11) {
        invalid("Inventory is full.");
    } else {
        invent[countInvent] = s;
        countInvent++;
        std::cout << s << " was inserted.\n";
    }
}
