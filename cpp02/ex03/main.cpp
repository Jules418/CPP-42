/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:02:49 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 11:42:22 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void ) {

	const Point p1(0.f, 0.f);
	const Point p2(1.f, 0.f);
	const Point p3(0.f, 1.f);

	const Point test1(0.f, 0.f);
	const Point test2(0.5f, 0.5f);
	const Point test3(0.25f, 0.25f);
	const Point test4(1.f, 1.f);

	std::cout << "Test 1 : " << bsp(p1, p2, p3, test1) << " , resultat attendu 0;"<< std::endl;
	std::cout << "Test 2 : " << bsp(p1, p2, p3, test2) << " , resultat attendu 0;"<< std::endl;
	std::cout << "Test 3 : " << bsp(p1, p2, p3, test3) << " , resultat attendu 1;"<< std::endl;
	std::cout << "Test 4 : " << bsp(p1, p2, p3, test4) << " , resultat attendu 0;"<< std::endl;

	return 0;
}