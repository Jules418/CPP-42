/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 05:08:07 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 05:12:13 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "string content : " << str << std::endl;
	std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF : " << stringREF << std::endl;
}