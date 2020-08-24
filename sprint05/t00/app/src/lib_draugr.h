#pragma once

#include <map>
#include <iostream>
#include <string>

class Draugr {
    public:
        Draugr();
        void shoutPhrase(int shoutNumber) const;
    private:
        double m_health;
        const int m_frostResist;
};