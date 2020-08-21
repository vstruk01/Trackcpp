#pragma once

#include <iterator>
#include <iostream>

template<class RandomAccessIterator>
    RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end) {
        for (RandomAccessIterator i = begin; i != end; i++) {
            for (RandomAccessIterator j = end - 2; j >= i; j--) {
                if (*j > *(j + 1)) {
                    auto tmp = *j;
                    *j = *(j + 1);
                    *(j + 1) = tmp;
                }
            }
        }
        return begin;
    }