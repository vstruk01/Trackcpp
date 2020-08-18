#pragma once

#include <iostream>
#include <map>
#include <string>
#include <list>
#include <random>

#include <unistd.h>
#include <time.h>

enum class Gender
{
    Male,
    Female
};

struct Rabbit
{
    Gender gender;
    bool isVampire;
    int age;
};

void randRabbit(int count, std::map<int, int> &c_rbb,
                std::list<Rabbit> &l_rbb);
void setVampire(std::map<int, int> &c_rbb, std::list<Rabbit> &l_rbb);
void diedRabbit(std::map<int, int> &c_rbb, std::list<Rabbit> &l_rbb);
