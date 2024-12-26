#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
 {
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap Parameterized Constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if (getEnergyPoints() > 0 && getHitPoints() > 0) {
        setEnergyPoints(getEnergyPoints() - 1);
        std::cout << "ScavTrap " << getName() << " fiercely attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    } 
	else
	 {
        std::cout << "ScavTrap " << getName() << " has no energy or hit points left!" << std::endl;
    }
}
ScavTrap::~ScavTrap()
 {
    std::cout << "ScavTrap Destructor called" << std::endl;
 }
 
void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << getName() << " is now in Gate Keeper mode!" << std::endl;
}

