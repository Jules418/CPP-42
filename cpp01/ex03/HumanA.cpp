/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 05:14:03 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:45:36 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA() {}

HumanA::~HumanA() {}

HumanA::HumanA(const HumanA& ha) {
	*this = ha;
}

HumanA	&HumanA::operator=(const HumanA& ha) {
	if (this == &ha)
		return (*this);
	this->name = ha.name;
	this->weapon = ha.weapon;
	return (*this);
}

HumanA::HumanA(std::string name, Weapon &w) {
	this->name = name;
	this->weapon = &w;
}

void	HumanA::setWeapon(Weapon &w) {
	this->weapon = &w;
}

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}