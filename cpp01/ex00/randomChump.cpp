/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 03:33:00 by jules             #+#    #+#             */
/*   Updated: 2024/04/29 03:59:23 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <string>

void	randomChump(std::string name) {
	Zombie leZ = Zombie(name);
	leZ.announce();
}
