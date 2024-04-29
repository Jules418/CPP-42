/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 03:32:05 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 04:15:57 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void) {
	Zombie	myZombie = Zombie("RottenFlesh");
	myZombie.announce();
	Zombie	*Zombie2;
	Zombie2 = newZombie("Marc");
	Zombie2->announce();
	randomChump("Tempie");
	delete Zombie2;
}
