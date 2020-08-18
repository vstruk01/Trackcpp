#pragma once

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

class inventory {
    public:
        inventory();
        void help();
        void remove();
        void insert();
        void show();
        void invalid(std::string s);
        bool check_andline();
    private:
        std::vector<char> invents;
        std::array<char, 12> invent;
        int countInvent;
};
