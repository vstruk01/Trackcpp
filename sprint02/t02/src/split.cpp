#include "bookS.h"

std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> internal;
    std::stringstream ss(str);
    std::string tok;
 
    while(std::getline(ss, tok, delimiter))
        if (!tok.empty())
            internal.push_back(tok);
    return internal;
}
