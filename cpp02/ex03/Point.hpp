/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:31:49 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:19:49 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:
		Point();
		~Point();
		Point(const Point&);
		Point&operator=(const Point&);

		Point(const float x, const float y);

		Fixed	getX(void) const ;
		Fixed	getY(void) const ;

	private:
		const Fixed	_x;
		const Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif