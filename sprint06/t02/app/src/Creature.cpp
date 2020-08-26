#include "ISpell.h"

Creatures::Creature::Creature(const std::string& name) : m_name(name), m_health(100), m_mana(100) {
    std::cout << m_name << " was born\n";
};

Creatures::Imperial::Imperial(const std::string &name) : Creature(name){};
Creatures::Redguard::Redguard(const std::string &name) : Creature(name){};

Creatures::Creature::~Creature() {
    m_spells.clear();
};

void Creatures::Creature::learnSpell(Spells::ISpell* spell) {
    if (m_spells.find(spell) == m_spells.end()) {
        m_spells.insert(spell);
        std::cout << getName() << " has learned "
                  << spell->getName()
                  << " spell successfully!\n";
    } else {
        std::cout << getName() << " already knows "
                  << spell->getName()
                  << " spell!\n";
    }
};

void Creatures::Creature::castSpell(const Spells::SpellType type, Creature& creature) {
    std::map<Spells::SpellType, std::string> spellName = {
        {Spells::SpellType::Equilibrium, "equilibrium"},
        {Spells::SpellType::Fireball, "fireball"},
        {Spells::SpellType::Flames, "flames"},
        {Spells::SpellType::Freeze, "freeze"},
        {Spells::SpellType::Fireball, "fireball"}};

    for (Spells::ISpell* spell : m_spells) {
        if (spell->getType() == type) {
            if (spell->cast(*this, creature)) {
                std::cout << this->m_name << " casted "
                          << spell->getName() << " spell on "
                          << creature.m_name << '\n';
            } else {
                std::cout << this->m_name << " can't cast "
                          << spell->getName() << '\n';
            }
            return;
        }
    }
    std::cout << spellName[type]
              << " spell is not learned by "
              << this->m_name << ".\n";
};

std::string Creatures::Creature::getName() const {
    return m_name;
};

int Creatures::Creature::getHealth() const {
    return m_health;
};

int Creatures::Creature::getMana() const {
    return m_mana;
};

void Creatures::Creature::setHealth(int health) {
    m_health = health;
};

void Creatures::Creature::setMana(int mana) {
    m_mana = mana;
};


void Creatures::Imperial::sayPhrase() const {
    std::cout << "I am " << getName()
              << ", Imperial soldier! Stop right here!\n";
};

void Creatures::Redguard::sayPhrase() const {
    std::cout << "I am " << getName()
              << " from Redguards, wanna trade?\n";
};

std::ostream& operator<<(std::ostream& os, const Creatures::Creature& creature) {
    os << creature.getName() << " : " << creature.getHealth()
       << " HP, " << creature.getMana() << " MP.";
    return os;
};
