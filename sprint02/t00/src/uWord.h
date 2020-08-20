#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <regex>

void validator(int argc, char **argv, std::set<std::string> &names);
std::vector<std::string> split(std::string str, char delimiter);
void streamToFile(std::set<std::string> &names, std::string fileName);
