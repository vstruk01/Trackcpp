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

bool ifShortS(std::string s);
bool ifLongS(std::string s);
bool ifContainCBL(std::string s);
void machining(std::forward_list<std::string> &names);

void streamToFile(std::forward_list<std::string>& names);
