#include "lib_draugr.h"




Draugr::Draugr() : m_frostResist(50), m_health(100) {}
Draugr::Draugr(double health, int frost) : m_frostResist(frost), m_health(health) {}
Draugr::Draugr(int frost) : m_frostResist(frost), m_health(100) {}

void Draugr::shoutPhrase(int shoutNumber) const {
    std::map<int, std::string> sN{
        {0, "Qiilaan Us Dilon!"},
        {1, "Bolog Aaz, Mal Lir!"},
        {2, "Kren Sosaal!"},
        {3, "Dir Volaan!"},
        {4, "Aar Vin Ok!"},
        {5, "Unslaad Krosis!"},
        {6, "Faaz! Paak! Dinok!"},
        {7, "Aav Dilon!"},
        {8, "Sovngarde Saraan!"}};
    try {
        std::string s = sN.at(shoutNumber);
        std::cout << "Draugr with " << m_health << " health and "
                  << m_frostResist << "\% frost resist was born!\n";
        std::cout << "Draugr (" << m_health <<  " health, "
                  << m_frostResist << "\% frost resist) shouts:\n";
        std::cout << s << '\n';
    }
    catch (...) {
        std::cerr << "Invalid shoutNumber\n";
        exit(1);
    }
}

void validator(int& shout, int& health, int& frost, char **argv, int argc) {
    try {
        size_t idx = 0;
        shout = stoi(std::string(argv[1]), &idx);
        if (idx != std::string(argv[1]).size())
            throw false;
        if (argc > 2) {
            health = stoi(std::string(argv[2]), &idx);
            if (idx != std::string(argv[2]).size())
                throw false;
            if (argc == 4) {
                frost = stoi(std::string(argv[3]), &idx);
                if (idx != std::string(argv[3]).size())
                    throw false;
            }
        }
    }
    catch (...) {
        std::cerr << "Error\n";
        exit(1);
    }
}