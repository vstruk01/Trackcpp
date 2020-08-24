#pragma once

#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class Draugr {
    public:
        Draugr(Draugr &&) = delete;
        void operator=(Draugr &) = delete;
        Draugr();
        Draugr(int frost);
        Draugr(double health, int frost);

        void setName(const std::string &&name);
        void shoutPhrase(int shoutNumber) const;
    private:
        double m_health;
        const int m_frostResist;
        std::string m_name;
};