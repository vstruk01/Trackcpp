#include "cuWord.h"

void streamToFile(std::multiset<std::string>& words, std::string fileName) {
    std::ofstream file;
    
    if (fileName.find_last_of(".") != std::string::npos) {
        fileName.insert(fileName.find_last_of('.'), "_mod");
    } else {
        fileName += "_mod";
    }
    file.open(fileName);
    for (auto i = words.begin(); i != words.end();) {
        file << *i << ": " << words.count(*i) << '\n';
        i = words.equal_range(*i).second;
    }
    file.close();
}
