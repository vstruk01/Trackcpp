#include "basicStrings.h"

using namespace CBL;

template<class T>
BasicString<T>::~BasicString() {
    delete [] m_buffer;
};

template<class T>
BasicString<T>::BasicString(const T* str) {
    for (const T* ptr = str; ptr[m_size]; m_size++);
    m_buffer = new T[m_size + 1];
    for (int i = 0; i < m_size; i++)
        m_buffer[i] = str[i];
    m_buffer[m_size] = '\0';
}

template <typename T>
BasicString<T>::BasicString(const T *str, size_t n) {
    for (const T *ptr = str; ptr[m_size]; m_size++);
    if (n > m_size)
        n = m_size;
    m_buffer = new T[n + 1];
    for (int i = 0; i < n; i++)
        m_buffer[i] = str[i];
    m_buffer[n] = '\0';
}

template <typename T>
BasicString<T>::BasicString(size_t n, T c) {
    m_size = n;
    m_buffer = new T[n + 1];
    for (int i = 0; i < n; i++)
        m_buffer[i] = c;
    m_buffer[n] = '\0';
};

template <typename T>
BasicString<T>::BasicString(const BasicString<T> &str)
    : BasicString(str.begin(), str.end()){};

template <typename T>
BasicString<T>::BasicString(iterator first, iterator last){
    m_size = last - first;
    m_buffer = new T[m_size + 1];
    for (int i = 0; i < m_size; i++, first++)
        m_buffer[i] = *first;
    m_buffer[m_size] = '\0';
}

template <typename T>
BasicString<T>::BasicString(const BasicString<T> &str, size_t pos, size_t len) {
    if (len == -1ul) {
        m_size = str.length() - pos;
    } else {
        m_size = len - pos;
    }
    m_buffer = new T[m_size + 1];
    for (int i = 0; i < m_size; i++, pos++)
        m_buffer[i] = str[pos];
    m_buffer[m_size] = '\0';
}

// constructos String
String::String() : BasicString() {};
String::String(const BasicString &str) : BasicString(str) {};
String::String(const BasicString &str, size_t pos, size_t len)
    : BasicString(str, pos, len) {};
String::String(const char *str, size_t n) : BasicString(str, n) {};
String::String(size_t n, char c) : BasicString(n, c) {};
String::String(const char *str) : BasicString(str) {};

WString::WString() : BasicString(){};
WString::WString(const BasicString &str) : BasicString(str){};
WString::WString(const BasicString &str, size_t pos, size_t len)
    : BasicString(str, pos, len){};
WString::WString(const wchar_t *str, size_t n) : BasicString(str, n) {};
WString::WString(size_t n, char c) : BasicString(n, c) {};
WString::WString(const wchar_t *str) : BasicString(str) {};



int String::compare(const BasicString<char> &str) const {
    std::cout << "compare string basic string \n";
    return 10;
}

int String::compare(const char *str) const {
    std::cout << "compare string char string\n";
    return 10;
}

int WString::compare(const BasicString<wchar_t> &str) const {
    std::cout << "compare wstring basic string\n";
    return 10;
}

int WString::compare(const char *str) const {
    std::cout << "compare wstring char string\n";
    return 10;
}


// iterators

template <class T>
typename BasicString<T>::iterator BasicString<T>::begin() const {
    return m_buffer;
}

template <class T>
typename BasicString<T>::iterator BasicString<T>::end() const {
    return begin() + m_size;
}

template <class T>
size_t BasicString<T>::length() const {
    return m_size;
}

template <typename T>
T &BasicString<T>::operator[](size_t index) const {
    return m_buffer[index];
}

template <typename T>
const T* BasicString<T>::c_str() const {
    return m_buffer;
};

// template <typename T>
// T &BasicString<T>::at(size_t index) const {
//     if (index >= m_size) {
//         throw std::out_of_range("hahaha index is bigger than size of string :)");
//     }
//     return m_buffer + index;
// }

template <typename T>
int BasicString<T>::compare(const BasicString<T> &str) const {
    return 1;
};

template <typename T>
int BasicString<T>::compare(const T *str) const {
    return 1;
};

// template <typename T>
// T &BasicString<T>::back() const {
//     return m_buffer + m_size - 1;
// }

// template <typename T>
// T &BasicString<T>::front() const {
//     return m_buffer;
// }

