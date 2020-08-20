#include "uWord.h"

void streamToFile(std::set<std::string>& words, std::string fileName) {
    std::ofstream file;

    if (fileName.find_last_of(".") != std::string::npos) {
        fileName.insert(fileName.find_last_of('.'), "_mod");
    } else {
        fileName += "_mod";
    }
    file.open(fileName);
    for (std::string word : words)
        file << word << '\n';
    file.close();
}
