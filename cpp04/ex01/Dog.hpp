/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:57:09 by jules             #+#    #+#             */
/*   Updated: 2024/06/05 22:48:39 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain *_brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog&);
		Dog&operator=(const Dog&);

		void makeSound(void) const ;
};

#endif