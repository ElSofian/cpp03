#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor with name" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	std::cout << "FragTrap copy constructor" << std::endl;
	if (this != &src)
		*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src) {
	std::cout << "FragTrap assignation operator" << std::endl;
	if (this != &src)
	{
		setName(src.getName());
		setHitPoints(src.getHitPoints());
		setAttackDamage(src.getAttackDamage());
		setEnergyPoints(src.getEnergyPoints());
	}
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap: " << getName() << " is requesting a high five" << std::endl;
}