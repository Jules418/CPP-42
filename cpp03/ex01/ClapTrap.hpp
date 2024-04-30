/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:57:45 by jbanacze          #+#    #+#             */
/*   Updated: 2024/04/30 16:05:08 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		ClapTrap&operator=(const ClapTrap&);

		ClapTrap(std::string name);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string _name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackPoint;
};

#endif