#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Unknown"), hitPoints(100), energyPoints(100), attackDamage(30) {
	std::cout << "ClassTrap: default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(100), energyPoints(100), attackDamage(30) {
	std::cout << "ClassTrap: constructor with name" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "ClassTrap: copy constructor" << std::endl;
	if (this != &src)
		*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClassTrap: destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
	std::cout << "ClassTrap: assignation operator" << std::endl;
	if (this != &src)
    {
        name = src.name;
        hitPoints = src.hitPoints;
        attackDamage = src.attackDamage;
        energyPoints = src.energyPoints;
    }
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() == 0)
		std::cout << "ClassTrap: " << name << "has no hit points" << std::endl;
	else if (amount >= (unsigned int)getHitPoints())
	{
		setHitPoints(0);
		std::cout << "ClassTrap: " << name << " has been destroyed!" << std::endl;
	}
	else
	{
		setHitPoints(getHitPoints() - amount);
		std::cout << "ClassTrap: " << name << " has taken " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::attack(std::string const &target) {
	if (hitPoints == 0)
		std::cout << "ClassTrap: " << name << "is dead" << std::endl;
	else if (energyPoints == 0)
		std::cout << "ClassTrap: " << name << "has no energy points" << std::endl;
	else
		std::cout << "ClassTrap: " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	energyPoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getHitPoints() == 100)
		std::cout << "ClassTrap: " << name << "has full hit points" << std::endl;
	if (getHitPoints() == 0 || getEnergyPoints() == 0)
		std::cout << "ClassTrap: " << name << "has no energy points" << std::endl;
	else
	{
		if (getHitPoints() + amount <= 100)
			setHitPoints(getHitPoints() + amount);
		else
			setHitPoints(100);
		std::cout << "ClassTrap: " << name << " has been repaired by " << amount << " points!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

std::string ClapTrap::getName(void) const {
	return (name);
}

int ClapTrap::getHitPoints(void) const {
	return (hitPoints);
}

int ClapTrap::getEnergyPoints(void) const {
	return (energyPoints);
}

int ClapTrap::getAttackDamage(void) const {
	return (attackDamage);
}

void ClapTrap::setName(std::string _name) {
	name = _name;
}

void ClapTrap::setHitPoints(int _hitPoints) {
	hitPoints = _hitPoints;
}

void ClapTrap::setEnergyPoints(int _energyPoints) {
	energyPoints = _energyPoints;
}

void ClapTrap::setAttackDamage(int _attackDamage) {
	attackDamage = _attackDamage;
}