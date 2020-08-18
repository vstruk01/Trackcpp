#include "stdAlgoV2.h"

void streamToFile(std::forward_list<std::string>& names) {
    std::ofstream file;

    file.open("names_mod.txt");
    for (std::string& name : names) {
        file << name << '\n';
    }
}
