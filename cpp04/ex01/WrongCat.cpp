/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:41:23 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 20:46:39 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	_type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()  {
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "Did you know? the word Homeowner has MEOW in it" << std::endl;
}