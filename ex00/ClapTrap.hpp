#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
private:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

	// Accessor Methods (Getters and Setters)
protected:
    void setHitPoints(unsigned int hp) { hitPoints = hp; }
    void setEnergyPoints(unsigned int ep) { energyPoints = ep; }
    void setAttackDamage(unsigned int ad) { attackDamage = ad; }
    void setName(const std::string& n) { name = n; }

    unsigned int getHitPoints() const { return hitPoints; }
    unsigned int getEnergyPoints() const { return energyPoints; }
    unsigned int getAttackDamage() const { return attackDamage; }
    std::string getName() const { return name; }
};

#endif
