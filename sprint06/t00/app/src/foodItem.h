#pragma once

#include "foodType.h"

class FoodItem {
    public:
        FoodItem(FoodType ft) : m_food(ft){};
        virtual ~FoodItem() = default;

        FoodType getFoodType() {
            return m_food;
        }
    private:
        FoodType m_food;
};

class ApplePie : public FoodItem {
    public:
        ApplePie() : FoodItem(FoodType::ApplePie){};
};

class HoneyNut : public FoodItem {
    public:
        HoneyNut() : FoodItem(FoodType::HoneyNut){};
};

class Sweetroll : public FoodItem {
    public:
        Sweetroll() : FoodItem(FoodType::Sweetroll){}
};

class PoisonedFood : public FoodItem {
    public:
        PoisonedFood() : FoodItem(FoodType::PoisonedFood){};
};
