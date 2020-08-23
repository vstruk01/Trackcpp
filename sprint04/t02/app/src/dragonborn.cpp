#include "dragonborn.h"

void Dragonborn::shoutThuum() const {
    std::cout << "Yol Toor Shul\n";
}
void Dragonborn::attackWithMagic() const {
    std::cout << "*attacks with magic spell*\n";
}
void Dragonborn::attackWithWeapon() const {
    std::cout << "*attacks with weapon*\n";
}

void Dragonborn::executeAction(const Actions action) {
    std::map<Actions, void (Dragonborn::*)() const> acts = {
        {Actions::Shout, &Dragonborn::shoutThuum},
        {Actions::Weapon, &Dragonborn::attackWithWeapon},
        {Actions::Magic, &Dragonborn::attackWithMagic}};
    std::invoke(acts.at(action), this);
}
