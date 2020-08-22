#include "StormcloakSoldier.h"
#include "ImperialSoldier.h"
#include "Axe.h"

StormcloakSoldier::StormcloakSoldier() {
    m_health = 100;
}

StormcloakSoldier::~StormcloakSoldier() {
    delete m_weapon;
}

void StormcloakSoldier::setWeapon(Axe *axe) {
    m_weapon = axe;
}

void StormcloakSoldier::attack(ImperialSoldier &enemy) {
    std::cout << "Stormcloak soldier attacks and deals " << m_weapon->getDamage()
              << " damage\n";
    enemy.consumeDamage(m_weapon->getDamage());
}

void StormcloakSoldier::consumeDamage(int amount) {
    m_health -= amount;
    std::cout << "Stormcloak soldier consumes " << amount << " of damage\n";
}

int StormcloakSoldier::getHealth() const {
    return m_health;
}