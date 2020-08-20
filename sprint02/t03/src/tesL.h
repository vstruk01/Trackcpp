#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <regex>
#include <functional>

void validator(int argc, char **argv, std::multimap<std::string, std::string> &tesbooks);
void printTesBooks(std::multimap<std::string, std::string> &tesbooks);
std::vector<std::string> split(std::string str, char delimiter);
