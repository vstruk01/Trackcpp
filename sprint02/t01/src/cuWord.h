#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <regex>


void validator(int argc, char **argv, std::multiset<std::string> &names);
std::vector<std::string> split(std::string str, char delimiter);
void streamToFile(std::multiset<std::string> &names, std::string s);
