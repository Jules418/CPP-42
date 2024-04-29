/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 05:14:43 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 06:01:08 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		~HumanB();
		HumanB(const HumanB&);
		HumanB&operator=(const HumanB&);

		HumanB(std::string name);

		void	setWeapon(Weapon &w);
		void	attack();

	private:
		std::string name;
		Weapon		*weapon;
};

#endif