#include "ImperialSoldier.h"
#include "StormcloakSoldier.h"
#include "Sword.h"

ImperialSoldier::ImperialSoldier () {
    m_health = 100;
}

ImperialSoldier::~ImperialSoldier () {
    delete m_weapon;
}

void ImperialSoldier::setWeapon(Sword *sword) {
    m_weapon = sword;
}

void ImperialSoldier::attack(StormcloakSoldier &enemy) {
    std::cout << "Imperial soldier attacks and deals " << m_weapon->getDamage()
              << " damage\n";
    enemy.consumeDamage(m_weapon->getDamage());
}

void ImperialSoldier::consumeDamage(int amount) {
    m_health -= amount;
    std::cout << "Imperial soldier consumes " << amount << " of damage\n";
}

int ImperialSoldier::getHealth() const {
    return m_health;
}