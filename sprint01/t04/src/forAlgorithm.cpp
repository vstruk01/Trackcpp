#include "stdAlgoV1.h"

bool ifContainRich(std::string s) {
    if (s.find("rich") != std::string::npos)
        return true;
    return false;
}

bool ifBidLen(std::string s) {
    if (s.size() < 15)
        return false;
    return true;
}

bool ifContainVelEnd(std::string s) {
    if (s.find("vel", (s.size() - 3)) != std::string::npos)
        return true;
    return false;
}

bool ifContainMel(std::string s) {
    if (s.find("mel") != std::string::npos)
        return true;
    return false;
}

void printTrueFalse(bool b) {
    if (b) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }
}