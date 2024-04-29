/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:03:03 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:33:18 by jules            ###   ########.fr       */
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

		bool operator>(const Fixed &b) const ;
		bool operator<(const Fixed &b) const ;
		bool operator>=(const Fixed &b) const ;
		bool operator<=(const Fixed &b) const ;
		bool operator==(const Fixed &b) const ;
		bool operator!=(const Fixed &b) const ;

		Fixed operator+(const Fixed &b) const ;
		Fixed operator-(const Fixed &b) const ;
		Fixed operator*(const Fixed &b) const ;
		Fixed operator/(const Fixed &b) const ;

		Fixed &operator++();
		Fixed operator++(int);

		Fixed &operator--();
		Fixed operator--(int);

		static Fixed& min( Fixed &a, Fixed &b );
		static const Fixed& min( const Fixed &a, const Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
		static const Fixed& max( const Fixed &a, const Fixed &b );

	private:
		int	_rawBits;
		static int	_fract_size;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);



#endif