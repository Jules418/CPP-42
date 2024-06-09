/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:57:04 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 23:06:52 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Default Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other) : Animal()  {
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	if (this == &other)
		return (*this);
	_type = other._type;
	_brain = other._brain;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Meow..." << std::endl;
}
