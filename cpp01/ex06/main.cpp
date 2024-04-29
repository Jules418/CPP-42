/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 06:52:02 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 07:42:45 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "We want exactly 1 argument !" << std::endl;
		return 1;
	}
	
	Harl	harl;
	
	harl.complain(argv[1]);

	return (0);
}