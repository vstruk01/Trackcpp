#pragma once

#include <iostream>
#include <ostream>


namespace CBL {
    template<class T>
    class BasicString {
        public:
            using iterator = T*;
            static const size_t npos = -1ul;
            BasicString() {};
            BasicString(const BasicString<T> &str)
                        : BasicString(str.begin(), str.end()) {};
            BasicString(const BasicString<T> &str, size_t pos, size_t len = npos);

            explicit BasicString(const T* str) {
                for (const T* ptr = str; ptr[m_size]; m_size++);
                m_buffer = new T[m_size];

                for (int i = 0; i < m_size; i++)
                    m_buffer[i] = str[i];
            };

            BasicString(const T *str, size_t n) {
                for (const T *ptr = str; ptr[m_size]; m_size++);
                if (n > m_size)
                    n = m_size;
                m_buffer = new T[n];
                for (int i = 0; i < n; i++)
                    m_buffer[i] = str[i];
            };

            BasicString(size_t n, T c) {
                m_buffer = new T[n];
                for (int i = 0; i < n; i++)
                    m_buffer[i] = c;
            };

            BasicString(iterator first, iterator last) {

            };
            virtual ~BasicString() {
                delete [] m_buffer;
            };

            // iterators
            iterator begin() const;
            iterator end() const;

            // capacity
            size_t length() const {
                return m_size;
            };

            // element access
            T &operator[](size_t index) const;
            T &at(size_t index) const;
            T &back() const;
            T &front() const;

            // modifiers
            BasicString<T> &operator=(const BasicString<T> &str);
            BasicString<T> &operator=(const T *str);
            BasicString<T> &operator=(const T c);
            BasicString<T> &operator+=(const BasicString<T> &str);
            BasicString<T> &operator+=(const T *str);
            BasicString<T> &operator+=(const T c);

            void append(const BasicString<T> &str);
            void append(const T *str);
            void append(const T *str, size_t n);
            void append(size_t n, T c);
            void append(iterator first, iterator last);

            void swap(BasicString<T> &str);

            // string operations

            const T *c_str() const {
                return m_buffer;
            };
            // virtual int compare(const BasicString<T> &str) const;
            // virtual int compare(const T *str) const;

        protected:
            size_t m_size{0};
            T *m_buffer{nullptr};
    };
}

template<class T>
    CBL::BasicString<T> operator+(
        const CBL::BasicString<T> &lhs,
        const CBL::BasicString<T> &rhs
);

template <class T>
    CBL::BasicString<T> operator+(const T *lhs, const CBL::BasicString<T> &rhs);
template <class T>
    CBL::BasicString<T> operator+(const CBL::BasicString<T> &lhs, const T *rhs);
template <class T>
    CBL::BasicString<T> operator+(const T lhs, const CBL::BasicString<T> &rhs);
template <class T>
    CBL::BasicString<T> operator+(const CBL::BasicString<T> &lhs, const T rhs);
template <class T>
    bool operator == (const CBL::BasicString<T> & lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator == (const T * lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator == (const CBL::BasicString<T> & lhs, const T *rhs);
template <class T>
    bool operator != (const CBL::BasicString<T> & lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator != (const T * lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator != (const CBL::BasicString<T> & lhs, const T *rhs);
template <class T>
    bool operator < (const CBL::BasicString<T> & lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator < (const T * lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator < (const CBL::BasicString<T> & lhs, const T *rhs);
template <class T>
    bool operator <= (const CBL::BasicString<T> & lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator <= (const T * lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator <= (const CBL::BasicString<T> & lhs, const T *rhs);
template <class T>
    bool operator > (const CBL::BasicString<T> & lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator > (const T * lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator > (const CBL::BasicString<T> & lhs, const T *rhs);
template <class T>
    bool operator >= (const CBL::BasicString<T> & lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator >= (const T * lhs, const CBL::BasicString<T> &rhs);
template <class T>
    bool operator >= (const CBL::BasicString<T> & lhs, const T *rhs);


// size_t find(const <string class> &str, size_t pos = 0) const;
// size_t find(const<chartype> *str, size_tpos = 0) const;
// size_t find(<char type> c, size_t pos = 0) const;

// size_t rfind(const<string class> &str, size_tpos = 0) const;
// size_t rfind(const<char type> *str, size_tpos = 0) const;
// size_t rfind(<char type> c, size_t pos = 0) const;