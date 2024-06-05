/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:37:36 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 20:44:57 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongDefault") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

std::string &WrongAnimal::getType(void) {
	return (_type);
}

std::string WrongAnimal::getType(void) const {
	return (_type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Default WrongAnimal sound" << std::endl;
}

