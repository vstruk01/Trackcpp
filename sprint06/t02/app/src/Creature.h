#pragma once

#include <iostream>
#include <set>
#include <map>

namespace Spells {
    enum class SpellType;
    class ISpell;
};

namespace Creatures {
    class Creature {
        public:
            explicit Creature(const std::string& name);
            virtual~Creature();

            void learnSpell(Spells::ISpell* spell);
            void castSpell(const Spells::SpellType type, Creature& creature);
            virtual void sayPhrase() const = 0;
            std::string getName() const;
            int getHealth() const;
            int getMana() const;
            void setHealth(int health);
            void setMana(int mana);
        private:
            std::string m_name;
            int m_health;
            int m_mana;
            std::set<Spells::ISpell*> m_spells;
    };

    class Imperial : public Creatures::Creature {
        public:
            Imperial(const std::string &name);

            void sayPhrase() const;
    };

    class Redguard : public Creatures::Creature {
        public:
            Redguard(const std::string &name);

            void sayPhrase() const;
    };
}

std::ostream& operator<<(std::ostream& os, const Creatures::Creature& creature);
