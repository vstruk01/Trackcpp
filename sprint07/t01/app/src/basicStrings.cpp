#include "basicStrings.h"

using namespace CBL;

template<class T>
BasicString<T>::BasicString(const T* str) {
    for (const T* ptr = str; ptr[m_size]; m_size++);
    m_buffer = new T[m_size];
    for (int i = 0; i < m_size; i++)
        m_buffer[i] = str[i];
}

template <typename T>
BasicString<T>::BasicString(const T *str, size_t n) {
    for (const T *ptr = str; ptr[m_size]; m_size++);
    if (n > m_size)
        n = m_size;
    m_buffer = new T[n];
    for (int i = 0; i < n; i++)
        m_buffer[i] = str[i];
}

template <typename T>
BasicString<T>::BasicString(const BasicString<T> &str)
    : BasicString(str.begin(), str.end()){};

template <typename T>
BasicString<T>::BasicString(iterator first, iterator last){
    m_size = last - first;
    m_buffer = new T[m_size];
    for (int i = 0; i < m_size; i++, first++)
        m_buffer[i] = *first;
}

template <typename T>
BasicString<T>::BasicString(const BasicString<T> &str, size_t pos, size_t len) {
    if (len == -1ul) {
        m_size = str.m_size() - pos;
    } else {
        m_size = len - pos;
    }
    m_buffer = new T[m_size];
    for (int i = 0; i < m_size; i++)
        m_buffer[i] = str[i];
}

// constructos String
String::String() : BasicString() {};
String::String(const BasicString &str) : BasicString(str) {};
String::String(const BasicString &str, size_t pos, size_t len)
    : BasicString(str, pos, len) {};
String::String(const char *str, size_t n) : BasicString(str, n) {};
String::String(size_t n, char c) : BasicString(n, c) {};
String::String(const char *str) : BasicString(str) {};

// WString::WString() : BasicString(){};
// WString::WString(const BasicString &str) : BasicString(str){};
// WString::WString(const BasicString &str, size_t pos, size_t len)
//     : BasicString(str, pos, len){};
// WString::WString(const char *str, size_t n) : BasicString(str, n) {};
// WString::WString(size_t n, char c) : BasicString(n, c) {};
// WString::WString(const char *str) : BasicString(str) {};



int String::compare(const BasicString<char> &str) const {
    std::cout << "compare string basic string \n";
    return 10;
};

int String::compare(const char *str) const {
    std::cout << "compare string char string\n";
    return 10;
};

// int WString::compare(const BasicString<wchar_t> &str) const {
//     std::cout << "compare wstring basic string\n";
//     return 10;
// };

// int WString::compare(const char *str) const {
//     std::cout << "compare wstring char string\n";
//     return 10;
// };
