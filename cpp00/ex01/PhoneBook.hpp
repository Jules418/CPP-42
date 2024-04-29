/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:00:54 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 01:41:29 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		PhoneBook(const PhoneBook&);
		~PhoneBook();
		PhoneBook &operator=(const PhoneBook&);

		void add_contact();
		void search_contact();

	private:
		Contact _contacts[8];
		int		_nb_contacts;
		bool	_filled_once;

		Contact *_get_contact(int i);
		void	_print_contact(int i);
		void	_print_short();
};

#endif