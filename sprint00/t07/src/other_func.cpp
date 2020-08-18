#include "inventory.h"

inventory::inventory() {
    invents = {'w', 'f', 'a', 'p'};
    invent = {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
    countInvent = 0;
}

void inventory::help() {
    std::cout << "1. insert <itemType>\n2. remove <itemType>\n3. "
              << "show inventory\n4. help\n5. exit\n";
}

void inventory::show() {
    std::cout << "Inventory { ";
    for (auto i : invent) {
        std::cout << i << ' ';
    }
    std::cout << "}\n";
}

void inventory::invalid(std::string s) {
    std::cerr << s << std::endl;
}

bool inventory::check_andline() {
    std::string s;
    std::getline(std::cin, s);
    if (s.size() != 0) {
        invalid("Invalid command.");
        return 1;
    }
    return 0;
}
