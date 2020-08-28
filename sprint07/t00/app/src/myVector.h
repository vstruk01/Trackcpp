#pragma once

#include <cstddef>
#include <initializer_list>
#include <iostream>
#include <string>
#include <algorithm>
#include <memory>
#include <cassert>

namespace CBL {
    template <class T>
        class Vector {
        public:
            using iterator = T*;
            Vector() : Vector(size_t(4)) {};

            explicit Vector(size_t size) {
                size += 4 - size % 4;
                m_buffer = new T[size];
                m_size = 0;
                m_capacity = size;
            };

            Vector(size_t size, const T & value) : Vector(size) {
                for (int i = 0; i < size; i++)
                    m_buffer[i] = value;
                m_size = size;
            };

            Vector(iterator first, iterator last) : Vector(last - first) {
                m_size = last - first;
                for (int i = 0; first <= last; i++, first++)
                    m_buffer[i] = *first;
            };

            Vector(const std::initializer_list<T> & lst) : Vector(iterator(lst.begin()), iterator(lst.end())) {};
            Vector(const Vector<T> & other) : Vector(other.begin(), other.end()){};

            ~Vector() {
                delete [] m_buffer;
            };

            Vector<T> &operator=(const Vector<T> &other) {
                m_buffer = new T[other.end() - other.begin()];
                m_size = other.end() - other.begin();
                m_capacity = other.end() - other.begin();
                for (int i = 0; i < other.end() - other.begin(); i++)
                    m_buffer[i] = other[i];
                return *this;
            };

            bool operator==(const Vector<T> & other) const {
                if (size() != other.size())
                    return false;
                for (int i = 0; i < size(); i++)
                    if ((*this)[i] != other[i])
                        return false;
                return true;
            };

            bool operator != (const Vector<T> & other) const {
                return !(*this == other);
            };

            bool operator < (const Vector<T> & other) const {
                for (int i = 0; i < size() && i < other.size(); i++) {
                    if ((*this)[i] < other[i]) {
                        return true;
                    } else if ((*this)[i] > other[i]) {
                        return false;
                    }
                }
                if (other.size() > size())
                    return true;
                return false;
            };

            bool operator > (const Vector<T> & other) const {
                if (*this != other && !(other < *this)) {
                    return true;
                }
                return false;
            };

            bool operator <= (const Vector<T> & other) const {
                if (other > *this || other == *this) {
                    return true;
                }
                return false;
            };

            bool operator >= (const Vector<T> & other) const {
                if (other < *this || other == *this) {
                    return true;
                }
                return false;
            };

            // iterators
            iterator begin() const {
                return m_buffer;
            };
            iterator end() const {
                return m_buffer + m_size;
            };

            // capacity
            size_t size() const {
                return m_size;
            };
            size_t capacity() const {
                return m_capacity;
            };
            bool isEmpty() const {
                return m_size == 0;
            };

            void resize(size_t size, const T& value = T()) {
                if (size > m_capacity) {
                    for (; size > m_capacity; m_capacity *= 2);
                    T* tmp_buf = new T[m_capacity];
                    for (int i = 0; i != m_size; i++)
                        tmp_buf[i] = m_buffer[i];
                    for (; m_size < size; m_size++)
                        tmp_buf[m_size] = value;
                    delete [] m_buffer;
                    m_buffer = tmp_buf;
                } else if (size > m_size) {
                    for (; m_size < size; m_size++) {
                        m_buffer[m_size] = value;
                    }
                }
            };
            void reserve(size_t size) {
                if (size > m_capacity) {
                    m_capacity = size;
                    T* tmp_buf = new T[m_capacity];
                    for (int i = 0; i != m_size; i++)
                        tmp_buf[i](std::move(m_buffer[i]));
                    delete [] m_buffer;
                    m_buffer = tmp_buf;
                }
            };

            // element access
            T& operator[](size_t index) const {
                if (index >= m_size)
                    throw std::out_of_range("hah you're loser try again");
                return m_buffer[index];
            };
            T& at(size_t index) const {
                if (index >= m_size)
                    throw std::out_of_range("hah you're loser, try again");
                return m_buffer[index];
            };
            T* data() const {
                return m_buffer;
            };

            // modifiers
            void push_back(const T& value) {
                if (m_size == m_capacity) {
                    m_capacity *= 2;
                    T* tmp_buf = new T[m_capacity];
                    for (int i = 0; i != m_size; i++)
                        tmp_buf[i] = m_buffer[i];
                    delete [] m_buffer;
                    m_buffer = tmp_buf;
                }
                m_buffer[m_size] = value;
                m_size++;
                // resize(m_size + 1, value);
            };

            void pop_back() {
                if (m_size) {
                    m_size--;
                }
            };

            iterator insert(iterator pos, const T& value) {
                int i = pos - begin();
                if (i > m_size) {
                    resize(i + 1);
                } else {
                    push_back(0);
                }
                for (int j = m_size - 1; j != i - 1; j--)
                    m_buffer[j + 1] = m_buffer[j];
                m_buffer[i] = value;
                return begin() + i;
            };

            iterator erase(iterator pos) {
                int idx = pos - begin();
                for (int i = idx; i < m_size - 1; i++)
                    m_buffer[i] = m_buffer[i + 1];
                m_size--;
                return begin() + idx;
            };

            iterator erase(iterator first, iterator last) {
                int idx = first - begin();
                for (int i = idx; i < m_size - (last - first); i++)
                    m_buffer[i] = m_buffer[i + (last - first)];
                m_size -= last - first;
                return begin() + idx;
            };

            void clear() {
                m_size = 0;
            };

        private:
            size_t m_size{0};
            size_t m_capacity{0};
            T* m_buffer{nullptr};
        };
}
