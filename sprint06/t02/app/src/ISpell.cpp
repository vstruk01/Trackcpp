#include "ISpell.h"

bool Spells::Healing::cast(Creatures::Creature &owner, Creatures::Creature &other) {
    if (owner.getMana() < 15)
            return false;
    owner.setHealth(owner.getHealth() + 10);
    owner.setMana(owner.getMana() - 15);
    return true;
}

Spells::SpellType Spells::Healing::getType() const {
    return SpellType::Healing;
}

std::string Spells::Healing::getName() {
    return "healing";
}

bool Spells::Equilibrium::cast(Creatures::Creature &owner, Creatures::Creature &other) {
    if (owner.getHealth() < 25)
        return false;
    owner.setHealth(owner.getHealth() - 25);
    owner.setMana(owner.getMana() + 25);
    return true;
}

Spells::SpellType Spells::Equilibrium::getType() const {
    return SpellType::Equilibrium;
}

std::string Spells::Equilibrium::getName() {
    return "equilibrium";
}

bool Spells::Flames::cast(Creatures::Creature &owner, Creatures::Creature &other) {
    if (owner.getMana() < 14)
        return false;
    other.setHealth(other.getHealth() - 8);
    owner.setMana(owner.getMana() - 14);
    return true;
}

Spells::SpellType Spells::Flames::getType() const {
    return SpellType::Flames;
}

std::string Spells::Flames::getName() {
    return "flames";
}

bool Spells::Freeze::cast(Creatures::Creature &owner, Creatures::Creature &other) {
    if (owner.getMana() < 30)
        return false;
    other.setHealth(other.getHealth() - 20);
    owner.setMana(owner.getMana() - 30);
    return true;
}

Spells::SpellType Spells::Freeze::getType() const {
    return SpellType::Freeze;
}

std::string Spells::Freeze::getName() {
    return "freeze";
}

bool Spells::Fireball::cast(Creatures::Creature &owner, Creatures::Creature &other) {
    if (owner.getMana() < 50)
        return false;
    other.setHealth(other.getHealth() - 40);
    owner.setMana(owner.getMana() - 50);
    return true;
}

Spells::SpellType Spells::Fireball::getType() const {
    return SpellType::Fireball;
}

std::string Spells::Fireball::getName() {
    return "fireball";
}

bool operator==(Spells::ISpell& lhs, Spells::ISpell& rhs) {
    if (lhs.getType() == rhs.getType())
        return true;
    return false;
};