#pragma once

#include <iostream>
#include <type_traits>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <cxxabi.h>

namespace UniversalReferenceDeterminant {
    template <typename T>
        void determineReference(T && obj) {
            std::cout << std::boolalpha;

            std::cout << abi::__cxa_demangle(typeid(obj).name(), 0, 0, nullptr) << " is ";
            if (std::is_rvalue_reference<T&&>::value) {
                std::cout << "r-value";
            } else {
                std::cout << "l-value";
            }
            std::cout << " reference\n";
        };
}

