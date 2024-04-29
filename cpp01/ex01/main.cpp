/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 04:46:46 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 05:06:20 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void) {
	int N = 10;
	Zombie *horde = zombieHorde(N, "Horde_member");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}