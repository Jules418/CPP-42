/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 05:14:45 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 06:01:11 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA();
		~HumanA();
		HumanA&operator=(const HumanA&);
		HumanA(const HumanA&);

		HumanA(std::string name, Weapon &w);

		void	setWeapon(Weapon &w);
		void	attack();

	private:
		std::string name;
		Weapon		*weapon;
};

#endif