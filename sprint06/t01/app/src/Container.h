#pragma once

#include <string>
#include <iostream>

#include "LockpickDifficulty.h"

class ILockable {
    protected:
        virtual LockpickDifficulty lockDifficulty() const = 0;
        virtual bool isLocked() const = 0;
};

class IOpenable {
    protected:
        virtual bool tryToOpen(LockpickDifficulty) = 0;
};

class Container : public ILockable, public IOpenable {
    public:
        Container(bool isLocked, const LockpickDifficulty difficulty);

        LockpickDifficulty lockDifficulty() const override;
        bool isLocked() const override;
        bool tryToOpen(LockpickDifficulty skill) override;
        virtual std::string name() const = 0;
    private:
        bool m_isLocked{false};
        LockpickDifficulty m_difficulty;
};

class Barrel : public Container {
    public:
        Barrel();

        std::string name() const override;
};

class Chest : public Container {
    public:
        Chest(bool isLocked, const LockpickDifficulty difficulty);

        std::string name() const override;
};

class Safe : public Container {
    public:
        Safe(bool isLocked, const LockpickDifficulty difficulty);

        std::string name() const override;
};
