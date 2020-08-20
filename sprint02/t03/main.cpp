#include "tesL.h"

int main(int argc, char **argv) {
    std::multimap<std::string, std::string> tesbooks;

    validator(argc, argv, tesbooks);
    printTesBooks(tesbooks);
}