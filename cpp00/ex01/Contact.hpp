/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:08:56 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 01:46:32 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	public:
		Contact();
		Contact(const Contact&);
		~Contact();
		Contact &operator=(const Contact&);

		std::string	get_fname();
		std::string	get_lname();
		std::string	get_nname();
		std::string	get_phone_nbr();
		std::string	get_dark_secret();
		void		print_short_infos(int index);
		void		print_long_infos();
		void		get_input();

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif