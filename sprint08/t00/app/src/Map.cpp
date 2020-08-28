#include "Map.h"
#include "Player.h"
#include "MoveManager.h"
#include <random>

Map::Map(size_t width, size_t height, std::shared_ptr<Player> &player)
         : m_height(height), m_width(width), m_map(new char[m_width * m_height]) {
    generateMap();
}

void Map::generateMap() {
    std::random_device rd;
    std::mt19937_64 mersenne(rd());

    for (int i = 0; i < m_height * m_width; i++) {
        int r = mersenne() % 8;
        if (r == 0) {
            m_map[i] = 'T';
        } else if (r == 1) {
            m_map[i] = '@';
        } else {
            m_map[i] = '.';
        }
    }
    std::cout << '\n';
};

void Map::outputMap() const {
    for (int i = 0; i < m_height; i++) {
        for (int j = 0; j < m_width; j++) {
            std::cout << m_map[(m_height * i) + j];
            if (j + 1 < m_width) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}

size_t Map::width() const {
    return m_width;
};

size_t Map::height() const {
    return m_height;
};