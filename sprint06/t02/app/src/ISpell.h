#pragma once

#include "Creature.h"

namespace Spells {
    enum class SpellType {
        Healing,
        Equilibrium,
        Flames,
        Freeze,
        Fireball
    };
    class ISpell {
        public:
            virtual ~ISpell() = default;

            virtual bool cast(Creatures::Creature& owner, Creatures::Creature& other) = 0;
            virtual SpellType getType() const = 0;
            virtual std::string getName() = 0;
    };

    class Healing : public Spells::ISpell {
        public:
            bool cast(Creatures::Creature &owner, Creatures::Creature &other);
            SpellType getType() const;
            std::string getName();
    };

    class Equilibrium : public Spells::ISpell {
        public:
            bool cast(Creatures::Creature &owner, Creatures::Creature &other);
            SpellType getType() const;
            std::string getName();
    };

    class Flames : public Spells::ISpell {
        public:
            bool cast(Creatures::Creature &owner, Creatures::Creature &other);
            SpellType getType() const;
            std::string getName();
    };

    class Freeze : public Spells::ISpell {
        public:
            bool cast(Creatures::Creature &owner, Creatures::Creature &other);
            SpellType getType() const;
            std::string getName();
    };

    class Fireball : public Spells::ISpell {
        public:
            bool cast(Creatures::Creature &owner, Creatures::Creature &other);
            SpellType getType() const;
            std::string getName();
    };
}

bool operator==(Spells::ISpell& lhs, Spells::ISpell& rhs);
