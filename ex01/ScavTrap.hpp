#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../ex00/ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap 
{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

    void guardGate();

    void attack(const std::string& target);
};

#endif
