/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:58:45 by jbanacze          #+#    #+#             */
/*   Updated: 2024/06/03 09:54:35 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap default Constructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
	std::cout << "FragTrap is created" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructed" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (this->_hitPoints && this->_energyPoints) {
		std::cout << "FragTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap is highfiving !	" << std::endl;
}