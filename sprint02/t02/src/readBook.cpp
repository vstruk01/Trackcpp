#include "bookS.h"

void readBook(std::map<std::string, std::string> &books,
              std::vector<std::string> command) {
    if (command.size() != 2) {
        std::cerr << "invalid command\n";
        return;
    }
    if (books.find(command[1]) == books.end()) {
        std::cerr << "invalid book\n";
    } else {
        std::cout << books[command[1]];
    }
}

