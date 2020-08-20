#include "uWord.h"

void validator(int argc, char **argv, std::set<std::string>& names) {
    std::ifstream file(argv[1]);

    if (argc != 2){
        std::cerr << "usage: ./uniqueWords [file_name]\n";
        exit(1);
    }
    std::string s;
    std::smatch result;
    while (std::getline(file, s)) {
        std::regex reg{"[A-Za-z0-9'-]+"};
        while (std::regex_search(s, result, reg)){
            names.insert(result[0]);
            s = result.suffix();
        }
    }
    if (errno || names.size() == 0) {
        std::cerr << "error\n";
        exit(1);
    }
}
