#include "lib_draugr.h"

Draugr::Draugr() : m_frostResist(50), m_health(100) {
    std::cout << "Draugr with " << m_health << " health and "
              << m_frostResist << "\% frost resist was born!\n";
}
Draugr::Draugr(double health, int frost) : m_frostResist(frost), m_health(health) {
    std::cout << "Draugr with " << m_health << " health and "
              << m_frostResist << "\% frost resist was born!\n";
}
Draugr::Draugr(int frost) : m_frostResist(frost), m_health(100) {
    std::cout << "Draugr with " << m_health << " health and "
              << m_frostResist << "\% frost resist was born!\n";
}

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
        std::cout << "Draugr " << m_name << " (" << m_health << " health, "
                  << m_frostResist << "\% frost resist) shouts:\n"
                  << sN.at(shoutNumber) << '\n';
}

void Draugr::setName(const std::string &&name) {
    m_name = name;
}
