/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:41:30 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/01/20 12:41:47 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() 
{
	ClapTrap defaultClap;
	ClapTrap clap1("Alpha");
	ClapTrap clap2("Beta");

	clap1.attack("Beta");
	clap2.takeDamage(0);
	clap2.beRepaired(3);

	clap1.attack("Beta");
	clap2.takeDamage(5);

	return 0;
}
