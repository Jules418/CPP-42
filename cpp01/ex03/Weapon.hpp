/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 05:14:24 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 05:47:00 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon();
		~Weapon();
		Weapon(const Weapon&);
		Weapon&operator=(const Weapon&);

		Weapon(std::string type);
		
		const std::string	&getType();
		void				setType(std::string nType);

	private:
		std::string	type;
};

#endif