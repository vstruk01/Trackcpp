#include "stdAlgoV1.h"

int main(int argc, char **argv) {
    std::forward_list<std::string> names;
    int len = 0;

    validator(argc, argv, names);
    len = std::count_if(names.begin(), names.end(), [](std::string name){return true;});
    if (len == 0) {
        std::cerr << "error\n";
        exit(1);
    }
    std::cout << "size: " << len << '\n';
    std::cout << "contains 'rich' : ";
    printTrueFalse(std::any_of(names.begin(), names.end(), ifContainRich));
    std::cout << "\nnone of lengths is 15: ";
    printTrueFalse(std::any_of(names.begin(), names.end(), ifBidLen));
    std::cout << "\nall end with 'vel' : ";
    printTrueFalse(all_of(names.begin(), names.end(), ifContainVelEnd));
    std::cout << "\nnot contains 'mel' : " << std::count_if(names.begin(), names.end(), ifContainMel) << '\n';
}