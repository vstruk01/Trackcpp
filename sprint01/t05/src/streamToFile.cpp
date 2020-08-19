#include "stdAlgoV2.h"

void streamToFile(std::forward_list<std::string>& names, char *name_file) {
    std::ofstream file;
    std::vector<std::string> name_split = split(std::string(name_file), '.');
    std::string r_name_file = name_split[0] + "_mod";

    if (name_split.size() > 1)
        r_name_file += "." + name_split[1];
    file.open(r_name_file);
    for (std::string& name : names) {
        file << name << '\n';
    }
}
