#pragma once

#include <iostream>

template <class BidirectionalIterator>
    bool isPalindrome(BidirectionalIterator begin, BidirectionalIterator end) {
        for (--end; begin < end; ++begin, --end) {
            if (*begin != *end) {
                return false;
            }
        }
        return true;
    }