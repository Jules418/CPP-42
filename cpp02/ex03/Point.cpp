/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:32:08 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:17:53 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(const Point &p) : _x(p._x), _y(p._y) {}

Point	&Point::operator=(const Point &p) {
	if (this == &p)
		return (*this);
	( Fixed ) this->_x = p.getX();
	( Fixed ) this->_y = p.getY();
	return (*this);
}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Fixed	Point::getX() const {
	return (this->_x);
}

Fixed	Point::getY() const {
	return (this->_y);
}