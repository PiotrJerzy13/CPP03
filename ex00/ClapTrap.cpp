#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
	{
    std::cout << "ClapTrap Parameterized Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
{
    *this = other;
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}