#include "tesL.h"

void printTesBooks(std::multimap<std::string, std::string> &tesbooks) {
    std::string cont;
    int count = 1;
    
    for (auto i = tesbooks.begin(); i != tesbooks.end(); ++i) {
        if (i->first == cont) {
            ++count;
            std::cout << ' ' << count << ". " << i->second << "\n";
        } else {
            count = 1;
            std::cout << i->first << ":\n";
            std::cout << ' ' << count << ". " << i->second << "\n";
            cont = i->first;
        }
    }
}