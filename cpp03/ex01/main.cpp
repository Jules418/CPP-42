/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:57:20 by jbanacze          #+#    #+#             */
/*   Updated: 2024/05/03 20:11:07 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(){
	ClapTrap ct1("CL4P-TP Steward Bot");
	std::string VH = "Vault Hunters' ego";
	ScavTrap st1("SC4V-TP");

	ct1.attack(VH);
	st1.attack(VH);
	st1.guardGate();
	return 0;
}