/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 05:13:56 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:45:58 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::~Weapon() {}

Weapon::Weapon(const Weapon &w) {
	*this = w;
}

Weapon &Weapon::operator=(const Weapon &w) {
	if (this == &w)
		return (*this);
	type = w.type;
	return (*this);
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

const std::string	&Weapon::getType() {
	return (type);
}

void	Weapon::setType(std::string nType) {
	this->type = nType;
}
