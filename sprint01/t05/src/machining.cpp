#include "stdAlgoV2.h"

bool ifContainCBL(std::string s) {
    if (s.find("c") != std::string::npos
        || s.find("b") != std::string::npos
        || s.find("l") != std::string::npos) {
            return true;
        }
    return false;
}

bool ifShortS(std::string s) {
    if (s.size() < 5)
        return true;
    return false;
}

bool ifLongS(std::string s) {
    if (s.size() > 12)
        return true;
    return false;
}

void machining(std::forward_list<std::string>& names) {
    auto del = std::remove_if(names.begin(), names.end(), ifContainCBL);
    auto prev = names.before_begin();

    for (auto it = names.begin(); it != del; it++)
        prev = it;
    names.erase_after(prev, names.end());
    std::replace_if(names.begin(), names.end(), ifShortS, "Short one");
    std::replace_if(names.begin(), names.end(), ifLongS, "Long one");

    streamToFile(names);
}