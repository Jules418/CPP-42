/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:57:20 by jbanacze          #+#    #+#             */
/*   Updated: 2024/04/30 17:24:02 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(){
	ClapTrap c1("CL4P-TP Steward Bot");
	std::string VH = "Vault Hunters' ego";

	c1.attack(VH);
	c1.takeDamage(9);
	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.takeDamage(10);
	c1.beRepaired(100);
	return 0;
}