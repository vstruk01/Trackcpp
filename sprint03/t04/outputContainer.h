#pragma once

#include <numeric>
#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>

template <typename Container>
    void outputContainer(const Container &container) {
        std::copy(container.begin(), container.end(), std::ostream_iterator<typename Container::value_type>(std::cout, "\n"));
    }