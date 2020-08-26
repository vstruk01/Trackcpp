#pragma once

#include "Container.h"

class Player final {
    public:
        explicit Player(const std::string & name) : m_name(name){};
        void openContainer(Container * container);
        void setLockpickSkill(LockpickDifficulty skill);

    private:
        LockpickDifficulty m_lockpickSkill{ LockpickDifficulty::None };
        std::string m_name;
};

void Player::setLockpickSkill(LockpickDifficulty skill) {
    m_lockpickSkill = skill;
};

void Player::openContainer(Container *container) {
    std::cout << m_name;
    if (container->tryToOpen(m_lockpickSkill)) {
        std::cout << " successfully opened ";
    } else {
        std::cout << " skill is too low to open ";
    }
    std::cout << container->name() << '\n';
}
