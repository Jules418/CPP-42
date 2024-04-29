/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:37:51 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 02:14:39 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

std::string	Contact::get_fname() {
	return (_first_name);
}

std::string	Contact::get_lname() {
	return (_last_name);
}

std::string	Contact::get_nname() {
	return (_nickname);
}

std::string	Contact::get_phone_nbr() {
	return (_phone_number);
}

std::string	Contact::get_dark_secret() {
	return (_darkest_secret);
}

Contact::Contact() {
	;
}

Contact::Contact(const Contact &c) {
	*this = c;
}

Contact &Contact::operator=(const Contact &c) {
	_first_name = c._first_name;
	_last_name = c._last_name;
	_nickname = c._nickname;
	_phone_number = c._phone_number;
	_darkest_secret = c._darkest_secret;

	return (*this);
}

Contact::~Contact(){
	;
}

void	Contact::get_input() {
	std::cout << "Contact's first name : ";
	std::getline(std::cin, _first_name);
	std::cout << std::endl;
	std::cout << "Contact's last name : ";
	std::getline(std::cin, _last_name);
	std::cout << std::endl;
	std::cout << "Contact's nickname : ";
	std::getline(std::cin, _nickname);
	std::cout << std::endl;
	std::cout << "Contact's phone number : ";
	std::getline(std::cin, _phone_number);
	std::cout << std::endl;
	std::cout << "Contact's darkest secret : ";
	std::getline(std::cin, _darkest_secret);
	std::cout << std::endl;
}

void	print_n_spaces(int n) {
	for (int i = 0; i < n; i++)
		std::cout << " ";
}

void	print_shortened_str(std::string str) {
	int	len = str.length();
	int	nb_spaces = len > 10 ? 0 : 10 - len;
	print_n_spaces(nb_spaces);
	if (len <= 10)
		std::cout << str;
	else {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

void	Contact::print_short_infos(int index) {
	print_n_spaces(9);
	std::cout << index;
	std::cout << "|";
	print_shortened_str(_first_name);
	std::cout << "|";
	print_shortened_str(_last_name);
	std::cout << "|";
	print_shortened_str(_nickname);
	std::cout << std::endl;
}

void	Contact::print_long_infos() {
	std::cout << "First name : " << _first_name << std::endl;
	std::cout << "Last name : " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phone_number << std::endl;
	std::cout << "Darkest secret : " << _darkest_secret << std::endl;
}
