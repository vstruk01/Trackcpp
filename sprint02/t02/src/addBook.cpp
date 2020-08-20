#include "bookS.h"

void addBook(std::map<std::string, std::string> &books,
             std::vector<std::string> command) {
    if (command.size() != 2) {
        std::cerr << "invalid command\n";
        return;
    }

    std::string buf;
    std::ifstream file("./Library/" + command[1]);
    if (books.find(command[1]) != books.end()) {
        books.erase(command[1]);
    }
    while (std::getline(file, buf))
        books[command[1]] += buf + '\n';
    if (errno) {
        books.erase(command[1]);
        std::cerr << "invalid book\n";
        errno = 0;
    } else {
        books[command[1]];
        std::cout << command[1] << " added\n";
    }
}

