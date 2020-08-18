#include <iostream>
#include <string>

static void validator(size_t idx, char *error) {
    if (error[idx] != '\0') {
        throw false;
    }
}

int main(int argc, char **argv) {
    char *cont = NULL; // container

    if (argc != 5) {
        std::cerr << "usage:./automaton [name] [level] [health] [stamina]\n";
    } else {
        try {
            size_t idx;
            cont = argv[2];
            auto l = stoi(std::string(argv[2]), &idx);
            validator(idx, argv[2]);
            cont = argv[3];
            auto h = stof(std::string(argv[3]), &idx);
            validator(idx, argv[3]);
            cont = argv[4];
            auto s = stod(std::string(argv[4]), &idx);
            validator(idx, argv[4]);
            std::cout << "Name = " << argv[1] << "\nLevel = " << l
                      << "\nHealth = " << h << "\nStamina = " << s << std::endl;
        }
        catch(...) {
            std::cerr << "Invalid argument: " << cont << std::endl;
            return 1;
        }
    }
}
