/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:40:19 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/01/20 12:56:41 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
private:
	std::string name {"Default"};
	unsigned int hitPoints {10};
	unsigned int energyPoints {10};
	unsigned int attackDamage {0};

public:
	ClapTrap();
	explicit ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	virtual void attack(std::string_view target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	unsigned int getHitPoints() const { return hitPoints; }
	unsigned int getEnergyPoints() const { return energyPoints; }
	unsigned int getAttackDamage() const { return attackDamage; }
	std::string getName() const { return name; }

protected:
	void setHitPoints(unsigned int hp) { hitPoints = hp; }
	void setEnergyPoints(unsigned int ep) { energyPoints = ep; }
	void setAttackDamage(unsigned int ad) { attackDamage = ad; }
};

#endif
