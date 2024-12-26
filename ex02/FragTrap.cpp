#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) 
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap Parameterized Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) 
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) 
{
    if (this != &other) 
	{
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys() 
{
    std::cout << "FragTrap " << getName() << " says: \"High Five, guys!\"" << std::endl;
}
