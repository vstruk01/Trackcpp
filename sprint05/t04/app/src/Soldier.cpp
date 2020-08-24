#include "Soldier.h"
#include "Weapon.h"

Soldier::Soldier(std::string && name, int health) {
    m_name = std::move(name);
    m_health = health;
    std::cout << "Soldier " << m_name << " was created\n";
}

Soldier::~Soldier() {
    std::cout << "Soldier " << m_name << " was deleted\n";
}

void Soldier::attack(Soldier &other) {
    other.m_health -= m_weapon->getDamage();
    std::cout << m_name << " attacks " << other.m_name;
    std::cout << " deals " << m_weapon->getDamage() << " damage\n";
}

void Soldier::setWeapon(Weapon *weapon) {
    m_weapon = weapon;
}

int Soldier::getHealth() const {
    return m_health;
}
