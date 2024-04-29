/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:51:11 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 02:23:01 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void) {
	std::string	command;
	PhoneBook	pb;

	std::cout << "Command : ";
	std::getline(std::cin, command);
	while (true) {
		if (command == "ADD")
			pb.add_contact();
		if (command == "SEARCH")
			pb.search_contact();
		if (command == "EXIT")
			break;
		std::cout << "Command : ";
		std::getline(std::cin, command);
	}
	return (0);
}
