#include "stdAlgoV1.h"

void validator(int argc, char **argv, std::forward_list<std::string>& names) {
    std::ifstream file;

    if (argc != 2){
        std::cerr << "usage :./ stdAlgoV1[file_name]\n";
        exit(1);
    }
    file.open(argv[1]);
    std::string s;
    std::vector<std::string> ss;
    while (std::getline(file, s)) {
        ss = split(s, ' ');
        if (ss.size() > 1) {
            std::cerr << "error\n";
            exit(1);
        }
        else if (ss.size() == 1) {
            names.push_front(ss[0]);
        }
    }
    if (errno) {
        std::cerr << "error\n";
        exit(1);
    }
}
