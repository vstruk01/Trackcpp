#include "MoveManager.h"
#include "Player.h"
#include "Map.h"
#include <map>
#include <string>
#include <memory>

MoveManager::MoveManager(std::shared_ptr<Player> &player, std::shared_ptr<Map> &map) : m_player(player), m_map(map) {}

void MoveManager::processInputAndMove(const std::string &inputStr) {
    std::map<std::string, Direction> md = {
        {"d", Direction::Down},
        {"l", Direction::Left},
        {"r", Direction::Right},
        {"u", Direction::Up}};

    if (md.find(inputStr) == md.end()) {
        std::cout << "Invalid Input\n";
    } else if (!checkMove(md[inputStr])) {
        std::cout << "Invalid Direction\n";
    } else {
        std::cout << "Ok\n";
    }
}

bool MoveManager::checkMove(Direction dir) const {
    if ((dir == Direction::Down && m_player.get()->posY() == m_map.get()->height())
        || (dir == Direction::Up && m_player.get()->posY() == 0)
        || (dir == Direction::Left && m_player.get()->posX() == 0)
        || (dir == Direction::Left && m_player.get()->posX() == m_map.get()->width())) {
        return false;
    }
    return true;
}