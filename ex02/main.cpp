/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:11:22 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/01/20 13:11:25 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() 
{
	FragTrap frag1("Fraggy");
	FragTrap frag2(frag1);

	frag1.attack("Target1");
	frag1.highFivesGuys();

	frag2 = frag1;
	frag2.highFivesGuys();

	return 0;
}
