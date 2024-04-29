/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 03:32:26 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:46:17 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
	name = "default_name";
}

Zombie::~Zombie() {
	std::cout << "Destroying zombie " << name << std::endl;
}

Zombie &Zombie::operator=(const Zombie &z) {
	if (this == &z)
		return (*this);
	name = z.name;
	return (*this);
}
Zombie::Zombie(std::string name) {
	(*this).name = name;
}

Zombie::Zombie(const Zombie &z) {
	*this = z;
}

void Zombie::announce(){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}