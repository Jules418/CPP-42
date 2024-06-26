/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:36:16 by jbanacze          #+#    #+#             */
/*   Updated: 2024/06/05 20:49:02 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl << std::endl;

	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wcat = new WrongCat();
	std::cout << std::endl << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "Wrong animals" << std::endl;

	std::cout << Wmeta->getType() << " " << std::endl;
	std::cout << Wcat->getType() << " " << std::endl;
	std::cout << std::endl << std::endl;

	Wmeta->makeSound();
	Wcat->makeSound();
	std::cout << std::endl << std::endl;


	delete meta;
	delete j;
	delete i;

	delete Wmeta;
	delete Wcat;

	return 0;
}