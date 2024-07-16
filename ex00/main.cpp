#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap dude = ClapTrap();
    ClapTrap soso = dude;
    ClapTrap mec(soso);

    dude.attack("greg");
    soso.attack("greg");
    mec.attack("serge");
    mec.setAttackDamage(12312);
    mec.attack("serge");
    mec.takeDamage(231321);
    mec.takeDamage(123312);
    mec.takeDamage(123123);
    mec.beRepaired(12312311);
    mec.beRepaired(213123);
    mec.takeDamage(123123123);
    return (0);
}
