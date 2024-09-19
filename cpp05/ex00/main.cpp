/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:37:39 by jbanacze          #+#    #+#             */
/*   Updated: 2024/09/19 00:20:32 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	Bureaucrat Stevie = Bureaucrat("Steve", 35);
	std::cout << Stevie << std::endl;
	Stevie.incrementGrade();
	std::cout << Stevie << std::endl;
	Stevie.decrementGrade();
	std::cout << Stevie << std::endl;

	try {
		Bureaucrat Greedie = Bureaucrat("Greedie", 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Bureaucrat Noobie = Bureaucrat("Noobie", 151);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Bureaucrat Greedie = Bureaucrat("Greedie", 1);
		Greedie.incrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat Noobie = Bureaucrat("Noobie", 150);
		Noobie.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	//Bureaucrat Faily = Bureaucrat("Faily", 0);
}
