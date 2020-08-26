#include "ISpell.h"

using namespace Spells;
using namespace Creatures;

int main() {
    Redguard JoJo("JoJo");
    JoJo.sayPhrase();
    Imperial Dio("Dio");
    Dio.sayPhrase();

    Healing *healing = new Healing;
    Equilibrium *equilibrium = new Equilibrium;
    Fireball *firebool = new Fireball;
    Flames *flames = new Flames;
    Freeze *freeze = new Freeze;

    std::cout << JoJo << '\n'; // 100 100
    std::cout << Dio << '\n'; // 100 100
    JoJo.learnSpell(healing);
    JoJo.learnSpell(firebool);
    Dio.learnSpell(equilibrium);
    Dio.learnSpell(equilibrium);
    JoJo.castSpell(SpellType::Fireball, Dio);
    Dio.castSpell(SpellType::Equilibrium, JoJo);
    std::cout << JoJo << '\n'; // 100 50
    std::cout << Dio << '\n'; // 35 125
    Dio.castSpell(SpellType::Flames, JoJo);
    Dio.learnSpell(flames);
    Dio.learnSpell(freeze);
    JoJo.castSpell(SpellType::Healing, JoJo);
    Dio.castSpell(SpellType::Freeze, JoJo);
    std::cout << JoJo << '\n'; // 90 35
    std::cout << Dio << '\n';  // 35 95
    JoJo.learnSpell(firebool);
    JoJo.learnSpell(firebool);
    JoJo.learnSpell(firebool);
    std::cout << JoJo << '\n'; // 90 35
    std::cout << Dio << '\n';  // 35 95
}
