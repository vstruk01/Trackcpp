#include "ImperialSoldier.h"

ImperialSoldier::ImperialSoldier()
                 : Soldier("Martin", 100) {
    std::cout << "Imperial soldier was created\n";
}

ImperialSoldier::~ImperialSoldier() {
    std::cout << "Imperial soldier was deleted\n";
}