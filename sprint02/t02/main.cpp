#include "bookS.h"

int main() {
    std::string tmp;
    std::vector<std::string> command;
    std::map<std::string, std::string> books;

    while (true) {
        std::cout << "enter command:> ";
        std::getline(std::cin, tmp);
        command = split(tmp, ' ');
        if (command[0] == "add") {
            addBook(books, command);
        } else if (command[0] == "delete") {
            deleteBook(books, command);
        } else if (command[0] == "read") {
            readBook(books, command);
        } else if (command[0] == "list") {
            listBook(books, command);
        } else if (command[0] == "quit") {
            if (command.size() != 1) {
                std::cerr << "invalid command\n";
                continue;
            }
            std::cout << "bye\n";
            return 0;
        } else {
            std::cerr << "invalid command\n";
        }
    }
}