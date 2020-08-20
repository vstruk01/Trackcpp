#include "stdAlgoV2.h"

void streamToFile(std::forward_list<std::string>& names, char *name_file) {
    std::ofstream file;
    std::string fileName = std::string(name_file);

    if (fileName.find_last_of(".") != std::string::npos) {
        fileName.insert(fileName.find_last_of('.'), "_mod");
    } else {
        fileName += "_mod";
    }
    file.open(fileName);
    for (std::string& name : names) {
        file << name << '\n';
    }
}
