#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap dude = ClapTrap();
    ClapTrap jeff = dude;
    ClapTrap ken (jeff);

    dude.attack("greg");
    jeff.attack("greg");
    ken.attack("ryu");
    ken.setAttackDamage(12312);
    ken.attack("ryu");
    ken.takeDamage(231321);
    ken.takeDamage(123312);
    ken.takeDamage(123123);
    ken.beRepaired(12312311);
    ken.beRepaired(213123);
    ken.takeDamage(123123123);
    return (0);
}
