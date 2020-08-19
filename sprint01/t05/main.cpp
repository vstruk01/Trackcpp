#include "stdAlgoV2.h"

int main(int argc, char **argv) {
    std::forward_list<std::string> names;

    validator(argc, argv, names);
    machining(names, argv);
}
