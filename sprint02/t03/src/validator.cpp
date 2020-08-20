#include "tesL.h"

void validator(int argc, char **argv, std::multimap<std::string, std::string>& tesbooks) {
    std::ifstream file(argv[1]);

    if (argc != 2){
        std::cerr << "usage: ./tesLibrary [file_name]\n";
        exit(1);
    }
    std::string s, contName, contBook;
    std::regex forLine{R"(^\s*".+"\s*:\s*".+"\s*$)"};
    std::regex forName{R"(".+")"};
    std::vector<std::string> AuthorAndBook;
    for (int i = 0; std::getline(file, s); i++) {
        if (std::regex_match(s, forLine)) {
            AuthorAndBook = split(s, ':');
            std::smatch result;
            std::regex_search(AuthorAndBook[0], result, forName);
            contName = result[0];
            contName = std::string(contName.begin() + 1, contName.end() - 1);
            std::regex_search(AuthorAndBook[1], result, forName);
            contBook = result[0];
            contBook = std::string(contBook.begin() + 1, contBook.end() - 1);
            tesbooks.insert(std::pair(contName, contBook));
        } else {
            std::cerr << "Line " << i + 1 << " is invalid\n";
            exit(1);
        }
    }
    if (errno || tesbooks.size() == 0) {
        std::cerr << "error\n";
        exit(1);
    }
}