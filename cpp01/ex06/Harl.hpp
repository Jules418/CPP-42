/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 06:52:19 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 07:50:03 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {

	public:
		Harl();
		~Harl();
		Harl(const Harl&);
		Harl&operator=(const Harl&);

		Harl(int shushLVL);

		void	complain(std::string level);
		int		get_complain_lvl(std::string level);

	private:

		void	debug();
		void	info();
		void	warning();
		void	error();
		void	ignored();	
};

#endif