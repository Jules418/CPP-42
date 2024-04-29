/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 06:52:10 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 07:52:40 by jules            ###   ########.fr       */
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
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I really do!" << std::endl;
}

void	Harl::info() {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!";
	std::cout << " If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning() {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming foryears whereas you started working here since last month." << std::endl;
}

void	Harl::error() {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::ignored() {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int	Harl::get_complain_lvl(std::string level) {
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (level == lvls[i])
			return i;
	return (-1);
}

// Envie de me crever les yeux, pourquoi ils ont pas inverser les contraintes de 2 dernières questions...
void	Harl::complain(std::string level) {
	int	complain_lvl = this->get_complain_lvl(level);
	switch (complain_lvl) {
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case 1:
			this->info();
			this->warning();
			this->error();
			break;
		case 2:
			this->warning();
			this->error();
			break;
		case 3:
			this->error();
			break;
		default:
			this->ignored();
			break;
	}
}