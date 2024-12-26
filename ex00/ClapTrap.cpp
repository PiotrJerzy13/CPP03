#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
	{
    std::cout << "ClapTrap Parameterized Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
{
    *this = other;
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
    if (this != &other) 
	{
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) 
{
    if (energyPoints > 0 && hitPoints > 0) 
	{
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else 
	{
        std::cout << "ClapTrap " << name << " has no energy or hit points left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    hitPoints = (hitPoints > amount) ? (hitPoints - amount) : 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (energyPoints > 0 && hitPoints > 0) 
	{
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
    }
	 else 
	{
        std::cout << "ClapTrap " << name << " has no energy or hit points left!" << std::endl;
    }
}