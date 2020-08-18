#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <forward_list>
#include <sstream>
#include <vector>

std::vector<std::string> split(std::string str, char delimiter);
void validator(int argc, char **argv, std::forward_list<std::string> &names);
bool ifContainRich(std::string s);
bool ifBidLen(std::string s);
bool ifContainVelEnd(std::string s);
bool ifContainMel(std::string s);
void printTrueFalse(bool b);

