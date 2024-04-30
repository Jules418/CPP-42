/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:57:30 by jbanacze          #+#    #+#             */
/*   Updated: 2024/04/30 17:38:44 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor have been called" << std::endl;
};
ClapTrap::~ClapTrap() {
	std::cout << "Default destructor have been called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &ct) {
	*this = ct;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct) {
	this->_name = ct._name;
	this->_hitPoint = ct._hitPoint;
	this->_energyPoint = ct._energyPoint;
	this->_attackPoint = ct._attackPoint;

	std::cout << "Copy assignment operator called" << std::endl;

	return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackPoint = 0;

	std::cout << "Constructing " << name << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_hitPoint <= 0)
		return;
	if (this->_energyPoint <= 0)
		return;
	this->_energyPoint--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackPoint << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoint <= 0)
		return;
	this->_hitPoint -= amount;
	if (this->_hitPoint < 0)
		this->_hitPoint = 0;
	std::cout << this->_name << " took " << amount << " damage point." << std::endl;
	std::cout << "He's now at " << this->_hitPoint << " HP." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoint <= 0)
		return;
	if (this->_energyPoint <= 0)
		return;
	this->_energyPoint--;
	this->_hitPoint += amount;
	std::cout << this->_name << " regained " << amount << " hit points." << std::endl;
	std::cout << "He's now at " << this->_hitPoint << " HP." << std::endl;
}