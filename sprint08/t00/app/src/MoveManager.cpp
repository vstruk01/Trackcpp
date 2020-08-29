#include "MoveManager.h"
#include "Player.h"
#include "Map.h"
#include <map>
#include <string>
#include <memory>

MoveManager::MoveManager(std::shared_ptr<Player> &player, std::shared_ptr<Map> &map) {
    m_player = player;
    m_map = map;
}

void MoveManager::processInputAndMove(const std::string &inputStr) {
    std::map<std::string, Direction> md = {
        {"d", Direction::Down},
        {"l", Direction::Left},
        {"r", Direction::Right},
        {"u", Direction::Up}};

    if (inputStr == "e")
        exit(0);
    if (md.find(inputStr) == md.end()) {
        std::cout << "Invalid Input\n";
    } else if (!checkMove(md[inputStr])) {
        std::cout << "Invalid Direction\n";
    } else {
        m_player.get()->movePlayer(md[inputStr]);
    }
}

bool MoveManager::checkMove(Direction dir) const {
    if ((dir == Direction::Down && m_player.get()->posY() == m_map.get()->height() - 1)
        || (dir == Direction::Up && m_player.get()->posY() == 0)
        || (dir == Direction::Left && m_player.get()->posX() == 0)
        || (dir == Direction::Right && m_player.get()->posX() == m_map.get()->width() - 1)) {
        return false;
    }
    return true;
}