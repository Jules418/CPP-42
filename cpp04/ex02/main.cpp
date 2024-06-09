/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:36:16 by jbanacze          #+#    #+#             */
/*   Updated: 2024/06/09 11:26:26 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(int argc, char *argv[])
{
	int size;

	if (argc == 1)
		size = 10;
	else
		size = std::atoi(argv[1]);
	
	Animal **pets = new Animal*[size];
	
	int	i;
	for (i = 0; i < (size / 2); i++)
		pets[i] = new Dog();
	for (; i < size; i++)
		pets[i] = new Cat();
	
	for (int i = 0; i < size; i++)
		delete pets[i];
	delete[] pets;


	/*
	
	Animal rdmLivingCreature();
	Animal scndOne;

	scndOne = Animal();
	
	*/

	return 0;
}