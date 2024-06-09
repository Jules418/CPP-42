/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:26:34 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 23:08:08 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &other) {
	*this = other; 
}

Brain &Brain::operator=(const Brain &other)
{
	for (int index = 0; index < 100; index++)
		this->ideas[index] = other.ideas[index];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructed" << std::endl;
}

void Brain::setIdea(const int pos, const std::string& idea) {
	if (pos < 0 || 99 < pos)
		return ;
	this->ideas[pos] = idea;
}

std::string Brain::getIdea(const int pos)
{
	if (pos < 0 || 99 < pos)
		return ("Invalid position");
	return (this->ideas[pos]);
}