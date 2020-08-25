#pragma once

#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> validator(int &shout, double &health, int &frost, char **argv, int argc);
std::vector<std::string> split(std::string str, char delimiter);

class Draugr {
    public:
        Draugr();
        Draugr(int frost);
        Draugr(double health, int frost = 50);
        Draugr(Draugr& other);
        Draugr(Draugr&& other);

        void setName(const std::string &&name);
        void shoutPhrase(int shoutNumber) const;
    private:
        double m_health;
        const int m_frostResist;
        std::string m_name;
};
