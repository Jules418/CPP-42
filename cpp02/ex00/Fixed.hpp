/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:03:03 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 08:11:56 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed&operator=(const Fixed&);

		int		getRawBits() const;
		void	setRawBits(const int raw);

	private:
		int	_rawBits;
		static int	_fract_size;
};

#endif