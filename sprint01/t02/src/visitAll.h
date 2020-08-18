#pragma once

#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <array>
#include <sstream>

struct Town {
    std::string name;
    int stamina;
    int distance;
    int n;
};

std::vector<std::string> split(std::string str, char delimiter);
void parser(std::vector<Town> &towns, int argc, char **argv);
void frontRoad(std::deque<Town> &que, const std::vector<Town> &towns,
               int i, int argc);
void backRoad(std::deque<Town> &que, const std::vector<Town> &towns,
               int i, int argc);

