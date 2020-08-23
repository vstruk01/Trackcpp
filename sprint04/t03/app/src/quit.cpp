#include "dCalculator.h"

void quit(std::string s) {
    std::regex reg("\\s*quit\\s*");
    if (std::regex_match(s, reg))
        exit(0);
}