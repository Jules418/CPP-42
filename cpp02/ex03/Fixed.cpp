/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:03:01 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:44:00 by jules            ###   ########.fr       */
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
	_rawBits = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &f) {
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f) {
	if (this == &f)
		return (*this);
	this->_rawBits = f._rawBits;
	return (*this);
}

std::ostream & operator<<(std::ostream &os, Fixed const &f) {
	os << f.toFloat();
	return os;
}

Fixed::Fixed(const int n) {
	_rawBits = (n << _fract_size);
}

Fixed::Fixed(const float x) {
	int nraw = (int) roundf(x * rec_pow(2.f, _fract_size));
	_rawBits = nraw;
}

int	Fixed::getRawBits() const {
	return (_rawBits);
}

void	Fixed::setRawBits(const int raw) {
	_rawBits = raw;
}

float	Fixed::toFloat() const {
	float x = (float) _rawBits / rec_pow(2.f, _fract_size);
	return (x);
}

int	Fixed::toInt() const {
	return (_rawBits >> _fract_size);
}

bool Fixed::operator>(const Fixed &b) const {
	return (this->getRawBits() > b.getRawBits());
}

bool Fixed::operator<(const Fixed &b) const {
	return (this->getRawBits() < b.getRawBits());
}

bool Fixed::operator>=(const Fixed &b) const {
	return (this->getRawBits() >= b.getRawBits());
}

bool Fixed::operator<=(const Fixed &b) const {
	return (this->getRawBits() <= b.getRawBits());
}

bool Fixed::operator==(const Fixed &b) const {
	return (this->getRawBits() == b.getRawBits());
}

bool Fixed::operator!=(const Fixed &b) const {
	return (this->getRawBits() != b.getRawBits());
}

Fixed	Fixed::operator+( const Fixed &rhs ) const {
	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &rhs ) const {
	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &rhs ) const {
	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( const Fixed &rhs ) const {
	return Fixed( this->toFloat() / rhs.toFloat() );
}

Fixed &Fixed::operator++() {
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->_rawBits++;
	return (tmp);
}

Fixed &Fixed::operator--() {
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->_rawBits--;
	return (tmp);
}

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}