/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:46:00 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 20:23:03 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Default") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

std::string &Animal::getType(void) {
	return (_type);
}

std::string Animal::getType(void) const {
	return (_type);
}

void Animal::makeSound(void) const {
	std::cout << "Default Animal sound" << std::endl;
}

