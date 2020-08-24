#pragma once

#include <map>
#include <iostream>
#include <string>

void validator(int& shout, int& health, int& frost, char **argv, int argc);

class Draugr {
    public:
        Draugr();
        Draugr(int frost);
        Draugr(double health, int frost);

        void shoutPhrase(int shoutNumber) const;
    private:
        double m_health;
        const int m_frostResist;
};