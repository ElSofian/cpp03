#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), guardGateMode(false) {
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), guardGateMode(false) {
	std::cout << "ScavTrap constructor with name" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "ScavTrap copy constructor" << std::endl;
	if (this != &src)
		*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
	std::cout << "ScavTrap assignation operator" << std::endl;
	if (this != &src)
	{
		setName(src.getName());
		setHitPoints(src.getHitPoints());
		setAttackDamage(src.getAttackDamage());
		setEnergyPoints(src.getEnergyPoints());
	}
	return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
	if (hitPoints == 0)
		std::cout << "ClassTrap: " << name << "is dead" << std::endl;
	else if (energyPoints == 0)
		std::cout << "ClassTrap: " << name << " has no energy points" << std::endl;
    else if (hitPoints > 0 && energyPoints > 0)
	{
        std::cout << target + " was attacked by " + getName() + " and took " << getAttackDamage() << " damage!" << std::endl;
		energyPoints -= 1;
	}
}

void ScavTrap::guardGate(void) {
	if (!guardGateMode) {
		std::cout << "ScavTrap: " << getName() << " has entered in Gate keeper mode" << std::endl;
		guardGateMode = true;
	} else {
		std::cout << "ScavTrap: " << getName() << " has exited from Gate keeper mode" << std::endl;
		guardGateMode = false;
	}
}