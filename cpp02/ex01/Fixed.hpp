/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:03:03 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 09:06:12 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed&operator=(const Fixed&);

		Fixed(const int n);
		Fixed(const float x);

		int		getRawBits() const;
		void	setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;

	private:
		int	_rawBits;
		static int	_fract_size;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif