#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap dude = ClapTrap();
    ClapTrap jeff = dude;
    ClapTrap ken (jeff);
    ScavTrap scavy = ScavTrap();

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
    scavy.guardGate();
    scavy.guardGate();
    scavy.guardGate();
    scavy.attack("greg");

	FragTrap bot;
	FragTrap Dante("Dante");
	Dante.highFivesGuys();
    Dante.attack("Vergil");
    return 0;
}