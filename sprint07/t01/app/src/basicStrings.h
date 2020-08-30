#pragma once

#include <iostream>
#include <ostream>
#include <string>


namespace CBL {
    template<class T>
    class BasicString {
        public:
            using iterator = T*;
            static const size_t npos = -1ul;

            BasicString() {};
            BasicString(const BasicString<T> &str);
            BasicString(const BasicString<T> &str, size_t pos, size_t len = npos);

            explicit BasicString(const T* str);

            BasicString(const T *str, size_t n);

            BasicString(size_t n, T c) {
                m_buffer = new T[n];
                for (int i = 0; i < n; i++)
                    m_buffer[i] = c;
            };

            BasicString(iterator first, iterator last);
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
            virtual int compare(const BasicString<T> &str) const {
                return 1;
            };
            virtual int compare(const T *str) const {
                return 1;
            };

        protected:
            size_t m_size{0};
            T *m_buffer{nullptr};
    };
    class String : public BasicString<char> {
    public:
        static const size_t npos = -1ul;
        String();
        String(const BasicString &str);
        String(const BasicString &str, size_t pos, size_t len = npos);
        explicit String(const char *str);
        String(const char *str, size_t n);
        String(size_t n, char c);

        int compare(const BasicString<char> &str) const;
        int compare(const char *str) const;
    };
    // class WString : public BasicString<wchar_t> {
    // public:
    //     WString();
    //     WString(const BasicString &str);
    //     WString(const BasicString &str, size_t pos, size_t len = npos);
    //     explicit WString(const char *str);
    //     WString(const char *str, size_t n);
    //     WString(size_t n, char c);

    //     int compare(const BasicString<wchar_t> &str) const;
    //     int compare(const char *str) const;
    // };
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