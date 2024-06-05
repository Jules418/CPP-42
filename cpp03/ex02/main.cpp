/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:57:20 by jbanacze          #+#    #+#             */
/*   Updated: 2024/06/03 10:10:13 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(){
	ClapTrap ct1("CL4P-TP Steward Bot");
	std::string VH = "Vault Hunters' ego";
	ScavTrap st1("SC4V-TP");
	FragTrap r2("R2D2");

	ct1.attack(VH);
	st1.attack(VH);
	st1.guardGate();
	r2.highFivesGuys();
	return 0;
}