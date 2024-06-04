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

void ScavTrap::guardGate(void) {
	if (!guardGateMode) {
		std::cout << "ScavTrap: " << getName() << " has entered in Gate keeper mode" << std::endl;
		guardGateMode = true;
	} else {
		std::cout << "ScavTrap: " << getName() << " has exited from Gate keeper mode" << std::endl;
		guardGateMode = false;
	}
}