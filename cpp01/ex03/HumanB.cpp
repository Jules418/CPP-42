/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 05:14:12 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:45:48 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB() {}

HumanB::~HumanB() {}

HumanB::HumanB(const HumanB& hb) {
	*this = hb;
}

HumanB	&HumanB::operator=(const HumanB& hb) {
	if (this == &hb)
		return (*this);
	this->name = hb.name;
	this->weapon = hb.weapon;
	return (*this);
}

HumanB::HumanB(std::string name) {
	this->name = name;
}

void	HumanB::setWeapon(Weapon &w) {
	this->weapon = &w;
}

void	HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}