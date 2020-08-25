#pragma once

#include <iostream>
#include <string>
#include <map>

#include "foodItem.h"

class AbstractWizard {
    protected:
        virtual void deductFoodType(FoodType ft) = 0;
};

class MightyWizard : public AbstractWizard {
    public:
        MightyWizard(std::string &name) : m_name(name){};
        void deductFoodType(FoodType ft) override {
            std::map<FoodType, std::string> foodToReaction = {
                {FoodType::ApplePie, "Apple pie. Ugh, not again!"},
                {FoodType::Sweetroll, "Sweetroll. Mmm, tasty!"},
                {FoodType::PoisonedFood, "Poison. Ugh, not again!"},
                {FoodType::HoneyNut, "Honey nut. Mmm, tasty!"}};
            if (foodToReaction.find(ft) != foodToReaction.end()) {
                std::cout << foodToReaction[ft] << '\n';
            } else {
                std::cout << "<wtf>. Ugh, not again!\n";
            }
        };
        void checkFood(FoodItem *fi){
            if (!fi) {
                std::cout << "<wtf>. Ugh, not again!\n";
                return;
            }
            FoodType ft = fi->getFoodType();
            deductFoodType(ft);
        };
        void checkFood(FoodItem &fi){
            FoodType ft = fi.getFoodType();
            deductFoodType(ft);
        };

    private:
        std::string m_name;
};


