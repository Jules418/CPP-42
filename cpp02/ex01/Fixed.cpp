/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:03:01 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:44:34 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int Fixed::_fract_size = 8;

float	rec_pow(float x, int p) {
	if (p == 0)
		return (1);
	if (p == 1)
		return (x);
	if (p % 2)
		return (x * rec_pow(x, p - 1));
	x = rec_pow(x, p / 2);
	return (x * x);
}

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &f)
		return (*this);
	this->_rawBits = f._rawBits;
	return (*this);
}

std::ostream & operator<<(std::ostream &os, const Fixed &f) {
	os << f.toFloat();
	return os;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	_rawBits = (n << _fract_size);
}

Fixed::Fixed(const float x) {
	std::cout << "Float constructor called" << std::endl;
	int nraw = (int) roundf(x * rec_pow(2.f, _fract_size));
	_rawBits = nraw;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

float	Fixed::toFloat() const {
	float x = (float) _rawBits / rec_pow(2.f, _fract_size);
	return (x);
}

int	Fixed::toInt() const {
	return (_rawBits >> _fract_size);
}

