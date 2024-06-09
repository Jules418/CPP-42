/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:57:04 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 23:06:58 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Default Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &other) : Animal() {
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	if (this == &other)
		return (*this);
	_type = other._type;
	_brain = other._brain;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woaf Woaf" << std::endl;
}
