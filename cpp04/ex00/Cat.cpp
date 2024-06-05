/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:57:04 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 20:18:44 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	_type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()  {
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Meow..." << std::endl;
}