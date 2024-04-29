/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 06:52:19 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 07:07:03 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {

	typedef void(Harl::*t_func)(void);

	public:
		Harl();
		~Harl();
		Harl(const Harl&);
		Harl&operator=(const Harl&);

		void	complain(std::string level);

	private:
		
		void	debug();
		void	info();
		void	warning();
		void	error();		
};

#endif