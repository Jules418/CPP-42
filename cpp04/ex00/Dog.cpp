/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:57:04 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 20:18:37 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal() {
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woaf Woaf" << std::endl;
}