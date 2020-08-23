#pragma once

#include <iostream>
#include <string>
#include <map>
#include <regex>

void printResult(int arg1, int arg2,
                 std::map<std::string, long long> &operands, std::smatch sm);
void calculator(std::map<std::string, long long> &operands);
bool getArg(std::map<std::string, long long> &operands, long long &arg,
            std::string sarg);
void quit(std::string s);
