#pragma once

#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <fstream>

std::vector<std::string> split(std::string str, char delimiter);
void addBook(std::map<std::string, std::string> &books,
             std::vector<std::string> command);
void deleteBook(std::map<std::string, std::string> &books,
                std::vector<std::string> command);
void readBook(std::map<std::string, std::string> &books,
                std::vector<std::string> command);
void listBook(std::map<std::string, std::string> &books,
                std::vector<std::string> command);

