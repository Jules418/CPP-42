/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:01:58 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 02:24:53 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <cstdlib>
#include <cctype>
#include <iostream>

PhoneBook::PhoneBook() {
	_nb_contacts = 0;
	_filled_once = false;
}

PhoneBook::PhoneBook(const PhoneBook& pb) {
	int	i;
	_nb_contacts = pb._nb_contacts;
	_filled_once = pb._filled_once;
	for (i = 0; i < _nb_contacts; i++)
		_contacts[i] = pb._contacts[i];
	for (; i < 8 * _filled_once; i++)
		_contacts[i] = pb._contacts[i];
}

PhoneBook::~PhoneBook() {
	;
}

PhoneBook &PhoneBook::operator=(const PhoneBook& pb) {
	*this = PhoneBook(pb);
	return (*this);
}

Contact	*PhoneBook::_get_contact(int i) {
	if ((i > 7) || (i < 0))
		return (NULL);
	if ((i + 1 > _nb_contacts) && !_filled_once)
		return (NULL);
	return (_contacts + i);
}

void	PhoneBook::_print_short() {
	Contact *c;

	std::cout << "._________________________________________." << std::endl;
	std::cout << "|                PHONEBOOK                |" << std::endl;
	std::cout << "|_________________________________________|" << std::endl;
	for (int i = 0; i < 8; i++) {
		c = _get_contact(i);
		if (c)
			c->print_short_infos(i);
	}
}

void	PhoneBook::_print_contact(int i)
{
	Contact *c;

	c = _get_contact(i);
	if (!c) {
		std::cout << "The index you requested does not exist." << std::endl;
		return;
	}
	c->print_long_infos();
	std::cout << std::endl;
}

int	validate_contact(Contact c)
{
	if (c.get_fname()[0] == 0)
		return 0;
	if (c.get_lname()[0] == 0)
		return 0;
	if (c.get_nname()[0] == 0)
		return 0;
	if (c.get_phone_nbr()[0] == 0)
		return 0;
	if (c.get_dark_secret()[0] == 0)
		return 0;
	return 1;
}

void	PhoneBook::add_contact() {
	Contact c;
	
	c.get_input();
	if (!validate_contact(c)) {
		std::cout << "We could not create a contact with the given information" << std::endl;
		return;
	}
	_contacts[_nb_contacts] = c;
	_nb_contacts++;
	if (_nb_contacts >= 8)
		_filled_once = true;
	_nb_contacts = _nb_contacts % 8;
	std::cout << "Contact added with succes !" << std::endl;
}

int	is_first_char_digit(std::string str) {
	for (int i = 0; str[i]; i++) {
		if (!isspace(str[i]))
			return (isdigit(str[i]));
	}
	return (0);
}

void PhoneBook::search_contact() {
	std::string		str_i;
	int				i;

	_print_short();
	std::cout << "which contact would you like ? ";
	std::getline(std::cin, str_i);
	i = std::atoi(str_i.c_str());
	if (!is_first_char_digit(str_i))
		i = -1;
	_print_contact(i);
}