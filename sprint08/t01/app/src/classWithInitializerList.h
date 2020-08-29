#pragma once

#include <vector>
#include <iostream>

template <typename T>
class ClassWithInitializerList final {
public:
    template <typename... Args>
    ClassWithInitializerList(Args && ... args) : m_vecOfArs({args...}){};
    ClassWithInitializerList(const std::initializer_list<T> lst) : m_vecOfArs(lst){};
    ClassWithInitializerList(const std::vector<T> & vec) : m_vecOfArs(vec) {};

    void outputVector() const {
        for (T it : m_vecOfArs)
            std::cout << it << std::endl;
    };
private:
    std::vector<T> m_vecOfArs;
};
