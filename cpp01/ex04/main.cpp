/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 06:07:26 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 06:48:07 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewSed.hpp"

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Bad number of arguments" << std::endl;
		return (1);
	}

	NewSed ns(argv[1]);
	return ns.replace(argv[2], argv[3]);
}