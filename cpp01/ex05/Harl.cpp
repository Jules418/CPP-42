/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 06:52:10 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 07:17:59 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

Harl::Harl(const Harl &h) {(void) h;}

Harl &Harl::operator=(const Harl &h) {
	(void) h;
	return (*this);
}

void	Harl::debug() {
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I really do!" << std::endl;
}

void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!";
	std::cout << " If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming foryears whereas you started working here since last month." << std::endl;
}

void	Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func	complain_funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i;
	for (i = 0; i < 4; i++)
		if (level == lvls[i])
			break;
	if (i < 4)
		(this->*complain_funcs[i])();
}