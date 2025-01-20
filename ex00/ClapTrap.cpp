/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:39:50 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/01/20 12:41:56 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name) 
{
	std::cout << "ClapTrap Parameterized Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap Copy Constructor called\n";
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
	if (this != &other) 
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(std::string_view target) 
{
	if (energyPoints > 0 && hitPoints > 0) 
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else 
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
