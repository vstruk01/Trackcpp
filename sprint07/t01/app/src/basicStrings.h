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

            BasicString(){};                                                       // ? done
            BasicString(const BasicString<T> &str);                                // ? done
            BasicString(const BasicString<T> &str, size_t pos, size_t len = npos); // ? done

            explicit BasicString(const T *str); // ? done

            BasicString(const T *str, size_t n); // ? done

            BasicString(size_t n, T c);                 // ? done
            BasicString(iterator first, iterator last); // ? done
            virtual ~BasicString(); // ? done

            // iterators
            iterator begin() const; // ? done
            iterator end() const; // ? done

            // capacity
            size_t length() const; // ? done

            // element access
            T &operator[](size_t index) const;  // ? done
            T &at(size_t index) const;          // ? done
            T &back() const;                    // ? done
            T &front() const;                   // ? done

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
            const T *c_str() const; // ? done

            virtual int compare(const BasicString<T> &str) const; // ? done
            virtual int compare(const T *str) const; // ? done

        protected:
            size_t m_size{0};
            T *m_buffer{nullptr};
    };

    class String : public BasicString<char> {
    public:
        String();
        String(const BasicString &str);
        String(const BasicString &str, size_t pos, size_t len = npos);
        explicit String(const char *str);
        String(const char *str, size_t n);
        String(size_t n, char c);

        int compare(const BasicString<char> &str) const;
        int compare(const char *str) const;
    };
    class WString : public BasicString<wchar_t> {
    public:
        WString();
        WString(const BasicString &str);
        WString(const BasicString &str, size_t pos, size_t len = npos);
        explicit WString(const wchar_t *str);
        WString(const wchar_t *str, size_t n);
        WString(size_t n, char c);

        int compare(const BasicString<wchar_t> &str) const;
        int compare(const char *str) const;
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