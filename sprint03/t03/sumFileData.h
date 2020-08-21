#pragma once

#include <numeric>
#include <iostream>
#include <iterator>
#include <fstream>

template<class T>
    T sumFileData(const std::string &fileName) {
        std::ifstream file(fileName);
        return std::accumulate(std::istream_iterator<T>(file), std::istream_iterator<T>(), T(0));
    }