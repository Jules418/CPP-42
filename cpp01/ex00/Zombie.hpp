/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 03:32:17 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 04:08:32 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
	public:
		Zombie();
		~Zombie();
		Zombie&operator=(const Zombie&);
		Zombie(const Zombie&);

		Zombie(std::string name);

		void	announce();

	private:
		std::string	name;
};

#endif