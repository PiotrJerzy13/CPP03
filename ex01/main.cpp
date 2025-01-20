/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:44:54 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/01/20 12:45:07 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() 
{
	ScavTrap scav1("Guardian");
	ScavTrap scav2("Protector");

	scav1.attack("Enemy1");
	scav2.guardGate();

	scav1.takeDamage(30);
	scav1.beRepaired(20);

	return 0;
}
