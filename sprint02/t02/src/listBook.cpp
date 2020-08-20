#include "bookS.h"

void listBook(std::map<std::string, std::string>& books,
              std::vector<std::string> command) {
    if (command.size() != 1) {
        std::cerr << "invalid command\n";
        return;
    }
    if (!books.empty()) {
        for (auto &i : books)
            std::cout << i.first << '\n';
    }
}

