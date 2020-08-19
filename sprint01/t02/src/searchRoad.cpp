#include "visitAll.h"

void frontRoad(std::deque<Town> &que, const std::vector<Town>& towns,
                 int i, int argc) {
    int stamina = 0;

    for (int j = 0, n = i; j < argc - 1; j++, n++) {
        if (n == argc - 1)
            n = 0;
        stamina += towns[n].stamina;
        if (stamina >= towns[n].distance) {
            que.push_back(towns[n]);
            stamina -= towns[n].distance;
        } else {
            que.resize(0);
            break;
        }
    }
}

void backRoad(std::deque<Town> &que, const std::vector<Town>& towns,
                 int i, int argc) {
    int stamina = 0;

    for (int j = 0, n = i, len = n - 1; j < argc - 1; j++, n--, len--) {
        if (n == -1)
            n = argc - 2;
        if (len == -1)
            len = argc - 2;
        stamina += towns[n].stamina;
        if (towns[len].distance <= stamina) {
            que.push_back(towns[n]);
            stamina -= towns[len].distance;
        } else {
            que.resize(0);
            break;
        }
    }
}
