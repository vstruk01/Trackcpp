#include "StormcloakSoldier.h"

StormcloakSoldier::StormcloakSoldier()
                   : Soldier("Flynn", 100) {
    std::cout << "Stormcloak soldier was created\n";
}

StormcloakSoldier::~StormcloakSoldier() {
    std::cout << "Stormcloak soldier was deleted\n";
}
